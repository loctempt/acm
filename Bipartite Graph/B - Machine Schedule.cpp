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
bool vis[maxn], link[maxn][maxn];

bool dfs(int u) {
    for(int i = 1; i < M; i++) {
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

int check() {
    int ret = 0;
    memset(pre, -1, sizeof(pre));
    for(int i = 1; i < N; i++) {
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

    while(scanf("%d%d%d", &N, &M, &K) == 3) {
        memset(link, 0, sizeof(link));
        for(int i = 1; i <= K; i++) {
            int a, b;
            scanf("%*d%d%d", &a, &b);
            if(a && b)
                link[a][b] = true;
        }
        cout << check() << endl;
    }

    return 0;
}
