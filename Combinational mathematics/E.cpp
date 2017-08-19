#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
#include <queue>
typedef long long ll;
using namespace std;
const ll maxn = 2004, MOD = 1e9 + 7;

ll m, n, T;
ll dp[maxn][maxn];

ll qpow(ll base, ll exponent) {
    ll ret = 1;
    while(exponent) {
        if(exponent & 1) ret = ret * base % MOD;
        base = base * base % MOD;
        exponent >>= 1;
    }
    return ret;
}

int main() {
#ifdef TEST
    freopen("test.txt", "r", stdin);
#endif // TEST

    cin >> T;
    while(T--) {
        memset(dp, 0, sizeof(dp));
        cin >> n >> m;
        dp[1][1] = m;
        for(int i = 2; i <= n; i++)
            for(int j = 1; j <= i; j++)
                dp[i][j] = (dp[i - 1][j] * j % MOD + dp[i - 1][j - 1] * (m - j + 1) % MOD) % MOD;
        ll ans = 0;
        for(int i = 1; i <= m; i++){
            ans = (ans % MOD + dp[n][i] * qpow(m-i, n) % MOD) % MOD;
        }
        cout << ans << endl;
    }

    return 0;
}
