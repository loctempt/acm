#include <iostream>
#include <string>
using namespace std;

string pre, in;

string f(int begPre, int begIn, int len){
    if(len <= 0)
        return "";
    int i = begIn;
    while(pre[begPre]!=in[i]) i++;
    int l = i - begIn;
    string cur;
    cur = in[i];//找到根
    string lft = f(begPre + 1, begIn, l);
    string rht = f(begPre + l + 1, begIn + l + 1, len - l - 1);
    return lft + rht + cur;
}

int main(){

    while(cin >> pre >> in){
        cout << f(0,0,pre.length()) << endl;
    }

    return 0;
}


//#include <iostream>
//#include <cstdio>
//#include <string>
//using namespace std;
//int stage = 1;
//string a = " ", pre, in;
//
//struct node{
//    char content;
//    int left, right;
//}tree[100];
//
//int restore(int now, int left, int right){
//    tree[now].content = pre[stage];
//    int mid = 1;
//    while(in[mid] != pre[stage]) mid++;
////    while(in[mid] != pre[1]) root++;
////    tree[mid].content = pre[stage++];
////    if(left >= right){//到达叶子
////        tree[now].left = tree[root].right = -1;//标记叶子
////    }
//    if(left > mid - 1){
//        tree[now].left = -1;
//    }
//    else{
//        stage++;
//        restore(now * 2, left, mid - 1);
//    }
//    if(mid + 1 > right){
//        tree[now].right = -1;
//    }
//    else{
//        stage++;
//        restore(now * 2 + 1, mid + 1, right);
//    }
////    int root = 1;
////    while(in[root] != pre[stage]) root++;
////    tree[root].content = pre[stage++];
//}
//
//int dfs(int now){
//    if(tree[now].left != -1)
//        dfs(tree[now].left);
//    if(tree[now].right != -1)
//        dfs(tree[now].right);
//    cout << tree[now].content;
//}
//
//int main(){
//
//    while(cin >> pre >> in){
//        for(int i = 1; i < 100; i++){
//            tree[i].left = 2*i;
//            tree[i].right = 2*i+1;
//        }
//        pre = a + pre;
//        in = a + in;
//        stage = 1;
//        restore(1, 1, pre.length() - 1);
//        dfs(1);
//        cout << endl;
//    }
//
//    return 0;
//}
//
