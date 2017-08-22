#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
#include <queue>
using namespace std;
const int maxn = 2e4+19, maxq = 2e6+19;

int n, m, c, cnt, qcnt, k;
int head[maxn], qhead[maxn], father[maxn], dist[maxn];
int vis[maxn];
struct node{
    int to, next, w;
}edge[maxn], qedge[maxq];

int Find(int now){
    return now == father[now] ? now : father[now] = Find(father[now]);
}

void init(){
    memset(dist, 0, sizeof(dist));
    memset(father, 0, sizeof(father));
    memset(head, -1, sizeof(head));
    memset(qhead, -1, sizeof(qhead));
    memchr(vis, 0, sizeof(vis));
    memset(edge, -1, sizeof(edge));
    memset(qedge, -1, sizeof(qedge));
    cnt = qcnt = k = 0;
}

inline void makeEdge(int u, int v, int w){
    edge[cnt].to = v;
    edge[cnt].w = w;
    edge[cnt].next = head[u];
    head[u] = cnt++;
    edge[cnt].to = u;
    edge[cnt].w = w;
    edge[cnt].next = head[v];
    head[v] = cnt++;
}

inline void makeQedge(int u, int v){
    qedge[qcnt].to = v;
    qedge[qcnt].next = qhead[u];
    qhead[u] = qcnt++;
    qedge[qcnt].to = u;
    qedge[qcnt].next = qhead[v];
    qhead[v] = qcnt++;
}

void tarjan(int u, int c){
    father[u] = u;
    vis[u] = c;
    for(int i = head[u]; i != -1; i = edge[i].next){
        if(!vis[edge[i].to]){
            dist[edge[i].to] = dist[u] + edge[i].w;
            tarjan(edge[i].to, c);
            father[edge[i].to] = u;
        }
    }
    for(int i = qhead[u]; i != -1; i = qedge[i].next){
        if(vis[qedge[i].to] == c){
            qedge[i].w = dist[u] + dist[qedge[i].to] - 2*dist[Find(qedge[i].to)];
            qedge[i^1].w = qedge[i].w;
        }
    }
}

int main(){
#ifdef TEST
freopen("test.txt", "r", stdin);
#endif // TEST

    while(cin >> n >> m >> c){
        init();
        int u, v, w;
        for(int i = 0; i < m; i++){
            scanf("%d%d%d", &u, &v, &w);
            makeEdge(u, v, w);
        }
        int a, b;
        for(int i = 0; i < c; i++){
            scanf("%d%d", &a, &b);
            makeQedge(a, b);
        }
        for(int i = 1; i <= n; i++){
            if(!vis[i]){
                dist[i] = 0;
                tarjan(i, ++k);
            }
        }
        for(int i = 0; i < qcnt; i += 2){
            if(qedge[i].w == -1)
                printf("Not connected\n");
            else
                printf("%d\n", qedge[i].w);
        }
    }

    return 0;
}
