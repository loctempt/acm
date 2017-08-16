//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//#include <queue>
//using namespace std;
//
//int sample[10006], dp[10005][503];
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    int n, m;
//    while(cin >> n >> m){
//        memset(dp, 0, sizeof(dp));
//        for(int i = 1; i <= n; i++)
//            scanf("%d", &sample[i]);
//        for(int i = 1; i <= n; i++){
//            for(int j = 1; j <= m; j++){
//                dp[i][j] = dp[i-1][j-1] + sample[i];
//            }
//            dp[i][0] = dp[i-1][0];
//            for(int k = 1; k < i && k <= m; k++)
//                dp[i][0] = max(dp[i][0], dp[i-k][k]);
//        }
//        cout << dp[n][0] << endl;
//    }
//
//    return 0;
//}
