//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//#include <queue>
//typedef long long ll;
//using namespace std;
//const int MOD = 100003;
//
//int qpow(ll base, ll exponent) {
//    int ret = 1;
//    while(exponent) {
//        if(exponent & 1) ret = ret * base % MOD;
//        base = base * base % MOD;
//        exponent >>= 1;
//    }
//    return ret;
//}
//
//int main() {
//#ifdef TEST
//    freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    ll m, n;
//    cin >> m >> n;
//    ll ans = (qpow(m, n) % MOD - m * qpow(m - 1, n - 1) % MOD) % MOD;
//    if(ans < 0)
//        ans += MOD;
//    cout << ans << endl;
//
//    return 0;
//}
