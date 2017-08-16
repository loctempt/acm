//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//#include <queue>
//#define lson u<<1
//#define rson u<<1|1
//typedef long long ll;
//using namespace std;
//const int maxn = 1e5+19;
//
//int n, q;
//ll sample, x, y, c;
//char ord[10];
//
//ll sum[maxn*4], add[maxn*4];
//
//void pushUp(int u){
//    sum[u] = sum[lson] + sum[rson];
//}
//
//void pushDown(int u, int range){
//    if(add[u]){
//        add[lson] += add[u];
//        add[rson] += add[u];
//        sum[lson] += add[u] * (range - (range>>1));
//        sum[rson] += add[u] * (range>>1);
//        add[u] = 0;
//    }
//}
//
//void build(int left, int right, int u){
//    if(left == right){
//        scanf("%lld", &sum[u]);
//        return;
//    }
//    int mid = (left + right) >> 1;
//    build(left, mid, lson);
//    build(mid+1, right, rson);
//    pushUp(u);
//}
//
//void update(int left, int right, int u){
//    if(x <= left && right <= y){
//        add[u] += c; // lazy ±ê¼Ç
//        sum[u] += c * (right - left + 1);
//        return;
//    }
//    pushDown(u, right - left + 1);
//    int mid = (left + right) >> 1;
//    if(x <= mid)
//        update(left, mid, lson);
//    if(mid < y)
//        update(mid+1, right, rson);
//    pushUp(u);
//}
//
//ll query(int left, int right, int u){
//    if(x <= left && right <= y)
//        return sum[u];
//    pushDown(u, right - left + 1);
//    int mid = (left + right) >> 1;
//    ll ret = 0;
//    if(x <= mid)
//        ret += query(left, mid, lson);
//    if(mid < y)
//        ret += query(mid+1, right, rson);
//    return ret;
//}
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    while(cin >> n >> q){
//        memset(sum, 0, sizeof(sum));
//        memset(add, 0, sizeof(add));
//        build(1,n,1);
//        for(int i = 1; i <= q; i++){
//            scanf("%s%lld%lld", ord, &x, &y);
//            if(*ord == 'Q')
//                printf("%lld\n", query(1,n,1));
//            if(*ord == 'C'){
//                scanf("%lld", &c);
//                update(1,n,1);
//            }
//        }
//    }
//
//    return 0;
//}
