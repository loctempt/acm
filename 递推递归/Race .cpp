#include <iostream>
#include <cstdio>
#include <cstring>
#define MOD 10056
using namespace std;
long long dp[1005][1005], ans[1005];
int main(){
    memset(dp,0,sizeof(dp));
    memset(ans, 0, sizeof(ans));
    dp[0][0] = 1;
    for(int i = 1; i < 1005; i++){
        long long cnt = 0;
        for(int j = 1; j <= i; j++){//结果的种类不会多于马的数目
            dp[i][j] = ((dp[i - 1][j - 1] + dp[i-1][j]) * j)%MOD;//加号前者为第i匹马单独占用一个名额的情况，加号后者为第i匹马与i-1匹马其中某些并列到达的情况
            cnt += dp[i][j];                                     //无效的边界情况都通过使用memset将初值值为零所排除了。
            cnt %= MOD;
        }
        ans[i] = cnt;
    }
    int t;
    while(cin >> t){

        int index;
        for(int i = 1; i <= t; i++){
            scanf("%d", &index);
            printf("Case %d: %lld\n", i, ans[index]);
        }

    }

    return 0;
}
