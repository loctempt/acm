//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//#include <queue>
//typedef long long ll;
//using namespace std;
//const ll maxn = 1e5+19, MOD = 1000000007;
//
//ll n, k, cnt;
//ll sample[maxn], buff[maxn];
//
//ll mtply(int range){
//    if(buff[range] == 0)
//        buff[range] = (2*mtply(range - 1)) % MOD;
//    return buff[range];
//}
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//    buff[0] = 1;
//    while(cin >> n >> k){
//        for(int i = 0; i < n; i++)
//            scanf("%lld", &sample[i]);
//        sort(sample, sample+n);
//        cnt = 0;
//        int j = n-1;
//        for(int i = 0; sample[i]*2 <= k && i < n; i++){
//            cnt = (cnt + 1) % MOD;
//            for(;sample[i]+sample[j] > k && j >= i; j--);
//            if(j >= i){
//                cnt = (cnt + mtply(j-i) - 1) % MOD;
//            }
//        }
//        printf("%lld\n", cnt);
//    }
//
//    return 0;
//}
