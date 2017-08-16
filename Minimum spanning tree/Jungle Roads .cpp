//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//#include <queue>
//#include <utility>
//using namespace std;
//const int maxn = 1e5+10;
//
//struct node{
//    int x, y, dist;
//    bool operator < (const node &temp)const{
//        return dist < temp.dist;
//    }
//}road[100];
//
//int cnt;
//int f[27];
//
//int findset(int now){
//    if(f[now] != now){
//        f[now] = findset(f[now]);
//    }
//    return f[now];
//}
//
//int kruskal(){
//    sort(road, road+cnt);
//    int res = 0;
//    for(int i = 0; i < cnt; i++){
//        int fx = findset(road[i].x), fy = findset(road[i].y);
//        if(fx != fy){
//            f[fx] = fy;
//            res += road[i].dist;
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
//    int n;
//    while(cin >> n){
//        if(n == 0)
//            break;
//        cnt = 0;
//        for(int i = 0; i < 27; i++)
//            f[i] = i;
//        for(int i = 0; i < n - 1; i++){
//            char start;
//            int m;
//            cin >> start >> m;
//            for(int i = 0; i < m; i++){
//                char dest;
//                int u;
//                cin >> dest >> u;
//                road[cnt].x = start - 'A';
//                road[cnt].y = dest - 'A';
//                road[cnt++].dist = u;
//            }
//        }
//        int ans = kruskal();
//        cout << ans << endl;
//
//    }
//
//    return 0;
//}
