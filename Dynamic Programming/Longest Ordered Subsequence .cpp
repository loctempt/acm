//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//using namespace std;
//
//int sample[1005], dp[1005];
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    int n;
//    while(cin >> n){
//        for(int i = 0; i < 1005; i++)
//            dp[i] = 1;
//        for(int i = 0; i < n; i++)
//            cin >> sample[i];
//        int res = 1;
//        for(int i = 1; i < n; i++){
//            int maxLen = 0, now = sample[i];
//            for(int j = 0; j < i; j++){
//                int temp = sample[j], tLen = dp[j];
//                if(temp < now && tLen > maxLen)
//                    maxLen = tLen;
//            }
//            dp[i]+=maxLen;
//            if(dp[i] > res)
//                res = dp[i];
//        }
//        cout << res << endl;
//    }
//
//    return 0;
//}
