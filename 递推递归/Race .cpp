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
        for(int j = 1; j <= i; j++){//��������಻����������Ŀ
            dp[i][j] = ((dp[i - 1][j - 1] + dp[i-1][j]) * j)%MOD;//�Ӻ�ǰ��Ϊ��iƥ����ռ��һ�������������Ӻź���Ϊ��iƥ����i-1ƥ������ĳЩ���е�������
            cnt += dp[i][j];                                     //��Ч�ı߽������ͨ��ʹ��memset����ֵֵΪ�����ų��ˡ�
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
