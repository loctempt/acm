//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//#include <queue>
//#include <map>
//using namespace std;
//const int maxn = 500*500+19;
//
//int N;
//int sample[maxn], res[504];
////int test[504][504];
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    while(cin >> N){
//        map<int,int> ele;
//        for(int i = 1; i <= N*N; i++){
//            scanf("%d", &sample[i]);
//            if(!ele.count(sample[i]))
//                ele[sample[i]] = 1;
//            else
//                ele[sample[i]]++;
//        }
//        sort(sample+1, sample+N*N+1);
////        for(int i = 1; i <= N*N; i++)
////            cout << sample[i] << " ";
////        cout << endl;
////        int len = unique(sample+1, sample+N*N+1) - sample - 1;
////        for(int i = 1; i <= len; i++)
////            cout << sample[i] << " ";
////        cout << endl << endl;
//        int pos = 0;
//        for(int i = N*N; i > 0; i--){
//            if(ele[sample[i]] == 0)
//                continue;
//            ele[sample[i]]--;
//            for(int j = 0; j < pos; j++){
//                int gcd = __gcd(sample[i], res[j]);
//                ele[gcd] -= 2; // derived greatest common divisors appear in pair;
//            }                  // once find, remove two of them.
//            res[pos++] = sample[i];
//        }
////        for(int i = 0; i < N; i++){
////            for(int j = 0; j < N; j++){
////                test[i][j] = __gcd(res[i], res[j]);
////                cout << test[i][j] << " ";
////            }
////            cout << endl;
////        }
//        for(int i = 0; i < pos; i++)
//            cout << res[i] << " ";
//        cout << endl;
//    }
//
//    return 0;
//}
