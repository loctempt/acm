//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//#include <queue>
//using namespace std;
//const long long maxn = 1e5+10, INF = 0xffffffff;
//
//long long T, n, m;
//long long luggage[maxn];
//
//long long check(long long bagSize){
//    long long bagNum = 1, tempSum = 0;
//    for(long long i = 0; i < m; i++){
//        if(luggage[i] > bagSize)
//            return n+1;
//        tempSum += luggage[i];
//        if(tempSum > bagSize){
//            tempSum = luggage[i];
//            bagNum++;
//        }
//    }
//    return bagNum;
//}
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    scanf("%lld", &T);
//    while(T--){
//        scanf("%lld%lld", &n, &m);
//        long long maxSize = 0;
//        for(long long i = 0; i < m; i++){
//            scanf("%lld", &luggage[i]);
//            maxSize += luggage[i];
//        }
//        long long left = 0, right = maxSize, mid, ans;
//        while(left <= right){
//            mid = (left + right) / 2;
//            if(check(mid) > n){// mid is too small
//                left = mid + 1;
//            }
//            else{// mid is too large or just it
//                ans = mid;
//                right = mid - 1;
//            }
//        }
//        printf("%d\n", ans);
//    }
//
//    return 0;
//}
