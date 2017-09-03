//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//#include <queue>
//#define lson u<<1
//#define rson u<<1|1
//using namespace std;
//const int maxn = 1e5+19;
//
//int n, q, x, y, z;
//char parenthesis[maxn];
//int sum[maxn<<2], sample[maxn];
//
//void pushUp(int u){
//    sum[u] = min(sum[lson],sum[rson]);
//}
//void build(int left, int right, int u){
//    if(left == right){
//        sum[u] = sample[left];
//        return;
//    }
//    int mid = (left + right) >> 1;
//    build(left, mid, lson);
//    build(mid+1, right, rson);
//    pushUp(u);
//}
//int query(int left, int right, int u){
//    if(x <= left && right <= y){
//        return sum[u];
//    }
//    int mid = (left + right) >> 1, a, b;
//    if(x <= mid)
//        a = query(left, mid, lson);
//    if(mid < y)
//        b = query(mid+1, right, rson);
//    return min(a, b);
//}
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    while(cin >> n >> q){
//        memset(sum, 0, sizeof(sum));
//        memchr(sample, 0, sizeof(sample));
//        scanf("%s", parenthesis+1);
//        for(int i = 1; i <= n; i++)
//            sample[i] = parenthesis[i]=='(' ? sample[i-1]+1 : sample[i-1]-1;
//        build(1, n, 1);
//        for(int i = 0; i < q; i++){
//            int a, b;
//            scanf("%d%d", &a, &b);
//            if(a > b)
//                swap(a, b);
//            if(parenthesis[a] == parenthesis[b] || parenthesis[a] == ')' && parenthesis[b] == '('){
//                printf("Yes\n");
//                continue;
//            }
//            x = a; y = b-1;
//            if(query(1, n, 1) < 2)
//                printf("No\n");
//            else
//                printf("Yes\n");
//        }
//    }
//
//    return 0;
//}
