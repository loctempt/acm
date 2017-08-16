#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
#include <queue>
using namespace std;
const int maxn = 1e5+19;

int T, n;
int frn[maxn], beh[maxn], sample[maxn], sampleR[maxn], s[maxn], sr[maxn];

void addFrn(int x, int d){
    while(x <= n){
        frn[x] += d; x += x&-x;
    }
}

int sumFrn(int x){
    int ret = 0;
    while(x > 0){
        ret += frn[x]; x -= x&-x;
    }
    return ret;
}


int main(){
#ifdef TEST
freopen("test.txt", "r", stdin);
#endif // TEST

    cin >> T;
    while(T--){
        memset(frn, 0, sizeof(frn));
        memset(beh, 0, sizeof(beh));
        memset(s, 0, sizeof(s));
        memset(sr, 0, sizeof(sr));
        cin >> n;
        for(int i = 0; i < n; i++){
            scanf("%d", &sample[i]);
            sampleR[n-1-i] = sample[i];
        }
        for(int i = 0; i < n; i++){
//            if(sumBeh(sampleR[i]) - sumBeh(sampleR[i]-1) != 0){
//                sr[i] = sumBeh(sampleR[i]) - 1;
////                addBeh(sampleR[i], 1);
//            }
            {
                sr[i] = sumBeh(sampleR[i]);
                addBeh(sampleR[i], 1);
            }
//            if(sumFrn(sample[i]) - sumFrn(sample[i]-1) != 0){
//                s[i] = sumFrn(sample[i]) - 1;
////                addFrn(sample[i], 1);
//            }
            {
                s[i] = sumFrn(sample[i]);
                addFrn(sample[i], 1);
            }
        }
        reverse(sr, sr+n);
        int ans = 0;
        for(int i = 0; i < n; i++){
            int numFrn = s[i], numBeh = sr[i];
            ans += numFrn*(n-1-i-numBeh);
            ans += (i-numFrn)*numBeh;
            ans += numFrn * numBeh;
        }
        printf("%d\n", ans);
    }

    return 0;
}
