//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//#include <queue>
//typedef unsigned long long ull;
//using namespace std;
//const int maxn = 2016;
//
//ull a[maxn], b[maxn];
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    int n, m;
//    while(cin >> n >> m){
//        memset(a, 0, sizeof(a));
//        memset(b, 0, sizeof(b));
//        int quotientN = n/2016, quotientM = m/2016;
//        for(int i = 0; i < maxn; i++){
//            a[i] += quotientN;
//            b[i] += quotientM;
//        }
//        for(int i = 1; i <= n%2016; i++)
//            a[i]++;
//        for(int i = 1; i <= m%2016; i++)
//            b[i]++;
//        ull ans = 0;
//        for(int i = 0; i < maxn; i++)
//            for(int j = 0; j < maxn; j++)
//                if(i*j%2016 == 0)
//                    ans += a[i]*b[j];
//        cout << ans << endl;
//    }
//
//    return 0;
//}
