#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
#include <queue>
typedef long long ll;
using namespace std;
const ll MOD = 1000000007, maxn = 2e5 + 19;

ll n, m;
ll factorial[maxn];

void calcFac() {
    factorial[0] = factorial[1] = 1;
    for(int i = 2; i < maxn; i++)
        factorial[i] = i * factorial[i - 1] % MOD;
}

ll qpow(ll a, ll b) {
    ll ret = 1, base = a;
    while(b) {
        if(b & 1)
            ret = ret * base % MOD;
        base = base * base % MOD;
        b >>= 1;
    }
    return ret;
}

ll ans() {
    ll nume, denom;
    nume = factorial[n - 2 + m - 2];
    denom = factorial[n - 2] * factorial[m - 2] % MOD;
    return nume * qpow(denom, MOD - 2) % MOD;           // 使用快速幂求出nume关于MOD的逆元，
}                                                       // 以便将除法求模转化为乘法求模。

int main() {
#ifdef TEST
    freopen("test.txt", "r", stdin);
#endif // TEST
    calcFac();
    while(cin >> n >> m) {
        cout << ans() << endl;
    }

    return 0;
}
