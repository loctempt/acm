//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//#include <queue>
//using namespace std;
//
//int sample[104];
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    int n;
//    while(cin >> n){
//        memset(sample, 0, sizeof(sample));
//        int cnt = 0;
//        for(int i = 1; i <= n; i++){
//            cin >> sample[i];
//            if(sample[i] == 1)
//                cnt++;
//        }
//        int maxAns = 0;
//        for(int len = 0; len < n; len++){
//            for(int s = 1, e = 1+len; e <= n; s++, e++){
//                int One = 0, Zero = 0;
//                for(int k = s; k <= e; k++){
//                    if(sample[k] == 1)
//                        One--;
//                    else
//                        Zero++;
//                }
//                maxAns = max(maxAns, cnt+One+Zero);
//            }
//        }
//        cout << maxAns << endl;
//    }
//
//    return 0;
//}
