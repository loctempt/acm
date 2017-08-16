#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
#include <queue>
using namespace std;
const int maxn = 1e5+19;

int T, n;
int c[maxn], Lsmaller[maxn], sample[maxn], Rsmaller[maxn], Llarger[maxn], Rlarger[maxn];

void add(int x, int d){
    while(x < maxn){
        c[x] += d; x += x&-x;
    }
}

int sum(int x){
    int ret = 0;
    while(x > 0){
        ret += c[x]; x -= x&-x;
    }
    return ret;
}


int main(){
#ifdef TEST
freopen("test.txt", "r", stdin);
#endif // TEST

    cin >> T;
    while(T--){
        cin >> n;
        for(int i = 0; i < n; i++){
            scanf("%d", &sample[i]);
        }
        memset(c, 0, sizeof(c));
        for(int i = 0; i < n; i++){
            add(sample[i], 1);
            Lsmaller[i] = sum(sample[i] - 1);
            Llarger[i] = sum(100004) - sum(sample[i]);
        }
        memset(c, 0, sizeof(c));
        int j = 0;
        for(int i = n - 1; i >= 0; i--, j++){
            add(sample[i], 1);
            Rsmaller[i] = sum(sample[i] - 1);
            Rlarger[i] = sum(100004) - sum(sample[i]);
        }
        long long ans = 0;
        for(int i = 0; i < n; i++)
            ans += Lsmaller[i]*Rlarger[i] + Rsmaller[i]*Llarger[i];
        printf("%lld\n", ans);
    }

    return 0;
}
