//最小公共祖先
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
#include <queue>
using namespace std;
const int maxn = 8e4+19, maxq = 1e3+19;

int T, N, M, K, u, v, w, a, b, cnt, qcnt;
char ch;

struct node{
   int to, next, lca;
}edge[maxn], qedge[maxn];
bool vis[maxn];
int father[maxn], head[maxn], qhead[maxn], dist[maxn];

int Find(int now){
   return now == father[now] ? father[now] : father[now] = Find(father[now]);
}

void init(){
   memset(vis, false, sizeof(vis));
   memset(father, 0, sizeof(father));
   memset(head, -1, sizeof(head));
   memset(qhead, -1, sizeof(qhead));
   memset(dist, 0, sizeof(dist));
   memset(edge, 0, sizeof(edge));
   memset(qedge, 0, sizeof(qedge));
   cnt = qcnt = 0;
}

void makeEdge(int u, int v, int w){
   edge[cnt].to = v;
   edge[cnt].lca = w;
   edge[cnt].next = head[u];
   head[u] = cnt++;
   edge[cnt].to = u;
   edge[cnt].lca = w;
   edge[cnt].next = head[v];
   head[v] = cnt++;
}

void makeQedge(int u, int v){
   qedge[qcnt].to = v;
   qedge[qcnt].next = qhead[u];
   qhead[u] = qcnt++;
   qedge[qcnt].to = u;
   qedge[qcnt].next = qhead[v];
   qhead[v] = qcnt++;
}

void tarjan(int u){
   father[u] = u;
   vis[u] = true;
   for(int k = head[u]; k != -1; k = edge[k].next){
       if(!vis[edge[k].to]){
           dist[edge[k].to] = dist[u] + edge[k].lca;
           tarjan(edge[k].to);
           father[edge[k].to] = u;
       }
   }
   for(int k = qhead[u]; k != -1; k = qedge[k].next){
       if(vis[qedge[k].to]){
           qedge[k].lca = dist[u] + dist[qedge[k].to] - 2*dist[Find(qedge[k].to)];
           qedge[k^1].lca = qedge[k].lca;
       }
   }
}

int main(){
#ifdef TEST
freopen("test.txt", "r", stdin);
#endif // TEST

   cin >> T;
   while(T--){
       cin >> M >> K;
       init();
       for(int i = 0; i < M-1; i++){
           scanf("%d%d%d", &u, &v, &w);
           makeEdge(u, v, w);
       }
       for(int i = 0; i < K; i++){
           scanf("%d%d", &a, &b);
           makeQedge(a, b);
       }
       tarjan(1);
       for(int i = 0; i < qcnt; i+=2)
           printf("%d\n", qedge[i].lca);
   }

   return 0;
}
