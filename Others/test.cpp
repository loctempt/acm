//#include<cstdio>
//#include<cstring>
//#include<iostream>
//using namespace std;
//const int maxn = 1e3, INF = 0x3f3f3f3f;
//
//int m, n, u, v, w, mst;
//
//int g[maxn][maxn];
//int lowcost[maxn];
//int record[maxn];
//
//int prim(int s) {
//    mst = 0;
//    record[s] = -1;
//    lowcost[s] = 0;
//    for(int i = 1; i <= m; i++) {
//        if(i == s)
//            continue;
//        lowcost[i] = g[s][i];
//        record[i] = s;
//    }
//    for(int i = 1; i <= m; i++) {
//        int minC = INF, pos = s;
//        for(int j = 1; j <= m; j++) {
//            if(lowcost[j] == 0)
//                continue;
//            if(lowcost[j] < minC) {
//                pos = j;
//                minC = lowcost[j];
//            }
//        }
//        if(pos == s)
//            continue;
//        cout << "V" << record[pos] << "-V" << pos << " : " << lowcost[pos] << endl;
//        mst += lowcost[pos];
//        lowcost[pos] = 0;
//        for(int j = 1; j <= m; j++) {
//            if(lowcost[j] && g[pos][j] < lowcost[j]) {
//                lowcost[j] = g[pos][j];
//                record[j] = pos;
//            }
//        }
//    }
//    return mst;
//}
//
//int main()
//{
//#ifdef TEST
//    freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    while(cin >> m >> n) {
//        memset(g, 0x3f, sizeof(g));
//        for(int i = 0; i < n; i++) {
//            cin >> u >> v >> w;
//            g[u][v] = g[v][u] = w;
//        }
//        cout << prim(1) << endl;
//    }
//
//    return 0;
//}
