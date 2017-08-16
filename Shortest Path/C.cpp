//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <cstring>
//using namespace std;
//const int maxn = 2004, INF = 0x3fffffff;
//
//int t, n;
//int w[maxn][maxn], d[maxn];
//bool v[maxn];
//
//void dijkstra(){
//    for(int i = 1; i <= n; i++)
//        d[i] = (i==1 ? 0 : INF);
//    for(int i = 1; i <= n; i++){
//        int x, m = INF;
//        for(int y = 1; y <= n; y++)
//            if(!v[y] && d[y] <= m) m = d[x=y];
//        v[x] = true;
//        for(int y = 1; y <= n; y++)
//            d[y] = min(d[y], d[x] + w[x][y]);
//    }
//    printf("%d\n", d[n]);
//}
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    while(cin >> t >> n){
//        for(int i = 1; i <= n; i++)
//            for(int j = 1; j <= n; j++)
//                w[i][j] = w[j][i] = (i==j ? 0 : INF);
//        memset(v, false, sizeof(v));
//        for(int i = 0; i < t; i++){
//            int a, b, c;
//            scanf("%d%d%d", &a, &b, &c);
//            if(c < w[a][b])
//                w[a][b] = w[b][a] = c;
//        }
//        dijkstra();
//    }
//    return 0;
//}
//
//
//
//
//
//
//
//
//
//
//
//
//
////#include <iostream>
////#include <cstdio>
////#include <algorithm>
////#include <vector>
////#include <cstring>
////#include <queue>
////using namespace std;
////const int maxn = 5004, INF = 0x6fffffff;
////
////int t, n;
////int w[maxn][maxn], d[maxn];
////bool v[maxn];
////
//////int dijkstra(){
//////    memset(v, false, sizeof(v));
//////    for(int i = 1; i <= n; i++)
//////        d[i] = (i==1 ? 0 : INF);
//////    for(int i = 0; i <= n; i++){
//////        int x, m = INF;
//////        for(int y = 1; y <= n; y++)
//////            if(!v[y] && d[y] <= m)
//////                m = d[x = y];
//////        v[x] = true;
//////        for(int y = 1; y <= n; y++)
//////            d[y] = min(d[y], d[x] + w[x][y]);
////////        cout << "";
//////    }
//////    return d[n];
//////}
////int dijkstra(){
////    int i, j, x, m;
////    memset(v, false, sizeof(v));
////    for(int i = 1; i <= n; i++)
////        d[i] = (i==1 ? 0 : INF);
////    for(i = 1; i <= n; i ++){        //循环n次，里面跟用Prim算法最小生成树类似
////        m = INF;
////        for(j = 1; j <= n; j ++){    //找到没到过的到起点最近的点
////            if(!v[j] && d[j] <= m)
////                m = d[x=j];
////        }
////        v[x] = 1;                    //标记新加入的点
////        for(j = 1; j <= n; j ++){    //由于新扩展的点导致某些点到起点的距离更新，而Prim算法是到树的距离的更新
////            if(d[j] > d[x] + w[x][j])
////                d[j] = d[x] + w[x][j];
////        }
////    }
////    return d[n];
////}
////
////int main() {
////#ifdef TEST
////    freopen("test.txt", "r", stdin);
////#endif // TEST
////
////    while(cin >> t >> n){
////        int a, b, dst;
////        for(int i = 1; i <= n; i++){
////            for(int j = 1; j <= n; j++){
////                w[i][j] = (i==j ? 0 : INF);
////            }
////        }
////        for(int i = 1; i <= t; i++){
////            scanf("%d%d%d", &a, &b, &dst);
////            if(dst < w[a][b])
////                w[a][b] = w[b][a] = dst;
////        }
////        int ans = dijkstra();
////        cout << ans << endl;
////    }
////
////    return 0;
////}
//
//
//
////    #define INF (1<<30)-1
////    #include <bits/stdc++.h>
////    using namespace std;
////    int w[2010][2010];
////    int v[2010];
////    int d[2010];
////
////    int t, n;
////
////    void init(){
////        int i, j;
////        memset(v, 0, sizeof(v));
////        for(i = 1; i <= n; i ++)
////        for(j = 1; j <= n; j ++){       //预处理两点间距离，无限大即没连通
////            w[i][j] = (i == j ? 0 : INF);
////        }
////        for(i = 1; i <= n; i ++)        //预处理出发点到i点的距离
////            d[i] = (i == 1 ? 0 : INF);
////    }
////
////    void dijkstra(){
////        int i, j, x, m;
////        for(i = 1; i <= n; i ++){        //循环n次，里面跟用Prim算法最小生成树类似
////            m = INF;
////            for(j = 1; j <= n; j ++){    //找到没到过的到起点最近的点
////                if(!v[j] && d[j] <= m)
////                    m = d[x=j];
////            }
////            v[x] = 1;                    //标记新加入的点
////            for(j = 1; j <= n; j ++){    //由于新扩展的点导致某些点到起点的距离更新，而Prim算法是到树的距离的更新
////                if(d[j] > d[x] + w[x][j])
////                    d[j] = d[x] + w[x][j];
////            }
////        }
////        cout << d[n] << endl;
////    }
////
////    int main(){
////        freopen("test.txt", "r", stdin);
////        int i, j, ww, y;
////        int z;
////        while(cin >> t >> n){
////            init();
////            for(i = 0; i < t; i ++){        //输入的时候注意有重复的边
////                scanf("%d %d", &z, &y);
////                if(w[z][y] == INF && w[z][y] == INF){
////                    scanf("%d", &w[z][y]);
////                    w[y][z] = w[z][y];
////                }
////                else{
////                    scanf("%d", &ww);
////                    if(ww < min(w[z][y], w[y][z])){
////                        w[z][y] = ww;        //因为是无向图所以zy yz距离一样
////                        w[y][z] = ww;
////                    }
////                }
////            }
////            dijkstra();
////        }
////        return 0;
////    }
