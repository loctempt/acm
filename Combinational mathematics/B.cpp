#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
#include <queue>
typedef long long ll;
using namespace std;
const int maxn = 1e5+19;

ll T, n, m, p;
ll factorial[maxn];

void calcFac(){
    factorial[0] = 1;
    for(int i = 1; i <= p; i++)
        factorial[i] = i * factorial[i-1] % p;
}

ll qpow(ll base, ll exponent){
    ll ret = 1;
    while(exponent){
        if(exponent & 1)
            ret = ret * base % p;
        base = base * base % p;
        exponent >>= 1;
    }
    return ret%p;
}

ll lucas(ll x, ll y){
    ll ret = 1;
    while(x && y){
        ll a = x % p, b = y % p;
        if(a < b) return 0;
        ret *= factorial[a] * qpow(factorial[b] * factorial[a - b] % p, p-2) % p;
        x /= p; y /= p;
    }
    return ret%p;
}

int main(){
#ifdef TEST
freopen("test.txt", "r", stdin);
#endif // TEST

    cin >> T;
    while(T--){
        cin >> n >> m >> p;
        calcFac();
        cout << lucas(n+m, m) << endl;
    }

    return 0;
}
