//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//#include <queue>
//using namespace std;
//const int maxn = 1e4+19, INF = 0x3f3f3f3f;
//struct Edge{
//	int from, to, cap, flow, cost;
//};
//struct MCMF{
//	int n, m, s, t; // vertexes, arcs, source, terminal.
//	vector<Edge> edges;
//	vector<int> G[maxn];
//	/* Arrays below:
//	 * inq -- whether an element is inside the queue.
//	 * d -- for Bellman-Ford algorithm.
//	 * p -- previous arc.
//	 * a -- how many to be improved.
//	**/
//	int inq[maxn], d[maxn], p[maxn], a[maxn];
//
//	void init(int n){
//		this ->n = n;
//		for(int i = 0; i < n; i++)
//			G[i].clear();
//		edges.clear();
//	}
//
//	void makeEdge(int from, int to, int cap, int cost){
//		edges.push_back((Edge){from, to, cap, 0, cost});
//		edges.push_back((Edge){to, from, 0, 0, -cost});
//		m = edges.size();
//		G[from].push_back(m-2);
//		G[to].push_back(m-1);
//	}
//
//	bool BellmanFord(int s, int t, int &flow, int &cost){
//		for(int i = 0; i <n; i++)
//			d[i] = INF;
//		memset(inq, 0, sizeof(inq));
//		d[s] = 0; inq[s] = 1; p[s] = 0; a[s] = INF;
//		queue<int> Q;
//		Q.push(s);
//		while(!Q.empty()){
//			int u = Q.front();
//			Q.pop();
//			inq[u] = 0;
//			for(int i = 0; i < G[u].size(); i++){
//				Edge &e = edges[G[u][i]];
//				if(e.cap > e.flow && d[e.to] > d[u] + e.cost){
//					d[e.to] = d[u] + e.cost;
//					p[e.to] = G[u][i];
//					a[e.to] = min(a[u], e.cap - e.flow);
//					if(!inq[e.to]){
//						Q.push(e.to);
//						inq[e.to] = 1;
//					}
//				}
//			}
//		}
//		if(d[t] == INF)
//			return false;
//		flow += a[t];
//		cost += d[t] * a[t];
//		int u = t;
//		while(u != s){
//			edges[p[u]].flow += a[t];
//			edges[p[u]^1].flow -= a[t];
//			u = edges[p[u]].from;
//		}
//		return true;
//	}
//	int minCost(int s, int t){
//		int flow = 0, cost = 0;
//		while(BellmanFord(s, t, flow, cost));
//		return cost;
//	}
//}Gf;
//
//char sample[104][104];
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    int N, M;
//    while(cin >> N >> M){
//        if(N == M && N == 0)
//            break;
//        Gf.init(maxn);
//        int source = 0, terminal = 10003;
//        memset(sample, 0, sizeof(sample));
//        for(int i = 1; i <= N; i++){
//            scanf("%s", sample[i]+1);
//        }
//        for(int i = 1; i <= N; i++)
//            for(int j = 1; j <= M; j++){
//                if(sample[i][j] == 'm'){
//                    Gf.makeEdge(source, (i-1)*M+j, 1, 0);
//                    for(int u = 1; u <= N; u++){
//                        for(int v = 1; v <= M; v++){
//                            if(sample[u][v] == 'H')
//                                Gf.makeEdge((i-1)*M+j, (u-1)*M+v, 1, abs(u-i)+abs(v-j));
//                        }
//                    }
//                }
//                if(sample[i][j] == 'H')
//                    Gf.makeEdge((i-1)*M+j, terminal, 1, 0);
//            }
//        cout << Gf.minCost(source, terminal) << endl;
//    }
//
//
//   return 0;
//}
