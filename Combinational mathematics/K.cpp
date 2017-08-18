#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
#include <queue>
#undef TEST
typedef long long ll;
using namespace std;
const int MOD = 1000007;

ll qpow(ll a, ll b){
    int ret = 1, y = a;
    while(b){
        if(b & 1) ret = ret * y % MOD;
        y = y * y % MOD;
        b >>= 1;
    }
    return ret;
}

int main(){
#ifdef TEST
freopen("test.txt", "r", stdin);
#endif // TEST

    int k;
    while(cin >> k)
        cout << qpow(2, k) << endl;

    return 0;
}
