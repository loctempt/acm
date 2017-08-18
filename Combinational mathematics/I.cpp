//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//#include <queue>
//using namespace std;
//const int maxn = 21;
//
//int T, n;
//double Staggered[maxn], factorial[maxn];
//
//void init(){
//    Staggered[0] = Staggered[1] = 0;
//    Staggered[2] = factorial[0] = factorial[1] = 1;
//    factorial[2] = 2;
//    for(int i = 3; i < maxn; i++){
//        Staggered[i] = (i - 1) * (Staggered[i-1] + Staggered[i-2]);
//        factorial[i] = i * factorial[i-1];
//    }
//}
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    init();
//    cin >> T;
//    while(T--){
//        cin >> n;
//        printf("%.2f%%\n", Staggered[n]/factorial[n]*100.0);
//    }
//
//    return 0;
//}
