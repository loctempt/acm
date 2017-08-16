//版本1
#include <vector>
#include <iostream>
#include <cstdio>
#include <utility>
#include <map>
#include <cstring>
#include <algorithm>
using namespace std;
//map<int, vector<pair<int, int> > > tree;//保存节点的连通情况
vector<pair<int, int> > tree[100006];
vector<int> result;//保存各路线的长度
bool isAccessed[100005];
void dfs(int now, int v){
    if(tree[now].size() == 1 && isAccessed[tree[now][0].first]){
        result.push_back(v);
//        cout << "ending point: " << now << endl;
        return;
    }
//    else{
//        cout << "now: " << now << "  tree[now].size(): " << tree[now].size() << "     isAccessed[tree[now][0].first]: " << isAccessed[tree[now][0].first] << endl;

    isAccessed[now] = true;
    for(int i = 0; i < tree[now].size(); i++){
        int nextNode = tree[now][i].first;
        if(!isAccessed[nextNode]){
            dfs(nextNode, v + tree[now][i].second);
        }
    }
    result.push_back(v);
    return;
}
int main(){

//    if(!tree.count(3))
//        tree[3].push_back(make_pair(4,100));
//    cout << tree[3][0].first << endl << tree[3][0].second << endl;
    int T;
    cin >> T;
    int t = 1;
    while(t <= T){
        result.clear();
        memset(isAccessed, false, sizeof(isAccessed));
        int n, s;
        cin >> n >> s;
        for(int i = 0; i < 100001; i++){
            tree[i].clear();
        }
        for(int i = 0; i < n - 1; i++){
            int a, b, v;//起点、终点、权
            scanf("%d%d%d", &a, &b, &v);
            tree[a].push_back(make_pair(b, v));
            tree[b].push_back(make_pair(a, v));
        }
        dfs(s, 0);
        sort(result.begin(), result.end());//将所有的路程长度排序
        printf("Case #%d: %d\n",t++ , result.back());//输出排序后的末尾元素即得最大值
    }

    return 0;
}

//版本2
//#include <vector>
//#include <iostream>
//#include <cstdio>
//#include <utility>
//#include <map>
//#include <cstring>
//#include <algorithm>
//using namespace std;
////map<int, vector<pair<int, int> > > tree;//保存节点的连通情况
//vector<pair<int, int> > tree[100006];
//vector<int> result;//保存各路线的长度
//bool isAccessed[100005];
//void dfs(int now, int v){
////    if(tree[now].size() == 1 && isAccessed[tree[now][0].first]){
////        result.push_back(v);
//////        cout << "ending point: " << now << endl;
////        return;
////    }
////    else{
////        cout << "now: " << now << "  tree[now].size(): " << tree[now].size() << "     isAccessed[tree[now][0].first]: " << isAccessed[tree[now][0].first] << endl;
//
//    isAccessed[now] = true;
//    for(int i = 0; i < tree[now].size(); i++){
//        int nextNode = tree[now][i].first;
//        if(!isAccessed[nextNode]){
//            dfs(nextNode, v + tree[now][i].second);
//        }
//    }
//    result.push_back(v);
//    return;
//}
//int main(){
//
////    if(!tree.count(3))
////        tree[3].push_back(make_pair(4,100));
////    cout << tree[3][0].first << endl << tree[3][0].second << endl;
//    int T;
//    cin >> T;
//    int t = 1;
//    while(t <= T){
//        result.clear();
//        memset(isAccessed, false, sizeof(isAccessed));
//        int n, s;
//        cin >> n >> s;
//        for(int i = 0; i <= n; i++){
//            tree[i].clear();
//        }
//        for(int i = 0; i < n - 1; i++){
//            int a, b, v;//起点、终点、权
//            scanf("%d%d%d", &a, &b, &v);
//            tree[a].push_back(make_pair(b, v));
//            tree[b].push_back(make_pair(a, v));
//        }
//        dfs(s, 0);
//        sort(result.begin(), result.end());//将所有的路程长度排序
//        printf("Case #%d: %d\n",t++ , result.back());//输出排序后的末尾元素即得最大值
//    }
//
//    return 0;
//}
/*

6 5
5 1 70
5 2 60
5 3 -10
3 4 100
9 3 400

6 5
5 1 70
5 2 60
5 3 -10
3 4 100
6 3 400

10 5
5 1 70
5 2 60
5 3 -10
3 4 100
3 6 60
3 7 -600
10 7 2000
9 8 -2000
8 6 1000

10
10 3
5 1 70
5 2 60
5 3 -10
3 4 100
3 6 60
3 7 -600
10 7 2000
10 8 500
8 6 1000
res:100
*/
//#include<iostream>
//#include<cstdio>
//#include<vector>
//#include<cstring>
//#include<fstream>
//using namespace std;
//
//const int INF=0x3f3f3f3f;
//const int MAXN=100005;
//int dist[MAXN];
//bool vis[MAXN];
//int n;
//
//struct Edge
//{
//    int v;
//    int cost;
//    Edge(int _v=0,int _cost=0):v(_v),cost(_cost){}
//};
//
//vector<Edge> E[MAXN];
//
//void dfs(int start)//点的编号从1开始
//{
//
//    vis[start]=true;
//    for(int i=0;i<E[start].size();i++)
//    {
//        int v=E[start][i].v;
//        int cost=E[start][i].cost;
//        if(vis[v]) continue;
//        dist[v]=dist[start]+cost;
//        dfs(v);
//    }
//}
//
//int main()
//{
//    int T;
//    cin>>T;
//    int cas=1;
//    while(T--)
//    {
//        memset(vis,false,sizeof(vis));
//        for(int i=1;i<=n;i++) dist[i]=-INF;
//        int e;
//        cin>>n;
//        int s;
//        cin>>s;
//        e=n-1;
//        for(int i=1;i<=n;i++) E[i].clear();
//        //for(int i=1;i<=MAXN;i++) dist[i]=INF;
//        int u,v,c;
//        for(int i=0;i<e;i++)
//        {
//            int u,v,c;
//            cin>>u>>v>>c;
//            E[u].push_back(Edge(v,c));
//            E[v].push_back(Edge(u,c));
//        }
//        dist[s]=0;
//        dfs(s);
//        int ans=-INF;
//        for(int i=1;i<=n;i++)
//        {
//            ans=max(dist[i],ans);
//        }
//        cout<<"Case #"<<cas++<<": "<<ans<<endl;
//    }
//    return 0;
//}
