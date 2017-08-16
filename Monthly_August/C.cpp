//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//#include <queue>
//using namespace std;
//const int maxn = 12.5e4 + 19, INF = 0x7fffffff;
//
//int n, m, cnt;
//int u[maxn], v[maxn], first[maxn], Next[maxn], stak[maxn];
//double w[maxn], d1[maxn], d2[maxn];
//bool vis[maxn];
//
//void init1() {
//    memset(first, -1, sizeof(first));
//    memset(Next, -1, sizeof(Next));
//    memset(vis, false, sizeof(vis));
//    for(int i = 0; i <= n; i++)
//        d1[i] = INF;
//    cnt = 0;
//}
//void init2() {
//    memset(first, -1, sizeof(first));
//    memset(Next, -1, sizeof(Next));
//    memset(vis, false, sizeof(vis));
//    for(int i = 0; i <= n; i++)
//        d2[i] = INF;
//    cnt = 0;
//}
//
//void makeEdge(int a, int b, double c) {
//    u[cnt] = a;
//    v[cnt] = b;
//    w[cnt] = c;
//    Next[cnt] = first[a];
//    first[a] = cnt++;
//}
//
//void spfa1() { // start from 1, to any node.
//    int top = 0;
//    stak[top++] = 1;
//    vis[1] = true;
//    d1[1] = 1;
//    while(top != 0) {
//        int temp = stak[--top];
//        vis[temp] = false;
//        for(int i = first[temp]; i != -1; i = Next[i]) {
//            int to = v[i], from = u[i];
//            if(d1[to] > d1[temp] * w[i] && from < to) {
//                d1[to] = d1[temp] * w[i];
//                if(!vis[to]) {
//                    vis[to] = true;
//                    stak[top++] = to;
//                }
//            }
//        }
//    }
//    d1[1] = 1;
//}
//
//void spfa2() { // start from any node, to 1.
//    int top = 0;
//    stak[top++] = 1;
//    vis[1] = true;
//    d2[1] = 1;
//    while(top != 0) {
//        int temp = stak[--top];
//        vis[temp] = false;
//        for(int i = first[temp]; i != -1; i = Next[i]) {
//            int to = v[i], from = u[i];
//            if(d2[to] > d2[temp] * w[i] && from < to) {
//                d2[to] = d2[temp] * w[i];
//                if(!vis[to]) {
//                    vis[to] = true;
//                    stak[top++] = to;
//                }
//            }
//        }
//    }
//}
//
//bool checkAns() {
//    for(int i = 1; i <= n - 1; i++)
//        for(int j = i + 1; j <= n; j++){
//            if()
//            double temp = d1[j]/d1[i] * d2[j]/d2[i];
//            if(temp < 1)
//                return true;
//        }
//    return false;
//}
//
//int main() {
//#ifdef TEST
//    freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    while(scanf("%d%d", &n, &m) != EOF) {
//        int a, b; double x;
//        init1();
//        for(int i = 0; i < m; i++) {
//            scanf("%d%d%lf", &a, &b, &x);
//            makeEdge(a, b, x);
//        }
//        spfa1();
//        init2();
//        for(int i = 0; i < m; i++)
//            makeEdge(v[i], u[i], w[i]);// reverse.
//        spfa2();
//        if(checkAns())
//            printf("YES\n");
//        else
//            printf("NO\n");
//    }
//
//    return 0;
//}
