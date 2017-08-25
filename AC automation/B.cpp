#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;
const int maxNode = 4003*104, sigma_size = 26, MOD = 20071027;
int ch[maxNode][sigma_size];
int val[maxNode];
int dp[300004];
char sample[300004];

struct Trie{
    int sz;
    Trie(){
        sz = 1;
        memset(ch[0], 0, sizeof(ch[0]));
        memset(dp, 0, sizeof(dp));
    }
    int idx(char c){
        return c - 'a';
    }
    void insert(char *s, int v){
        int u = 0, n = strlen(s);
        for(int i = 0; i < n; i++){
            int c = idx(s[i]);
            if(!ch[u][c]){
                memset(ch[sz], 0, sizeof(ch[sz]));
                val[sz] = 0;
                ch[u][c] = sz++;
            }
            u = ch[u][c];
        }
        val[u] = v;
    }
    int query(char *s){
        int u = 0, n = strlen(s);
        for(int i = 0; i < n; i++){
            int c = idx(s[i]);
            u = ch[u][c];
        }
        return val[u];
    }
    int hack(){
        int len = strlen(sample);
        for(int i = len-1; i >= 0; i--){
            int u = 0;
            for(int j = i; j < len; j++){
                int c = idx(sample[j]);
                if(!ch[u][c])
                    break;
                u = ch[u][c];
                if(val[u])
                    dp[i] = (dp[j+1]+dp[i])%MOD;
            }
        }
    }
};

int main(){
#ifdef TEST
freopen("test.txt", "r", stdin);
#endif
    int Case = 1;
    char str[104];
    while(~scanf("%s", sample)){
        Trie Td;
        int x;
        cin >> x;
        for(int i = 1; i <= x; i++){
            scanf("%s", str);
            Td.insert(str, 1);
        }
        dp[strlen(sample)] = 1;
        Td.hack();
        printf("Case %d: %d\n", Case++, dp[0]);
    }

    return 0;
}
