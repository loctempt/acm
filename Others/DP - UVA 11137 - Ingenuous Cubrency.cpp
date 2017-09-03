////version: divergence.
//#include <cstdio>
//#include <cstring>
//#include <iostream>
//#include <algorithm>
//typedef long long ll;
//using namespace std;
//const ll maxn = 1e4;
//
//ll dp[22][10004];
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    int n;
//    memset(dp, 0, sizeof(dp));
//    dp[0][0] = 1;
//    for(int i = 1; i < 22; i++){
//        for(int j = 0; j <= maxn; j++){
//            for(int a = 0; j+a*i*i*i <= maxn; a++){
//                dp[i][j+a*i*i*i] += dp[i-1][j];
//            }
//        }
//    }
//    while(cin >> n){
//        cout << dp[21][n] << endl;
//    }
//
//    return 0;
//}
//
////version: convergence.
//#include<cstdio>
//#include<cstring>
//using namespace std;
//
//long long result[10005][22];
//
//int main()
//{
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//	int b, k;
//	memset(result, 0, sizeof result);
//	for (int i = 0; i <= 21; i++)
//		result[0][i] = 1;
////    result[0][0] = 1;
//	for (int i = 1; i <= 10000; i++)
//	{
//		for (int j = 1; j <= 21; j++)
//		{
//			for(int a = 0; a*j*j*j <= i; a++)
//			{
//				result[i][j] += result[i - a*j*j*j][j-1];
//			}
//		}
//	}
//	while (scanf("%d", &b) != EOF)
//		printf("%lld\n", result[b][21]);
//	return 0;
//}
