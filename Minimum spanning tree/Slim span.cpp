//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//#include <queue>
//#include <utility>
//using namespace std;
//const int INF = 0x7fffffff;
//
//struct node{
//    int x, y, dist;
//    bool operator < (const node &temp)const{
//        return dist < temp.dist;
//    }
//}road[5000];
//
//int m, n, maxLen, minLen;
//int f[104];
//
//int findset(int now){
//    if(f[now] != now){
//        f[now] = findset(f[now]);
//    }
//    return f[now];
//}
//
//int kruskal(){
//    sort(road, road+m);
//    int res = INF;
//    maxLen = 0; minLen = INF;
//    for(int j = 0; j < m; j++){
//        int sum = 0;
//        for(int i = 0; i < 104; i++)
//            f[i] = i;
//        for(int i = j; i < m; i++){
//            int fx = findset(road[i].x), fy = findset(road[i].y);
//            if(fx != fy){
//                f[fx] = fy;
//                sum++;
//            }
//            if(sum == n - 1){
//                res = min(res, road[i].dist - road[j].dist);
//                break;
//            }
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
//    while(cin >> n >> m){
//        if(n == m && n == 0)
//            break;
//
//        for(int i = 0; i < m; i++)
//            cin >> road[i].x >> road[i].y >> road[i].dist;
//        int ans = kruskal();
//        if(ans == INF)
//            cout << -1 << endl;
//        else
//            cout << ans << endl;
//    }
//
//    return 0;
//}
