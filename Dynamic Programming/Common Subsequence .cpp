//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <string>
//#include <cstring>
//#include <vector>
//using namespace std;
//
//int dp[1000][1000];
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    string str1, str2;
//    int len1, len2;
//    while(cin >> str1 >> str2){
//        len1 = str1.length(), len2 = str2.length();
//        memset(dp, 0, sizeof(dp));
//        for(int i = 0; i < len1; i++){
//            for(int j = 0; j < len2; j++){
//                if(str1[i] == str2[j])
//                    dp[i+1][j+1] = dp[i][j] + 1;
//                else
//                    dp[i+1][j+1] = max(dp[i][j+1],dp[i+1][j]);
//            }
//        }
//        cout << dp[len1][len2] << endl;
//    }
//
//    return 0;
//}
