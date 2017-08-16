//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//#include <queue>
//#include <cmath>
//using namespace std;
//
//int n, cnt;
//int f[104];
//
//struct node{
//    int x, y;
//    double dist;
//    bool operator < (const node & temp)const{
//        return dist < temp.dist;
//    }
//}road[104*104];
//struct station{
//    double x, y, z, r;
//}cells[104];
//
//inline double centerDist(double x1, double y1, double z1, double x2, double y2, double z2){
//    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2) + pow(z1 - z2, 2));
//}
//
//inline bool isBridgeNeeded(double rr, double cd){// rr 是两半径之和。
//    return rr < cd;
//}
//
//int findset(int now){
//    if(f[now] != now){
//        f[now] = findset(f[now]);
//    }
//    return f[now];
//}
//
//double kruskal(){
//    sort(road, road+cnt);
//    double res = 0;int sum = 0;
//    for(int i = 0; i < cnt; i++){
//        int fx = findset(road[i].x), fy = findset(road[i].y);
//        if(fx != fy){
//            f[fx] = fy;
//            res += road[i].dist;
//            sum++;
//        }
//        if(sum == n-1)
//            break;
//    }
//    return res;
//}
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    while(cin >> n){
//        if(n == 0)
//            break;
//        for(int i = 0; i < 104; i++)
//            f[i] = i;
//        for(int i = 0; i < n; i++)
//            cin >> cells[i].x >> cells[i].y >> cells[i].z >> cells[i].r;
//        cnt = 0;
//        for(int i = 0; i < n-1; i++)
//            for(int j = i+1; j < n; j++){
//                road[cnt].x = i;
//                road[cnt].y = j;
//                double cd = centerDist(cells[i].x, cells[i].y, cells[i].z, cells[j].x, cells[j].y, cells[j].z);
//                double sumRadius = cells[i].r + cells[j].r;
//                if(isBridgeNeeded(sumRadius, cd))
//                    road[cnt].dist = cd - sumRadius;
//                else
//                    road[cnt].dist = 0;
//                cnt++;
//            }
//
//        printf("%.3f\n", kruskal());
//    }
//
//    return 0;
//}
