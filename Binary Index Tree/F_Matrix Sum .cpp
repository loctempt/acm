//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//#include <queue>
//using namespace std;
//const int MOD = 1e9+7, maxn = 1004;
//
//int n, m;
//
//int c[maxn][maxn], a[maxn][maxn];
//
//void add(int x, int y, int d){
//    for(int i = x; i <= n; i += i&-i)
//        for(int j = y; j <= n; j += j&-j)
//            c[i][j] = (c[i][j]+d) % MOD;
//}
//
//int sum(int x, int y){
//    int ret = 0;
//    for(int i = x; i > 0; i -= i&-i)
//        for(int j = y; j > 0; j -= j&-j)
//            ret = (ret+c[i][j]) % MOD;
//    return ret;
//}
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    char ord[4];
//    int x, y, xx, yy, s;
//    while(cin >> n >> m){
//        memset(c, 0, sizeof(c));
//        for(int i = 0; i < m; i++){
//            scanf("%s", ord);
//            if(*ord == 'A'){
//                scanf("%d%d%d", &x, &y, &s);
//                add(++x, ++y, s);
//            }
//            if(*ord == 'S'){
//                int ans;
//                scanf("%d%d%d%d", &x, &y, &xx, &yy);
//                x++, y++, xx++, yy++;
//                ans = ((sum(xx,yy) - sum(xx,y-1) - sum(x-1,yy) + sum(x-1,y-1))%MOD+MOD)%MOD;
//                printf("%d\n",ans);
//            }
//        }
//    }
//
//    return 0;
//}
