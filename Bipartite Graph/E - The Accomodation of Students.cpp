//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//#include <queue>
//using namespace std;
//const int maxn = 204;
//
//int N, M, cnt;
//int pre[maxn], head[maxn];
//bool vis[maxn], col[maxn];
//struct node{
//    int to, next;
//}edge[maxn*maxn];
//
//void init(){
//    memset(head, -1, sizeof(head));
//    memset(col, 0, sizeof(col));
//    cnt = 0;
//    col[1] = 1;
//}
//
//void makeEdge(int u, int v){
//    edge[cnt].to = v;
//    edge[cnt].next = head[u];
//    head[u] = cnt++;
//}
//
//bool dfs(int u){
//    for(int i = head[u]; i != -1; i = edge[i].next){
//        int to = edge[i].to;
//        if(!vis[to]){
//            vis[to] = true;
//            if(pre[to] == -1 || dfs(pre[to])){
//                pre[to] = u;
//                return true;
//            }
//        }
//    }
//    return false;
//}
//
//bool color(int u){
//    for(int i = head[u]; i != -1; i = edge[i].next){
//        int to = edge[i].to;
//        if(!col[to]){
//            col[to] = !col[u];
//            if(!color(to))
//                return false;
//        }
//        else if(col[to] == col[u])
//            return false;
//    }
//    return true;
//}
//
//int check(){
//    int ret = 0;
//    memset(pre, -1, sizeof(pre));
//    for(int i = 1; i <= N; i++){
//        memset(vis, false, sizeof(vis));
//        if(dfs(i))
//            ret++;
//    }
//    return ret;
//}
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    while(cin >> N >> M){
////        if(N==1){
////            cout << "No" << endl;
////            continue;
////        }
//        init();
//        for(int i = 1; i <= M; i++){
//            int a, b;
//            scanf("%d%d", &a, &b);
//            makeEdge(a, b);
//            makeEdge(b, a);
//        }
//        if(!color(1)){
//            cout << "No" << endl;
//            continue;
//        }
//        cout << check() / 2 << endl;
//    }
//
//    return 0;
//}
