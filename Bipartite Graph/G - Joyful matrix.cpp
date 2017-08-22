//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//#include <queue>
//using namespace std;
//const int maxn = 256;
//
//int N, M, K, cnt;
//int head[maxn], mat[maxn][maxn], pre[maxn];
//bool vis[maxn];
//struct node{
//    int to, next;
//}edge[maxn*maxn];
//
//void init(){
//    memset(head, -1, sizeof(head));
//    cnt = 0;
//}
//
//void makeEdge(int a, int b){
//    edge[cnt].to = b;
//    edge[cnt].next = head[a];
//    head[a] = cnt++;
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
//void preparation(int mid){
//    memset(edge, -1, sizeof(edge));
//    init();
//    for(int i = 1; i <= N; i++)
//        for(int j = 1; j <= M; j++)
//            if(mat[i][j] <= mid)
//                makeEdge(i, j);
//}
//
//bool check(int mid){
//    preparation(mid);
//    int ret = 0;
//    memset(pre, -1, sizeof(pre));
//    for(int i = 1; i <= N; i++){
//        memset(vis, false, sizeof(vis));
//        if(dfs(i))
//            ret++;
//    }
//    return ret >= K;
//}
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    while(cin >> N >> M >> K){
//        K = N - K + 1;
//        int maxDig = 0;
//        for(int i = 1; i <= N; i++)
//            for(int j = 1; j <= M; j++){
//                scanf("%d", &mat[i][j]);
//                maxDig = max(maxDig, mat[i][j]);
//            }
//        int left = 1, right = maxDig, mid, ans;
//        while(left <= right){
//            mid = (left + right) >> 1;
//            if(check(mid)){
//                ans = mid;
//                right = mid - 1;
//            }
//            else
//                left = mid + 1;
//        }
//        cout << ans << endl;
//    }
//
//    return 0;
//}
