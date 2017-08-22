//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//#include <queue>
//using namespace std;
//const int maxn = 304, INF = 0x3f3f3f3f;
//
//int nx, ny; // points at both sides.
//int g[maxn][maxn]; // graph in storage.
//int linker[maxn], lx[maxn], ly[maxn]; // status in set Y, indices in set X, Y.
//int slack[maxn]; // difference between optimal status and current status.
//bool visX[maxn], visY[maxn]; // records of visit.
//
//bool dfs(int x){
//    visX[x] = true;
//    for(int y = 0; y < ny; y++){
//        if(!visY[y]){
//            int tmp = lx[x] + ly[y] - g[x][y];
//            if(tmp == 0){
//                visY[y] = true;
//                if(linker[y] == -1 || dfs(linker[y])){
//                    linker[y] = x;
//                    return true;
//                }
//            }
//            else if(slack[y] > tmp)
//                slack[y] = tmp;
//        }
//    }
//    return false;
//}
//
//int km(){
//    memset(linker, -1, sizeof(linker));
//    memset(ly, 0, sizeof(ly));
//    for(int i = 0; i < nx; i++){
//        lx[i] = -INF;
//        for(int j = 0; j < ny; j++)
//            if(g[i][j] > lx[i])
//                lx[i] = g[i][j]; // set original expectation to maximum weight.
//    }
//    for(int x = 0; x < nx; x++){
//        for(int i = 0; i < ny; i++)
//            slack[i] = INF;
//        while(1){
//            memset(visX, false, sizeof(visX));
//            memset(visY, false, sizeof(visY));
//            if(dfs(x))
//                break;
//            int d = INF;
//            for(int i = 0; i < ny; i++)
//                if(!visY[i] && d > slack[i])
//                    d = slack[i]; // find out the minimum difference between expectations of both sides.
//            for(int i = 0; i < nx; i++)
//                if(visX[i])
//                    lx[i] -= d; // update expectation.
//            for(int i = 0; i < ny; i++){
//                if(visY[i])
//                    ly[i] += d; // update expectation.
//                else
//                    slack[i] -= d; // update difference.
//            }
//        }
//    }
//    int res = 0;
//    for(int i = 0; i < ny; i++)
//        if(linker[i] != -1)
//            res += g[linker[i]][i]; // adding optimal weight.
//    return res;
//}
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    int n;
//    while(cin >> n){
//        for(int i = 0; i < n; i++){
//            for(int j = 0; j < n; j++)
//                scanf("%d", &g[i][j]);
//        }
//        nx = ny = n;
//        cout << km() << endl;
//    }
//
//    return 0;
//}
