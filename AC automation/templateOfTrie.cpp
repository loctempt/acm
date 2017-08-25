#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;
const int maxNode = 500, sigma_size = 26;

struct Trie{
    int ch[maxNode][sigma_size];
    int val[maxNode];
    int sz;
    Trie(){
        sz = 1;
        memset(ch[0], 0, sizeof(ch[0]));
    }
    int idx(char c){
        return c - 'a';
    }
    void insert(char *s, int v){
        int u = 0, n = strlen(s);
        for(int i = 0; i < n; i++){
            int c = idx(s[i]);
            if(!ch[u][c]){
                memset(ch[sz], 0, sizeof(ch[sz]));
                val[sz] = 0;
                ch[u][c] = sz++;
            }
            u = ch[u][c];
        }
        val[u] = v;
    }
    int query(char *s){
        int u = 0, n = strlen(s);
        for(int i = 0; i < n; i++){
            int c = idx(s[i]);
            u = ch[u][c];
        }
        return val[u];
    }
};

int main(){
#ifdef TEST
freopen("test.txt", "r", stdin);
#endif

    char str[50], Case = 1;
    Trie Td;
    while(~scanf("%s", str)){
        int x;
        cin >> x;
        if(x){
            Td.insert(str, Case++);
        }
        else
            cout << Td.query(str) << endl;
    }

    return 0;
}
