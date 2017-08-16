//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//#include <queue>
//using namespace std;
//const int maxn = 1e4+10, INF = 0x7fffffff;
//
//struct node{
//    int x, y, dist;
//    bool operator < (const node &a)const{
//        return dist < a.dist;
//    }
//}city[maxn];
//
//int f[maxn];
//int cnt, n, m;
//
//int findset(int now){
//    if(f[now] != now){
//        f[now] = findset(f[now]);
//    }
//    return f[now];
//}
//
//int kruskal(){
//    sort(city, city+m);
//    int res = 0;
//    for(int i = 0; i < m; i++){
//        int fx = findset(city[i].x), fy = findset(city[i].y);
//        if(fx != fy){
//            f[fx] = fy;
//            res += city[i].dist;
//            cnt++;
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
//        cnt = 0;
//        for(int i = 0; i < maxn; i++)
//            f[i] = i;
//        for(int i = 0; i < m; i++)
//            scanf("%d%d%d", &city[i].x, &city[i].y, &city[i].dist);
//        int ans = kruskal();
//        if(cnt == n - 1)
//            cout << ans << endl;
//        else
//            cout << "impossible" << endl;
//        cout << endl;
//    }
//
//    return 0;
//}
