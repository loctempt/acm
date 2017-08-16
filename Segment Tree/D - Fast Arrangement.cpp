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
//const int maxn = 1e6+19;
//
//int T, k, q;
//ll sample, x, y, c;
//
//ll sum[maxn*4], add[maxn*4];
//
//void pushUp(int u){
//    sum[u] = max(sum[lson], sum[rson]);
//}
//
//void pushDown(int u, int range){
//    if(add[u]){
//        add[lson] += add[u];
//        add[rson] += add[u];
//        sum[lson] += add[u];
//        sum[rson] += add[u];
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
//        add[u] += c; // lazy 标记
//        sum[u] += c ;
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
//        ret = max(ret, query(left, mid, lson));
//    if(mid < y)
//        ret = max(ret, query(mid+1, right, rson));
//    return ret;
//}
//
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    c = 1; // 对区间加一。
//    cin >> T;
//    for(int t = 1; t <= T; t++){
//        printf("Case %d:\n", t);
//        memset(sum, 0, sizeof(sum));
//        memset(add, 0, sizeof(add));
//        cin >> k >> q;
//        for(int i = 1; i <= q; i++){
//            scanf("%lld%lld", &x, &y);
//            y--;
//            if(query(1,maxn,1) < k){
//                update(1, maxn, 1);
//                printf("%d ", i);
//            }
//        }// query over.
//        printf("\n\n");
//    }
//
//    return 0;
//}
