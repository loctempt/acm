//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//#include <string>
//#include <queue>
//using namespace std;
//
//int dp[104][104];
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    string sample;
//    while(cin >> sample){
//        if(sample == "end")
//            break;
//        memset(dp, 0, sizeof(dp));
//        int len = sample.length();
//        for(int i = 1; i < len; i++){//区间长度
//            for(int j = 0, r=i; r < len; j++,r++){//j是区间起点，r是区间终点
//                if(sample[j] == '(' && sample[r] == ')' || sample[j] == '[' && sample[r] == ']')
//                    dp[j][r] = dp[j+1][r-1]+2;
//                for(int k = j; k < r; k++){
//                    dp[j][r] = max(dp[j][r], dp[j][k]+dp[k+1][r]);//确保不匹配时保存区间中的最大值
//                }
//            }
//        }
//        cout << dp[0][len-1] << endl;
//    }
//
//    return 0;
//}
