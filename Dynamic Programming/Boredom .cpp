//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <cstring>
//#include <vector>
//using namespace std;
//const int maxn = 1e5+4;
//
//long long n, maxNum;
//long long occurrence[maxn], sample, dp[maxn];
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    while(cin >> n){
//        memset(occurrence, 0, sizeof(occurrence));
//        memset(dp, 0, sizeof(dp));
//        maxNum = 0;
//        for(int i = 1; i <= n; i++){
//            scanf("%lld", &sample);
//            occurrence[sample]++;
//            if(sample > maxNum)
//                maxNum = sample;
//        }
//        dp[1] = occurrence[1];
//        for(int i = 2; i <= maxNum; i++){
//            long long pts = i*occurrence[i];
//            dp[i] = max(dp[i-2]+pts, dp[i-1]);
//        }
//        cout << dp[maxNum] << endl;
//    }
//
//    return 0;
//}
