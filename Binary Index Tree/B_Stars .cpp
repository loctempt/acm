//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//#include <queue>
//using namespace std;
//const int maxn = 32004;
//
//int n;
//int C[maxn], level[maxn];
//
//void add(int x, int d){
//    while(x < 32004){
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
//    int x, y;
//    while(scanf("%d", &n) != EOF){
//        memset(C, 0, sizeof(C));
//        memset(level, 0, sizeof(level));
//        for(int i = 0; i < n; i++){
//            scanf("%d%d", &x, &y);
//            level[sum(x+1)]++;
//            add(x+1, 1);
//        }
//        for(int i = 0; i < n; i++)
//            printf("%d\n", level[i]);
//    }
//
//    return 0;
//}
