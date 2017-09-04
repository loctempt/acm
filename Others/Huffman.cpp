#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <map>
#include <cstdio>
using namespace std;
const int maxn = 200, INF = 0x3f3f3f3f;

struct node{
    int weight, father, lson, rson;
    char target;
};

struct Huffman{
    node huffmanTree[maxn];
    int pos = 0, p;
    string codeTable;
    void init(){
        string sample;
        codeTable.clear();
        map<char, int> mapping;
        getline(cin, sample);
        for(int i = 0; i < sample.length(); i++){
            if(!mapping.count(sample[i]))
                mapping[sample[i]] = 1;
            else
                mapping[sample[i]]++;
        }
        memset(huffmanTree, -1, sizeof(huffmanTree));
        int d[maxn];
        for(auto i = mapping.begin(); i != mapping.end(); i++){
            d[pos++] = i->second;
        }
        sort(d, d+pos);
        int len = unique(d, d+pos) - d;
        pos = 0;
        for(auto i = mapping.begin(); i != mapping.end(); i++){
            huffmanTree[pos].target = i->first;
            huffmanTree[pos++].weight = lower_bound(d, d+len, i->second) - d + 1;
        }
    }
    void encode(){
        p = pos;
        pos--;
        while(pos < p*2-1-1){
            int pos1, pos2, min1 = INF, min2 = INF;
            for(int i = 0; i <= pos; i++){
                if(huffmanTree[i].father == -1 && huffmanTree[i].weight < min1){
                    min1 = huffmanTree[i].weight;
                    pos1 = i;
                }
            }
            for(int i = 0; i <= pos; i++){
                if(i == pos1)
                    continue;
                if(huffmanTree[i].father == -1 && huffmanTree[i].weight < min2){
                    min2 = huffmanTree[i].weight;
                    pos2 = i;
                }
            }
            huffmanTree[++pos].weight = huffmanTree[pos1].weight + huffmanTree[pos2].weight;
            huffmanTree[pos].lson = pos1;
            huffmanTree[pos].rson = pos2;
            huffmanTree[pos1].father = huffmanTree[pos2].father = pos;
        }
    }
    void dfs(int pp){
        if(huffmanTree[pp].target != -1){
            cout << huffmanTree[pp].target << " : " << codeTable << endl;
//            codeTable.erase(--codeTable.end());
        }
        else{
            codeTable += '1';
            dfs(huffmanTree[pp].lson);
            codeTable.erase(--codeTable.end());
            codeTable += '0';
            dfs(huffmanTree[pp].rson);
            codeTable.erase(--codeTable.end());
        }
    }
    void showCodeTable(){
        cout << "Encoding table:" << endl;
        dfs(2*p-1-1);
        cout << endl;
    }
    void decode(const string &text){
        int pp = 0, len = text.length();
        while(pp < len){
            int root = 2*p-1-1, cur = root;
            while(huffmanTree[cur].target == -1){
                if(text[pp++] == '0')
                    cur = huffmanTree[cur].rson;
                else
                    cur = huffmanTree[cur].lson;
            }
            cout.put(huffmanTree[cur].target);
        }
        cout << endl;
    }
};

int main(){
#ifdef TEST
freopen("test.txt", "r", stdin);
#endif // TEST

    Huffman huf;
    huf.init();
    huf.encode();
    huf.showCodeTable();
    string text;
    while(getline(cin, text)){
        huf.decode(text);
    }

    return 0;
}
/*
aaaaabbc
0001100
00101
00111010001
        [6]
        / \0
      1/  [3]
      /  1/ \0
    (a) (c) (b)
result:
bcab
bac
baaacbc
*/
