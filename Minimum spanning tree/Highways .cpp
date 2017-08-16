//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//#include <queue>
//using namespace std;
//const int maxn = 504, INF = 0x7fffffff;
//
//struct node{
//    int x, y, dist;
//    bool operator < (const node &a)const{
//        return dist < a.dist;
//    }
//}city[maxn*maxn];
//
//int f[maxn];
//int cnt = 0, n;
//
//int findset(int now){
//    if(f[now] != now){
//        f[now] = findset(f[now]);
//    }
//    return f[now];
//}
//
//int kruskal(){
//    sort(city, city+cnt);
//    int res = 0;
//    for(int i = 0; i < cnt; i++){
//        int fx = findset(city[i].x), fy = findset(city[i].y);
//        if(fx != fy){
//            f[fx] = fy;
//            res = max(res, city[i].dist);
//        }
//    }
//    return res;
//}
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    int T;
//    cin >> T;
//    while(T--){
//        cin >> n;
//        cnt = 0;
//        for(int i = 0; i < n; i++)
//            for(int j = 0; j < n; j++){
//                int temp;
//                scanf("%d", &temp);
//                if(i > j){
//                    city[cnt].x = i;
//                    city[cnt].y = j;
//                    city[cnt++].dist = temp;
//                }
//            }
//        for(int i = 0; i < maxn; i++)
//            f[i] = i;
//        cout << kruskal() << endl;
//    }
//
//    return 0;
//}



//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//#include <queue>
//using namespace std;
//const int maxn = 504, INF = 0x7fffffff;
//
////struct node{
////    int x, y, dist;
////    bool operator < (const node &a)const{
////        return dist < a.dist;
////    }
////}city[maxn*maxn];
//int city[maxn][maxn], lowcost[maxn], mst[maxn];
//int n;
//
//int prim(){
//    int res = 0, cnt = 0, currPos = 0, nextPos;
//    while(cnt < n){
//        mst[currPos] = -1, lowcost[currPos] = 0;
//        int minimum = 0;
//        for(int i = 0; i < n; i++){
//            if(i == currPos || mst[i] == -1)
//                continue;
//            minimum = INF;
//            if(city[currPos][i] < lowcost[i]){
//                mst[i] = currPos;
//                lowcost[i] = city[currPos][i];
//            }
//            if(minimum > city[currPos][i]){
//                minimum = city[currPos][i];
//                nextPos = i;
//            }
//        }
//        res = max(res, minimum);
//        cnt++;
//        currPos = nextPos;
//    }
//    return res;
//}
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    int T;
//    cin >> T;
//    while(T--){
//        cin >> n;
//        for(int i = 0; i < n; i++)
//            for(int j = 0; j < n; j++)
//                scanf("%d", &city[i][j]);
//        for(int i = 0; i < maxn; i++)
//            lowcost[i] = mst[i] = INF;
//        cout << prim() << endl;;
//    }
//
//    return 0;
//}
