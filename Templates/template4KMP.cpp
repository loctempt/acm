//KMP
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
#include <queue>
using namespace std;
const int maxn = 1e5+10, mod = 1000000007;

char s[maxn], ss[maxn];
int dp[maxn], Next[maxn], len1, len2;
bool vis[maxn];

void getNext(){
    int len = len2;
    Next[0] = Next[1] = 0;
    int j;
    for(int i = 1; i < len; i++){
        j = Next[i];
        while(j && s[j] != s[i])
            j = Next[j];
        if(s[j] == s[i])
            Next[i + 1] = j + 1;
        else
            Next[i + 1] = 0;
    }
}

void KMPSearch(){
    getNext();
    int len = len1, m = len2;
    int j = 0;
    for(int i = 0; i < len; i++){
        while(j && ss[i] != s[j])
            j = Next[j];
        if(ss[i] == s[j])
            j++;
        if(j == m)
            vis[i+1] = true;
    }
}

int main(){
#ifdef TEST
freopen("test.txt", "r", stdin);
#endif // TEST

    int T, Case = 1;
    cin >> T;
    while(T--){
        memset(dp, 0, sizeof(dp));
        memset(vis, false, sizeof(vis));
        scanf("%s%s", ss, s);
        len1 = strlen(ss); len2 = strlen(s);
        KMPSearch();
        dp[0] = 1;
        for(int i = 1; i <= len1; i++){
            dp[i] = dp[i - 1];
            if(vis[i])
                dp[i] = (dp[i] + dp[i - len2]) % mod;
        }
        printf("Case #%d: %d\n", Case++, dp[len1]);
//        cout << dp[len1] << endl;
    }

    return 0;
}
