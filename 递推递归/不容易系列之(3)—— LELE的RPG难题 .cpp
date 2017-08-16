//#include <iostream>
//#include <cstdio>
//#include <utility>
//using namespace std;
//pair<int,int> myPair[55];
//int main(){
//    unsigned long long x = -1;
//    cout << x << endl;
//    int n;
//    while(cin >> n){
//        if(n == 1){
//            cout << 3 << endl;
//            continue;
//        }
//        for(int i = 0; i < 55; i++){
//            myPair[i].first = 0;
//            myPair[i].second = 0;
//        }
//        myPair[1].first = 3;
//        myPair[1].second = 1;
//        myPair[n].first = 2;
//        myPair[n].second = 1;
//        for(int i = 2; i < n; i++){
//            myPair[i].first = 3 - myPair[i - 1].second - myPair[i + 1].second;
//            myPair[i].second = 1;
//        }
//        unsigned long long res = 1;
//        for(int i = 1; i <= n; i++){
////            cout << myPair[i].first << " ";
//            res *= myPair[i].first;
//        }
////        cout << endl;
//        cout << res << endl;
//    }
//    return 0;
//}
#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    int n;
    unsigned long long f[51];
    f[1] = 3, f[2] = f[3] = 6;
    for(int i = 4; i < 51; i++){
        f[i] = f[i - 1] + f[i - 2] * 2;
    }
    while(scanf("%d", &n) != EOF){
        printf("%llu\n", f[n]);
    }
    return 0;
}
