//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//#include <queue>
//using namespace std;
//const int maxn = 3004, INF = 0x3f3f3f3f;
//struct Edge {
//    int from, to, cap, flow;
//    Edge(){}
//    Edge(int ff, int t, int c, int f):from(ff), to(t), cap(c), flow(f){}
//};
//int N, M;
//vector<Edge> edges;
//vector<int> G[maxn];
//bool vis[maxn];
//int d[maxn], cur[maxn];
//struct Dinic {
//    int n, m, s, t;
//    void init() {
//        for(int i = 0; i <= maxn; i++)
//            G[i].clear();
//        edges.clear();
//        memset(vis, false, sizeof(vis));
//        memset(d, 0, sizeof(d));
//        memset(cur, 0, sizeof(cur));
//    }
//    void makeEdge(int from, int to, int cap) {
//        edges.push_back(Edge(from, to, cap, 0));
//        edges.push_back(Edge(to, from, 0, 0));
//        m = edges.size();
//        G[from].push_back(m - 2);
//        G[to].push_back(m - 1);
//    }
//
//    bool BFS() {
//        memset(vis, 0, sizeof(vis));
//        queue<int> Q;
//        Q.push(s);
//        d[s] = 0;
//        vis[s] = true;
//        while(!Q.empty()) {
//            int x = Q.front();
//            Q.pop();
//            for(int i = 0; i < G[x].size(); i++) {
//                Edge &e = edges[G[x][i]];
//                if(!vis[e.to] && e.cap > e.flow) {
//                    vis[e.to] = true;
//                    d[e.to] = d[x] + 1;
//                    Q.push(e.to);
//                }
//            }
//        }
//        return vis[t];
//    }
//
//    int DFS(int x, int a) {
//        if(x == t || a == 0)
//            return a;
//        int flow = 0, f;
//        for(int &i = cur[x]; i < G[x].size(); i++) {
//            Edge &e = edges[G[x][i]];
//            if(d[x] + 1 == d[e.to] && (f = DFS(e.to, min(a, e.cap - e.flow))) > 0) {
//                e.flow += f;
//                edges[G[x][i] ^ 1].flow -= f;
//                flow += f;
//                a -= f;
//                if(a == 0)
//                    break;
//            }
//        }
//        return flow;
//    }
//
//    int maxFlow(int s, int t) {
//        this->s = s;
//        this->t = t;
//        int flow = 0;
//        while(BFS()) {
//            memset(cur, 0, sizeof(cur));
//            flow += DFS(s, INF);
//        }
//        return flow;
//    }
//};
//
//int main() {
//#ifdef TEST
//    freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    char res[][4] {"NO", "YES"};
//    while(cin >> N >> M) {
//        Dinic Gf;
//        Gf.init();
//        int source = 0, terminal = (1<<M)+M+1;
//        int status[1080], temp;
//        memset(status, 0, sizeof(status));
//        for(int i = 0; i < N; i++){
//            int S = 0;
//            for(int j = 0; j < M; j++){
//                scanf("%d", &temp);
//                S |= (temp<<(M-1-j));
//            }
//            status[S]++;
//        }
//        for(int i = 1; i <= (1<<M); i++){
//            if(status[i]){
//                Gf.makeEdge(source, i, status[i]);
//                int x = i, dig = M;
//                while(x){
//                    if(x & 1)
//                        Gf.makeEdge(i, (1<<M)+dig, status[i]);
//                    x >>= 1;
//                    dig--;
//                }
////                for(int j = 0; j < M; j++)
////                    if(i & (1<<j))
////                        Gf.makeEdge(i, (1<<M)+j+1, INF);
//            }
//        }
//        for(int i = 1; i <= M; i++){
//            int capability;
//            scanf("%d", &capability);
//            Gf.makeEdge((1<<M)+i, terminal, capability);
//        }
//        int mf = Gf.maxFlow(source, terminal);
//        printf("%s\n", res[mf == N]);
//    }
//
//
//    return 0;
//}
