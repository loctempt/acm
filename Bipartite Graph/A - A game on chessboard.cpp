//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//#include <queue>
//using namespace std;
//const int maxn = 104;
//
//int N, M, K;
//int pre[maxn];
//bool link[maxn][maxn], vis[maxn];
//
//bool dfs(int u) {
//    for(int i = 1; i <= M; i++) {
//        if(link[u][i] && !vis[i]) {
//            vis[i] = true;
//            if(pre[i] == -1 || dfs(pre[i])) {
//                pre[i] = u;
//                return true;
//            }
//        }
//    }
//    return false;
//}
//
//int check() {
//    memset(pre, -1, sizeof(pre));
//    int ret = 0;
//    for(int i = 1; i <= N; i++) {
//        memset(vis, false, sizeof(vis));
//        if(dfs(i))
//            ret++;
//    }
//    return ret;
//}
//
//int main() {
//#ifdef TEST
//    freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    int Case = 1;
//    while(~scanf("%d%d%d", &N, &M, &K)) {
//        memset(link, false, sizeof(link));
//        for(int i = 1; i <= K; i++) {
//            int x, y;
//            scanf("%d%d", &x, &y);
//            link[x][y] = true;
//        }
//        int tot = 0, ans = 0;
//        tot = check();
//        for(int i = 1; i <= N; i++)
//            for(int j = 1; j <= M; j++) {
//                if(link[i][j]) {
//                    link[i][j] = false;
//                    if(check() < tot)
//                        ans++;
//                    link[i][j] = true;
//                }
//            }
//        printf("Board %d have %d important blanks for %d chessmen.\n", Case++, ans, tot);
//    }
//
//    return 0;
//}
