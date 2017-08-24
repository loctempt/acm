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
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    int N, M, Case = 1;
//    cin >> N;
//    while(cin >> N >> M){ //共有500天工作时间。
//        Dinic Gf;
//        int si, ei, pi, maxLoad = 0;
//        Gf.n = 500+2+N;
//        bool vis[maxn];
//        memset(vis, false, sizeof(vis));
//        for(int i = 1; i <= N; i++){
//            cin >> pi >> si >> ei;
//            maxLoad += pi;
//            Gf.makeEdge(0, 500+i, pi);
//            for(int j = si; j <= ei; j++){
//                Gf.makeEdge(500+i, j, 1);
//                vis[j] = true;
//            }
//        } // finish inputing.
//        for(int i = 1; i <= 500; i++){ // adding edge between days and super string.
//            if(vis[i]){
//                Gf.makeEdge(i, 500+N+1, M);
//            }
//        }
//        printf("Case %d: %s\n\n", Case++, Gf.maxFlow(0,500+N+1)==maxLoad ? "Yes" : "No");
//    }
//
//
//   return 0;
//}

//
//    #include<cstdio>
//    #include<cstring>
//    #include<algorithm>
//    #include<queue>
//    #include<vector>
//    #define INF 1e9
//    using namespace std;
//    const int maxn =1000+10;
//
//    struct Edge
//    {
//        int from,to,cap,flow;
//        Edge(){}
//        Edge(int f,int t,int c,int fl):from(f),to(t),cap(c),flow(fl){}
//    };
//
//    struct Dinic
//    {
//        int n,m,s,t;
//        vector<Edge> edges;
//        vector<int> G[maxn];
//        bool vis[maxn];
//        int cur[maxn];
//        int d[maxn];
//
//        void init(int s,int t)
//        {
//            this->s=s, this->t=t;
//            edges.clear();
//            for(int i=0;i<n;++i) G[i].clear();
//        }
//
//        void AddEdge(int from,int to,int cap)
//        {
//            edges.push_back( Edge(from,to,cap,0) );
//            edges.push_back( Edge(to,from,0,0) );
//            m=edges.size();
//            G[from].push_back(m-2);
//            G[to].push_back(m-1);
//        }
//
//        bool BFS()
//        {
//            queue<int> Q;
//            memset(vis,0,sizeof(vis));
//            vis[s]=true;
//            d[s]=0;
//            Q.push(s);
//            while(!Q.empty())
//            {
//                int x=Q.front(); Q.pop();
//                for(int i=0;i<G[x].size();++i)
//                {
//                    Edge& e=edges[G[x][i]];
//                    if(!vis[e.to] && e.cap>e.flow)
//                    {
//                        vis[e.to]=true;
//                        d[e.to]=d[x]+1;
//                        Q.push(e.to);
//                    }
//                }
//            }
//            return vis[t];
//        }
//
//        int DFS(int x,int a)
//        {
//            if(x==t || a==0) return a;
//            int flow=0, f;
//            for(int &i=cur[x];i<G[x].size();++i)
//            {
//                Edge &e=edges[G[x][i]];
//                if(d[e.to]==d[x]+1 && (f=DFS(e.to,min(a,e.cap-e.flow) ) )>0)
//                {
//                    e.flow +=f;
//                    edges[G[x][i]^1].flow -=f;
//                    flow +=f;
//                    a -=f;
//                    if(a==0) break;
//                }
//            }
//            return flow;
//        }
//
//        int max_flow()
//        {
//            int ans=0;
//            while(BFS())
//            {
//                memset(cur,0,sizeof(cur));
//                ans +=DFS(s,INF);
//            }
//            return ans;
//        }
//    }DC;
//
//    int full_flow;
//
//    int main()
//    {
//        freopen("test.txt", "r", stdin);
//        int T; scanf("%d",&T);
//        for(int kase=1;kase<=T;++kase)
//        {
//            int n,m;
//            scanf("%d%d",&n,&m);
//            full_flow=0;
//            int src=0,dst=500+n+1;
//            DC.init(src,dst);
//            bool vis[maxn];//表示第i天是否被用到
//            memset(vis,0,sizeof(vis));
//
//            for(int i=1;i<=n;++i)
//            {
//                int P,S,E;
//                scanf("%d%d%d",&P,&S,&E);
//                DC.AddEdge(src,500+i,P);
//                full_flow += P;
//                for(int j=S;j<=E;++j)
//                {
//                    DC.AddEdge(500+i,j,1);
//                    vis[j]=true;
//                }
//            }
//
//            for(int i=1;i<=500;++i)if(vis[i])//被任务覆盖的日子才添加边
//                DC.AddEdge(i,dst,m);
//            printf("Case %d: %s\n\n",kase,DC.max_flow()==full_flow?"Yes":"No");
//        }
//        return 0;
//    }
