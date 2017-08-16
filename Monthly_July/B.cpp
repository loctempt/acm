//#include <algorithm>
//#include <iostream>
//#include <cstdio>
//#include <math.h>
//#define TEST
//using namespace std;
//const int maxn = 1e5+5;
//int enthu[maxn], deEnthu[maxn];
//bool cmp_up(int a, int b){
//    return a > b;
//}
//int main(){
//
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    int T;
//    cin >> T;
//    while(T--){
//        int n;
//        cin >> n;
//        for(int i = 0; i < n; i++){
//            scanf("%d", &enthu[i]);
//        }
//        for(int i = 0; i < n; i++){
//            scanf("%d", &deEnthu[i]);
//        }
//        sort(enthu, enthu + n, cmp_up);
//        sort(deEnthu, deEnthu + n);
//        int res = 0;
//        for(int i = 0; i < n; i++){
//            res += abs(enthu[i] - deEnthu[i]) * abs(enthu[i] - deEnthu[i]);
//        }
//        cout << res << endl;
//    }
//
//    return 0;
//}
