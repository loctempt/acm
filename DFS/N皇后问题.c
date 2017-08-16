#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int stage = 1;
string a = " ", pre, in;
struct node{
    char content;
    int left, right;
}tree[30];

int restore(int now, int left, int right){
    tree[now].content = pre[stage];
    int mid = 1;
    while(in[mid] != pre[stage]) mid++;
//    while(in[mid] != pre[1]) root++;
//    tree[mid].content = pre[stage++];
//    if(left >= right){//到达叶子
//        tree[now].left = tree[root].right = -1;//标记叶子
//    }
    if(left > mid - 1){
        tree[now].left = -1;
    }
    else{
        stage++;
        restore(now * 2, left, mid - 1);
    }
    if(mid + 1 > right){
        tree[now].right = -1;
    }
    else{
        stage++;
        restore(now * 2 + 1, mid + 1, right);
    }
//    int root = 1;
//    while(in[root] != pre[stage]) root++;
//    tree[root].content = pre[stage++];
}

int dfs(int now){
    cout << tree[now].content << " " ;
    if(tree[now].left != -1)
        dfs(tree[now].left);
    if(tree[now].right != -1)
        dfs(tree[now].right);
}

int main(){

    while(cin >> pre >> in){
    for(int i = 1; i < 30; i++){
        tree[i].left = i * 2;
        tree[i].right = i * 2 + 1;
    }
        pre = a + pre;
        in = a + in;
        stage = 1;
        restore(1, 1, pre.length() - 1);
        dfs(1);
        cout << endl;
    }

    return 0;
}
