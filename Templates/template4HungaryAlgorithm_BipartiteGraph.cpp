//二分图 匈牙利算法
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
#include <queue>
using namespace std;
const int maxn = 104;

int N, M, K;
int pre[maxn];
int g[maxn][maxn]; // graph.
bool link[maxn][maxn], vis[maxn];

bool dfs(int u) {
   for(int i = 1; i <= M; i++) {
       if(link[u][i] && !vis[i]) {
           vis[i] = true;
           if(pre[i] == -1 || dfs(pre[i])) {
               pre[i] = u;
               return true;
           }
       }
   }
   return false;
}

int Hungary() {
   memset(pre, -1, sizeof(pre));
   int ret = 0;
   for(int i = 1; i <= N; i++) {
       memset(vis, false, sizeof(vis));
       if(dfs(i))
           ret++;
   }
   return ret;
}

int main() {
#ifdef TEST
   freopen("test.txt", "r", stdin);
#endif // TEST

   int Case = 1;
   while(~scanf("%d%d%d", &N, &M, &K)) {
       memset(link, false, sizeof(link));
       for(int i = 1; i <= K; i++) {
           int x, y;
           scanf("%d%d", &x, &y);
           link[x][y] = true;
       }
   }

   return 0;
}
