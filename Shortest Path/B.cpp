//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//#include <queue>
//using namespace std;
//const int maxn = 204, INF = 0x6fffffff;
//
//int n, m, s, t;
//int w[maxn][maxn], d[maxn];
//bool v[maxn];
//
//int dijkstra(){
//    memset(v, false, sizeof(v));
//    for(int i = 0; i < n; i++)
//        d[i] = w[s][i];
//    for(int i = 0; i < n; i++){
//        int x, m = INF;
//        for(int y = 0; y < n; y++)
//            if(!v[y] && d[y] < m)
//                m = d[x = y];
//        v[x] = true;
//        for(int y = 0; y < n; y++)
//            d[y] = min(d[y], d[x] + w[x][y]);
//    }
//    if(d[t] >= INF)
//        return -1;
//    return d[t];
//}
//
//int main() {
//#ifdef TEST
//    freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    while(cin >> n >> m){
//        int a, b, dst;
//        for(int i = 0; i < n; i++)
//            for(int j = 0; j < n; j++)
//                w[i][j] = (i==j ? 0 : INF);
//        for(int i = 0; i < m; i++){
//            scanf("%d%d%d", &a, &b, &dst);
//            if(dst < w[a][b])
//                w[a][b] = w[b][a] = dst;
//        }
//        scanf("%d%d", &s, &t);
//        int ans = dijkstra();
//        cout << ans << endl;
//    }
//
//    return 0;
//}
