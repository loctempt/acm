//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//#include <queue>
//using namespace std;
//const int maxn = 304;
//
//int P, N, T;
//int pre[maxn];
//bool g[maxn][maxn], vis[maxn];
//
//bool dfs(int u){
//    for(int i = 1; i <= N; i++){
//        if(g[u][i] && !vis[i]){
//            vis[i] = true;
//            if(pre[i] == -1 || dfs(pre[i])){
//                pre[i] = u;
//                return true;
//            }
//        }
//    }
//    return false;
//}
//
//int check(){
//    memset(pre, -1, sizeof(pre));
//    int ret = 0;
//    for(int i = 1; i <= P; i++){
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
//    cin >> T;
//    while(T--){
//        memset(g, false, sizeof(g));
//        cin >> P >> N;
//        for(int i = 1; i <= P; i++){
//            int k, q;
//            scanf("%d", &k);
//            for(int j = 1; j <= k; j++){
//                scanf("%d", &q);
//                g[i][q] = true;
//            }
//        }
//        int res = check();
//        if(res == P)
//            cout << "YES" << endl;
//        else
//            cout << "NO" << endl;
//    }
//
//    return 0;
//}
