//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//#include <queue>
//using namespace std;
//const int maxn = 1e5 + 10;
//
//int T, n, k = 0;
//int sample[maxn];
//int temp[maxn];
//
//int main() {
//#ifdef TEST
//    freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    cin >> T;
//    while(T--) {
//        cin >> n;
////        memset(vis, false, sizeof(vis));
//        memset(sample, 0, sizeof(sample));
//        for(int i = 0; i < n; i++)
//            scanf("%d", &sample[i]);
//        while((1 << k) < n) k++;
//        int len = (1 << k);
//        for(int i = 0; i < k; i++) {
//            int cnt;
//            if(k % 2 == 0) {
//                cnt = 0;
//                for(int i = 0; i < len; i += 4) {
//                    temp[cnt] = sample[i];
//                    temp[cnt + 1] = sample[i + 2];
//                    cnt += 2;
//                }
//                cnt = 1;
//                for(int i = 1; i < len; i += 4) {
//                    temp[cnt] = sample[i];
//                    temp[cnt + 1] = sample[i + 2];
//                    cnt += 2;
//                }
//            }
//            else{
//                cnt = 0;
//                for(int i = 0; i < len; i += 4) {
//                    sample[cnt] = temp[i];
//                    sample[cnt + 1] = temp[i + 2];
//                    cnt += 2;
//                }
//                cnt = 1;
//                for(int i = 1; i < len; i += 4) {
//                    sample[cnt] = temp[i];
//                    sample[cnt + 1] = temp[i + 2];
//                    cnt += 2;
//                }
//            }
//        for(int i = 0; i < len; i++)
//            if(k%2 == 1)
//                printf("%d ", temp[i]);
//            else
//                printf("%d ", sample[i]);
//        }
//        cout << endl;
//    }
//
//    return 0;
//}
