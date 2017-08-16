//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//#include <queue>
//#include <iomanip>
//using namespace std;
//
//int dp[105][105];
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    const int INF = 0x7fffffff;
//    int T, n, temp;
//    cin >> T;
//    while(T--){
//        int sum[104];
//        sum[0] = 0;
//        memset(dp, 0, sizeof(dp));
//        cin >> n;
//        for(int i = 1; i <= n; i++){
//            cin >> temp;
//            sum[i] = sum[i-1]+temp;
//        }
//        for(int i = 1; i < n; i++){//区间长度
//            for(int j = 1; j <= n - i; j++){
//                dp[j][j+i] = INF;
//                for(int k = j; k <= j + i - 1; k++){
//                    dp[j][j+i] = min(dp[j][j+i], dp[j][k]+dp[k+1][j+i] + sum[j+i] - sum[j-1]);//考虑这个区间和
//                }
//            }
//        }
//        cout << dp[1][n] << endl;
//    }
//
//    return 0;
//}
