//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//#include <queue>
//using namespace std;
//const int maxn = 1e5+10;
//
//int n, t;
//int C[maxn], A[maxn];
//
//void add(int x, int d){
//    while(x <= n){
//        C[x] += d; x += x&-x;
//    }
//}
//
//int sum(int x){
//    int ret = 0;
//    while(x > 0){
//        ret += C[x]; x -= x&-x;
//    }
//    return ret;
//}
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    while(cin >> n >> t){
//        memset(A, 0, sizeof(A));
//        memset(C, 0, sizeof(C));
//        for(int i = 1; i <= n; i++)
//            scanf("%d", &A[i]);
////        for(int i = 1; i <= n; i++)
////            add(i, 1);
//        for(int i = 1; i <= t; i++){
//            int s, e;
//            scanf("%d%d", &s, &e);
////            for(int j = s; j <= e; j++){
////                add(j, 1);
////                add(,1);
//            add(s, 1);
//            add(e+1, -1);
//        }
//        for(int i = 1; i <= n; i++)
//            printf("%d%c", sum(i)&1 ? A[i]^1 : A[i], " \n"[i==n]);
//    }
//
//    return 0;
//}
