//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//#include <queue>
//using namespace std;
//
//int sample[104], dp[104][104];
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    int T, n, Cas = 1;
//    cin >> T;
//    while(T--){
//        memset(dp, 0, sizeof(dp));
//        cin >> n;
//        for(int i = 0; i < n; i++){
//            cin >> sample[i];
//            dp[i][i] = 1;
//        }
//
//        for(int len = 1; len < n; len++){
//            for(int s = 0, e = len; e < n; s++, e++){
//                dp[s][e] = dp[s][e-1]+1;
//                for(int k = s; k < e; k++){
//                    if(sample[e] == sample[k])
//                        dp[s][e] = min(dp[s][e], dp[s][k]+dp[k+1][e-1]);
//                }
//            }
//        }
//        printf("Case %d: %d\n", Cas++, dp[0][n-1]);
//    }
//
//    return 0;
//}
