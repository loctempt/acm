//#include <iostream>
//#include <cstring>
//#include <cstdio>
//#include <algorithm>
//typedef long long ll;
//using namespace std;
//const int maxn = 60;
//
//int t;
//ll sample[maxn];
//ll testCases[]{2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37};
//
//ll qpow(ll base, ll exponent, ll mod){
//    ll ret = 1;
//    while(exponent){
//        if(exponent&1) ret = (ret * base)%mod;
//        base = base*base%mod;
//        exponent >>= 1;
//    }
//    return ret;
//}
//bool miller_rabin(ll n){
//    if(n <= 2)
//        if(n == 2)
//            return true;
//        else
//            return false;
//    if(n % 2 == 0)
//        return false;
//    ll u = n - 1;
//    while(u % 2 == 0)
//        u >>= 1;
//    for(int i = 0; i < 12; i++){
//        if(testCases[i] == n)
//            continue;
//        ll x = qpow(testCases[i], u, n);
//        while(u < n){
//            ll y = qpow(x, 2, n);
//            if(y == 1 && x != 1 && x != n - 1)
//                return false;
//            x = y;
//            u <<= 1;
//        }
//        if(x != 1)
//            return false;
//    }
//    return true;
//}
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    cin >> t;
//    for(int i = 0; i < t; i++){
//        cin >> sample[i];
//        cout << (miller_rabin(sample[i]) ? "Yes" : "No") << endl;
//    }
//
//
//    return 0;
//}
