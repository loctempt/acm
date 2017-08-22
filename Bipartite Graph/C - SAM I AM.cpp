//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//#include <queue>
//using namespace std;
//const int maxn = 1004, maxq = 1e6+4;
//
//int r, c, n, cnt;
//int head[maxn], linkL[maxn], linkR[maxn];
//bool vis[maxn], S[maxn], T[maxn];
//struct node{
//    int to, next;
//}edge[maxq];
//
//void makeEdge(int a, int b){
//    edge[cnt].to = b;
//    edge[cnt].next = head[a];
//    head[a] = cnt++;
//}
//
//void init(){
//    memset(head, -1, sizeof(head));
//    memset(linkL, 0, sizeof(linkL));
//    memset(linkR, 0, sizeof(linkR));
//    cnt = 0;
//}
//
//bool dfs(int u){
//    S[u] = true;
//    for(int i = head[u]; i != -1; i = edge[i].next){
//        int v = edge[i].to;
//        if(!vis[v]){
//            vis[v] = true;
//            if(!linkL[v] || dfs(linkL[v])){
//                linkL[v] = u;
//                linkR[u] = v;
//                return true;
//            }
//        }
//    }
//    return false;
//}
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    while(scanf("%d%d%d", &r, &c, &n) && r + c + n){
//        init();
//        for(int i = 1; i <= n; i++){
//            int x, y;
//            scanf("%d%d", &x, &y);
//            makeEdge(x, y);
//        }
//        int ans = 0;
//        for(int i = 1; i <= r; i++){
//            memset(vis, false, sizeof(vis));
//            memset(S, false, sizeof(S));
//            if(dfs(i))
//                ans++;
//        }
//        memset(vis, false, sizeof(vis));
//        memset(S, false, sizeof(S));
//        for(int i = 1; i <= r; i++){
//            if(!linkR[i])
//                dfs(i);
//        }
//        printf("%d", ans);
//        for(int i = 1; i <= r; i++)
//            if(!S[i])
//                printf(" r%d", i);
//        for(int i = 1; i <= c; i++)
//            if(vis[i])
//                printf(" c%d", i);
//        printf("\n");
//    }
//
//    return 0;
//}
