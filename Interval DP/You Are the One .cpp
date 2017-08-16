#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
#include <queue>
using namespace std;

const int INF = 0x7fffffff;
int sample[104], dp[104][104], sum[104];

int main(){
#ifdef TEST
freopen("test.txt", "r", stdin);
#endif // TEST

    int T, n;
    cin >> T;
    for(int t = 1; t <= T; t++){
        memset(dp, 0, sizeof(dp));
        memset(sum, 0, sizeof(sum));
        cin >> n;
        for(int i = 1; i <= n; i++){
            cin >> sample[i];
            sum[i] = sum[i-1] + sample[i];
        }
        for(int len = 1; len <= n-1; len++){
            for(int s = 1, e = 1+len; e <= n; s++, e++){
                dp[s][e] = INF;
                for(int k = s; k <= e; k++){
                    dp[s][e] = min(dp[s][e], dp[s+1][k] + dp[k+1][e] + (k-s+1)*(sum[e]-sum[k]) + (k-s)*sample[s] );
                }
            }
        }
        printf("Case #%d: %d\n", t, dp[1][n]);
    }
    return 0;
}
