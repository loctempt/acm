#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
#include <queue>
using namespace std;
const int maxn = 1e4 + 19, INF = 0x3f3f3f3f;
struct Edge {
    int from, to, cap, flow, cost;
};
struct MCMF {
    int n, m, s, t, flow; // vertexes, arcs, source, terminal.
    vector<Edge> edges;
    vector<int> G[maxn];
    /* Arrays below:
     * inq -- whether an element is inside the queue.
     * d -- for Bellman-Ford algorithm.
     * p -- previous arc.
     * a -- how many to be improved.
    **/
    int inq[maxn], d[maxn], p[maxn], a[maxn];

    void init(int n) {
        this ->n = n;
        for(int i = 0; i < n; i++)
            G[i].clear();
        edges.clear();
    }

    void makeEdge(int from, int to, int cap, int cost) {
        edges.push_back((Edge) {from, to, cap, 0, cost});
        edges.push_back((Edge) {to, from, 0, 0, -cost});
        m = edges.size();
        G[from].push_back(m - 2);
        G[to].push_back(m - 1);
    }

    bool BellmanFord(int s, int t, int &flow, int &cost) {
        for(int i = 0; i < n; i++)
            d[i] = INF;
        memset(inq, 0, sizeof(inq));
        d[s] = 0; inq[s] = 1; p[s] = 0; a[s] = INF;
        queue<int> Q;
        Q.push(s);
        while(!Q.empty()) {
            int u = Q.front();
            Q.pop();
            inq[u] = 0;
            for(int i = 0; i < G[u].size(); i++) {
                Edge &e = edges[G[u][i]];
                if(e.cap > e.flow && d[e.to] > d[u] + e.cost) {
                    d[e.to] = d[u] + e.cost;
                    p[e.to] = G[u][i];
                    a[e.to] = min(a[u], e.cap - e.flow);
                    if(!inq[e.to]) {
                        Q.push(e.to);
                        inq[e.to] = 1;
                    }
                }
            }
        }
        if(d[t] == INF)
            return false;
        flow += a[t];
        cost += d[t] * a[t];
        int u = t;
        while(u != s) {
            edges[p[u]].flow += a[t];
            edges[p[u] ^ 1].flow -= a[t];
            u = edges[p[u]].from;
        }
        return true;
    }
    int minCost(int s, int t) {
        int flow = 0, cost = 0;
        while(BellmanFord(s, t, flow, cost));
        this -> flow = flow;
        return cost;
    }
} Gf;

int main() {
#ifdef TEST
    freopen("test.txt", "r", stdin);
#endif // TEST

    int N, M, K; // N cities, M roads, K units of goods.
    int ui, vi, ai, ci;
    while(cin >> N >> M >> K) {
        Gf.init(maxn);
        int source = 0, terminal = N;
        Gf.makeEdge(source, 1, K, 0);
        for(int i = 1; i <= M; i++) {
            scanf("%d%d%d%d", &ui, &vi, &ai, &ci);
            for(int j = 1; j <= ci; j++) {
                Gf.makeEdge(ui, vi, 1, ai * (2 * j - 1));
            }
        }
        int finalArrival = Gf.minCost(source, terminal);
        cout << (Gf.flow == K ? finalArrival : -1) << endl;
    }

    return 0;
}
