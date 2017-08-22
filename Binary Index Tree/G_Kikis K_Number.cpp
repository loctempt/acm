//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//#include <queue>
//using namespace std;
//const int maxn = 1e5+19;
//
//int m, e, x, y;
//
//int c[maxn];
//
//void add(int x, int d){
//    while(x <= maxn){
//        c[x] += d; x += x&-x;
//    }
//}
//
//int sum(int x){
//    int ret = 0;
//    while(x > 0){
//        ret += c[x]; x -= x&-x;
//    }
//    return ret;
//}
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    while(cin >> m){
//        memset(c, 0, sizeof(c));
//        for(int i = 0; i < m; i++){
//            scanf("%d%d", &e, &x);
//            if(e == 0){
//                add(x, 1);
//            }
//            if(e == 1){
//                if(sum(x)-sum(x-1) == 0){
//                    printf("No Elment!\n");
//                    continue;
//                }
//                add(x, -1);
//            }
//            if(e == 2){
//                scanf("%d", &y);
//                int left = x+1, right = maxn, mid, ans;
//                while(left <= right){
//                    mid = (left + right) >> 1;
//                    if(sum(mid)-sum(x) >= y){ // mid is too large or just it.
//                        ans = mid;
//                        right = mid - 1;
//                    }
//                    else                      // mid is too small.
//                        left = mid + 1;
//                }
//                if(left >= maxn)
//                    printf("Not Find!\n");
//                else
//                    printf("%d\n", ans);
//            }
//        }
//    }
//
//    return 0;
//}
