//快速幂 
ll qpow(ll base, ll exponent) {
    ll ret = 1;
    while(exponent) {
        if(exponent & 1) ret = ret * base % MOD;
        base = base * base % MOD;
        exponent >>= 1;
    }
    return ret;
}
//卢卡斯原理 逆元计算
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