#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
#include <queue>
using namespace std;
const int maxn = 1e3+19, INF = 0x3f3f3f3f;
struct Edge{
	int from, to, cap, flow;
};
struct Dinic{
	int n, m, s, t;
	vector<Edge> edges;
	vector<int> G[maxn];
	bool vis[maxn];
	int d[maxn], cur[maxn];

	void makeEdge(int from, int to, int cap){
		edges.push_back((Edge){from, to, cap, 0});
		edges.push_back((Edge){to, from, 0, 0});
		m = edges.size();
		G[from].push_back(m-2);
		G[to].push_back(m-1);
	}

	bool BFS(){
		memset(vis, 0, sizeof(vis));
		queue<int> Q;
		Q.push(s);
		d[s] = 0;
		vis[s] = true;
		while(!Q.empty()){
			int x = Q.front();
			Q.pop();
			for(int i = 0; i < G[x].size(); i++){
				Edge &e = edges[G[x][i]];
				if(!vis[e.to] && e.cap > e.flow){
					vis[e.to] = true;
					d[e.to] = d[x] + 1;
					Q.push(e.to);
				}
			}
		}
		return vis[t];
	}

	int DFS(int x, int a){
		if(x == t || a == 0)
			return a;
		int flow = 0, f;
		for(int &i = cur[x]; i < G[x].size(); i++){
			Edge &e = edges[G[x][i]];
			if(d[x] + 1 == d[e.to] && (f = DFS(e.to, min(a, e.cap-e.flow))) > 0){
				e.flow += f;
				edges[G[x][i]^1].flow -= f;
				flow += f;
				a -= f;
				if(a == 0)
					break;
			}
		}
		return flow;
	}

	int maxFlow(int s, int t){
		this->s = s;
		this->t = t;
		int flow = 0;
		while(BFS()){
			memset(cur, 0, sizeof(cur));
			flow += DFS(s, INF);
		}
		return flow;
	}
};

bool sample[204][204];

int main(){
#ifdef TEST
freopen("test.txt", "r", stdin);
#endif // TEST

    int N, S, T;
    while(cin >> N >> S >> T){
        Dinic Gf;
        Gf.n = N;
        int source = 0, terminal = 999;
        for(int i = 1; i <= N; i++){
            for(int j = 1; j <= N; j++){
                scanf("%d", sample[i][j]);
            }
        }
        if(sample[S][T]){
            cout << "NO ANSWER!" << endl;
            continue;
        }
        for(int i = 1; i <= N; i++){
            Gf.makeEdge(i, N+i, 1);
            for(int j = 1; j <= N; j++){
                if(sample[i][j])
                    Gf.makeEdge(N+i, j, INF);
            }
        }
        Gf.makeEdge()
        cout << Gf.maxFlow(1,M) << endl;
    }


   return 0;
}
