//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//#include <queue>
//using namespace std;
//const int maxn = 204;
//
//int N, L, cnt;
//vector<int> g[maxn];
//struct node{
//    int color;
//    bool vis;
//}point[maxn];
//
//void init(){
//    for(int i = 0; i <= N; i++)
//        g[i].clear();
//    memset(point, 0, sizeof(point));
//}
//
//bool dfs(int u){
//    for(int i = 0; i < g[u].size(); i++){
//        int to = g[u][i];
//        if(!point[to].vis){
//            point[to].vis = true;
//            point[to].color = -point[u].color;
//            return dfs(to);
//        }
//        else{
//            if(point[to].color + point[u].color == 0)
//                continue;
//            else
//                return false;
//        }
//    }
//    return true;
//}
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    while(scanf("%d", &N) && N){
//        init();
//        scanf("%d", &L);
//        for(int i = 0; i < L; i++){
//            int a, b;
//            scanf("%d%d", &a, &b);
//            g[a].push_back(b);
//        }
//        point[0].color = point[0].vis = 1;
//        bool ok = dfs(0);
//        if(ok)
//            printf("BICOLORABLE.\n");
//        else
//            printf("NOT BICOLORABLE.\n");
//    }
//
//    return 0;
//}
