//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//#include <queue>
//using namespace std;
//
//const int INF = 0x7fffffff;
//int dp[104][104], sample[105];
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    int n;
//    while(cin >> n){
//        memset(dp, 0, sizeof(dp));
//        for(int i = 0; i < n; i++){
//            cin >> sample[i];
//        }
//
//        for(int len = 3; len <= n; len++){//区间长度
//            for(int s = 0, e = len-1; e < n; s++, e++){
//                dp[s][e] = INF;
//                for(int k = s+1; k < e; k++)
//                    dp[s][e] = min(dp[s][e], dp[s][k]+sample[s]*sample[k]*sample[e]+dp[k][e]);
//            }
//        }
//        cout << dp[0][n-1] << endl;
//
//    }
//
//    return 0;
//}
