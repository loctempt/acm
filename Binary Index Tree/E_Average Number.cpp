//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//#include <queue>
//typedef long long ll;
//using namespace std;
//const int maxn = 1e5+10;
//
//ll n, k;
//
//ll c[maxn], sample[maxn];
//double a[maxn], b[maxn];
//
//void add(int x, int d){
//    while(x <= n){
//        c[x] += d; x += x&-x;
//    }
//}
//
//int sum(int x){
//    int ret = 0;
//    while(x > 0){
//        ret += c[x]; x -= x&-x;
//    }
//    return ret;
//}
//
//ll check(double mid){
//    memset(c, 0, sizeof(c));
//    for(int i = 0; i <= n; i++){
//        a[i] = b[i] = sample[i] - i*mid;
//    }
//    sort(a, a+n+1);
//    int len = unique(a, a+n+1) - a;
//    ll ret = 0;
//    for(int i = 0; i <= n; i++){
//        int temp = lower_bound(a, a+len, b[i]) - a + 1;
//        ret += sum(temp);
//        add(temp, 1);
//    }
//    return ret;
//}
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    while(cin >> n >> k){
//        sample[0] = 0;
//        for(int i = 1; i <= n; i++){
//            scanf("%lld", &sample[i]);
//            sample[i] += sample[i-1];
//        }
//        double left = 0, right = 100000, mid;
//        while(right - left > 1e-8){
//            mid = (left + right) / 2;
//            if(check(mid) >= k){ // mid is too small.
//                left = mid;
//            }
//            else{                // mid is too large.
//                right = mid;
//            }
//        }
//        printf("%.3f\n", left);
//    }
//
//    return 0;
//}
//
//
