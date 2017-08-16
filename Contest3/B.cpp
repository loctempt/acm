//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//#include <queue>
//using namespace std;
//
//const int INF = 0x7fffffff;
//int sample[504], dp[504][504];
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    int n;
//    while(cin >> n){
//        memset(sample, 0, sizeof(sample));
//        memset(dp, 0, sizeof(dp));
//        for(int i = 1; i <= n; i++){
//            cin >> sample[i];
//            dp[i][i] = 1;
//        }
//        for(int i = 1; i < n; i++)
//            if(sample[i] == sample[i+1])
//                dp[i][i+1] = 1;
//            else
//                dp[i][i+1] = 2;
//        for(int len = 2; len < n; len++){
//            for(int s = 1, e = 1+len; e <= n; s++, e++){
//                dp[s][e] = INF;
//                dp[s][e] = min(dp[s][e], dp[s+1][e] + 1);
//                if(sample[s] == sample[s+1])
//                    dp[s][e] = min(dp[s][e], dp[s+2][e]+1);
//                if(sample[s] == sample[e])
//                    dp[s][e] = min(dp[s][e], dp[s+1][e-1]);
//                for(int k = s+2; k < e; k++)
//                    if(sample[k] == sample[s])
//                        dp[s][e] = min(dp[s][e], dp[s+1][k-1]+dp[k+1][e]);
//            }
//        }
//        cout << dp[1][n] << endl;
//    }
//
//    return 0;
//}
