#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
#include <queue>
using namespace std;
const int maxn = 504;

int N, M, cnt;
int head[maxn*maxn], pre[maxn];
bool vis[maxn];
struct timeNode {
    int hh, mm, startX, startY, endX, endY;
} sample[maxn];
struct node {
    int to, next;
} edge[maxn*maxn];

void init() {
    memset(sample, 0, sizeof(sample));
    memset(edge, 0, sizeof(edge));
    memset(head, -1, sizeof(head));
    cnt = 0;
}

void makeEdge(int u, int v) {
    edge[cnt].to = v;
    edge[cnt].next = head[u];
    head[u] = cnt++;
}

bool dfs(int u) {
    for(int i = head[u]; i != -1; i = edge[i].next) {
        int to = edge[i].to;
        if(!vis[to]) {
            vis[to] = true;
            if(pre[to] == -1 || dfs(pre[to])) {
                pre[to] = u;
                return true;
            }
        }
    }
    return false;
}

int check() {
    int ret = 0;
    memset(pre, -1, sizeof(pre));
    for(int i = 1; i <= M; i++) {
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

    cin >> N;
    while(N--) {
        cin >> M;
        init();
        for(int i = 1; i <= M; i++) {
            int hh, mm, startX, startY, endX, endY;
            scanf("%d:%d%d%d%d%d", &sample[i].hh, &sample[i].mm, &sample[i].startX, &sample[i].startY, &sample[i].endX, &sample[i].endY);
        }
        for(int i = 1; i <= M - 1; i++) {
            for(int j = i + 1; j <= M; j++) {
                int hour, minute, distancce, hourDiff, minuteDiff;
                distancce = abs(sample[i].endX - sample[i].startX) + abs(sample[i].endY - sample[i].startY)
                            + abs(sample[i].endX - sample[j].startX) + abs(sample[i].endY - sample[j].startY);
                minute = sample[i].mm + distancce;
                hour = sample[i].hh + minute / 60;
                minute %= 60;
                if(hour < sample[j].hh || (hour == sample[j].hh && minute < sample[j].mm))
                    makeEdge(i, j);
            }
        }
        cout << M - check() << endl;
    }

    return 0;
}
