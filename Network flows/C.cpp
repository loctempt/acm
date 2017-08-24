//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//#include <queue>
//using namespace std;
//const int maxn = 1e3+19, INF = 0x3f3f3f3f;
//struct Edge{
//	int from, to, cap, flow;
//};
//struct Dinic{
//	int n, m, s, t;
//	vector<Edge> edges;
//	vector<int> G[maxn];
//	bool vis[maxn];
//	int d[maxn], cur[maxn];
//
//	void makeEdge(int from, int to, int cap){
//		edges.push_back((Edge){from, to, cap, 0});
//		edges.push_back((Edge){to, from, 0, 0});
//		m = edges.size();
//		G[from].push_back(m-2);
//		G[to].push_back(m-1);
//	}
//
//	bool BFS(){
//		memset(vis, 0, sizeof(vis));
//		queue<int> Q;
//		Q.push(s);
//		d[s] = 0;
//		vis[s] = true;
//		while(!Q.empty()){
//			int x = Q.front();
//			Q.pop();
//			for(int i = 0; i < G[x].size(); i++){
//				Edge &e = edges[G[x][i]];
//				if(!vis[e.to] && e.cap > e.flow){
//					vis[e.to] = true;
//					d[e.to] = d[x] + 1;
//					Q.push(e.to);
//				}
//			}
//		}
//		return vis[t];
//	}
//
//	int DFS(int x, int a){
//		if(x == t || a == 0)
//			return a;
//		int flow = 0, f;
//		for(int &i = cur[x]; i < G[x].size(); i++){
//			Edge &e = edges[G[x][i]];
//			if(d[x] + 1 == d[e.to] && (f = DFS(e.to, min(a, e.cap-e.flow))) > 0){
//				e.flow += f;
//				edges[G[x][i]^1].flow -= f;
//				flow += f;
//				a -= f;
//				if(a == 0)
//					break;
//			}
//		}
//		return flow;
//	}
//
//	int maxFlow(int s, int t){
//		this->s = s;
//		this->t = t;
//		int flow = 0;
//		while(BFS()){
//			memset(cur, 0, sizeof(cur));
//			flow += DFS(s, INF);
//		}
//		return flow;
//	}
//};
//
//int dir[4][13][3];
//char pillar[25][25], mat[25][25];
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    int N, D, Case = 1;
//    cin >> N;
//    while(cin >> N >> D){
//        int source = 0, sink = 999;
//        memset(pillar, 0, sizeof(pillar));
//        memset(mat, 0, sizeof(mat));
//        Dinic Gf;
//        for(int i = 1; i <= N; i++){
//            scanf("%s", pillar[i]+1);
//        }
//        for(int i = 1; i <= N; i++){
//            scanf("%s", mat[i]+1);
//        }
//        int len = strlen(pillar[1]+1), totalL = 0;
//        for(int i = 1; i <= N; i++){
//            for(int j = 1; j <= len; j++){
//                if(mat[i][j] == 'L'){
//                    totalL++;
//                    Gf.makeEdge(source, (i-1)*len+j, 1);
//                }
//            }
//        }
//        for(int i = 1; i <= N; i++){
//            for(int j = 1; j <= len; j++){
//                if(pillar[i][j] != '0'){
//                    for(int u = 1; u <= N; u++){
//                        for(int v = 1; v <= len; v++){
//                            if(u == i && v == j)
//                                continue;
//                            if(pillar[u][v] == '0')
//                                continue;
//                            if(abs(u-i)+abs(v-j) <= D)
//                                Gf.makeEdge(N*len+(i-1)*len+j, (u-1)*len+v, INF);
//                        }
//                    }
//                }
//            }
//        }
//        for(int i = 1; i <= N; i++){
//            for(int j = 1; j <= len; j++){
//                int num = pillar[i][j] - '0';
//                Gf.makeEdge((i-1)*len+j, N*len+(i-1)*len+j, num == 0 ? INF : num);
//                if(i <= D || j <= D || N-i+1 <= D || len-j+1 <= D)
//                    Gf.makeEdge(N*len+(i-1)*len+j, sink, INF);
//            }
//        }
//        int maxF = Gf.maxFlow(source, sink);
//        int remaining = totalL - maxF;
//        if(remaining > 1)
//            printf("Case #%d: %d lizards were left behind.\n", Case++, remaining);
//        else if(remaining == 1)
//            printf("Case #%d: 1 lizard was left behind.\n", Case++);
//        else
//            printf("Case #%d: no lizard was left behind.\n", Case++);
//    }
//
//
//   return 0;
//}
