//#include <cstdio>
//#include <iostream>
//#include <cstring>
//#include <string>
//#include <algorithm>
//#include <stack>
//using namespace std;
//const int maxn = 1e3, INF = 0x3f3f3f3f;
//
//struct node{
//    int id;
//    string nodeName;
//    string briefIntro;
//}city[maxn];
//
//int g[maxn][maxn];
//int d[maxn], f[maxn];
//bool v[maxn];
//
//void dijkstra(int s, int n){
//    memset(v, false, sizeof(v));
//    f[s] = -1;
//    for(int i = 1; i <= n; i++) d[i] = i==s ? 0 : INF;
//    for(int i = 1; i <= n; i++){
//        int x, m = INF;
//        for(int y = 1; y <= n; y++)
//            if(!v[y] && d[y] < m)
//                m = d[x=y];
//        v[x] = true;
//        for(int y = 1; y <= n; y++){
//            if(d[y] > d[x] + g[x][y]){
//                f[y] = x;
//                d[y] = d[x] + g[x][y];
//            }
//        }
//    }
//}
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    int n, m, q, u, v, w; // n:¶¥µãÊý; m:±ßÊý;
//    cin >> n >> m;
//    getchar();
//    memset(g, 0x3f, sizeof(g));
//    for(int i = 1; i <= n; i++){
//        city[i].id = i;
//        getline(cin, city[i].nodeName);
//        getline(cin, city[i].briefIntro);
////        cout << city[i].nodeName << endl;
////        cout << city[i].briefIntro << endl;
//    }
//    for(int i = 1; i <= m; i++){
//        cin >> u >> v >> w;
//        if(g[u][v] > w){
//            g[u][v] = g[v][u] = w;
//        }
//    }
//    cin >> q;
//    for(int i = 1; i <= q; i++){
//        stack<node> s;
//        cin >> u >> v;
//        dijkstra(u, n);
//        s.push(city[v]);
//        int ff = f[v];
//        while(~ff){
//            s.push(city[ff]);
//            ff = f[ff];
//        }
//        cout << "Minimum distance: " << d[v] << endl;
//        while(!s.empty()){
//            cout << "City" << s.top().id << ": " << s.top().nodeName << endl << s.top().briefIntro << endl;
//            s.pop();
//        }
//        cout << endl;
//    }
//
//    return 0;
//}
/*
6 8
Changsha
Capital city of Hu Nan province.
Zhuzhou
A city of Chang-Zhu-Tan circle.
Xiangtan
A city of Chang-Zhu-Tan circle.
Yueyang
Famous of Yueyang Tower.
Yongzhou
Splendid snakes can be found in rural area of Yongzhou.
Zhangjiajie
Spectacular scene.
1 2 3
1 3 4
1 4 6
1 5 8
1 6 7
6 5 20
2 5 5
2 6 2
3
1 5
1 6
5 6
*/
