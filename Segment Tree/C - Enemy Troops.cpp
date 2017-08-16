//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//#include <queue>
//#define lson u<<1
//#define rson u<<1|1
//using namespace std;
//const int maxn = 5e4;
//
//int T, n, sample, x, y;
//
//int sum[maxn*4];
//
//void pushUp(int u){
//    sum[u] = sum[lson] + sum[rson];
//}
//
//void build(int left, int right, int u){
//    if(left == right){
//        scanf("%d", &sum[u]);
//        return;
//    }
//    int mid = (left + right) >> 1;
//    build(left, mid, lson);
//    build(mid+1, right, rson);
//    pushUp(u);
//}
//
//void update(int left, int right, int u){
//    if(left == right){
//        sum[u] += y;
//        return;
//    }
//    int mid = (left + right) >> 1;
//    if(x <= mid)
//        update(left, mid, lson);
//    else
//        update(mid+1, right, rson);
//    pushUp(u);
//}
//
//int query(int left, int right, int u){
//    if(x <= left && right <= y)
//        return sum[u];
//    int mid = (left + right) >> 1, ret = 0;
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
//    cin >> T;
//    for(int t = 1; t <= T; t++){
//        printf("Case %d:\n", t);
//        scanf("%d", &n);
//        build(1,n,1);
//        char ord[10];
//        while(scanf("%s", ord) != EOF){
//            if(*ord == 'E')
//                break;
//            scanf("%d%d", &x, &y);
//            if(*ord == 'Q')
//                printf("%d\n", query(1,n,1));
//            if(*ord == 'S'){
//                y = -y;
//                update(1,n,1);
//            }
//            if(*ord == 'A')
//                update(1,n,1);
//        }
//    }
//
//    return 0;
//}
