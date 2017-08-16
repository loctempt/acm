#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
#include <queue>
#define lson u<<1
#define rson u<<1|1
using namespace std;
const int maxn = 1e5+18;

int T, n, q, x, y, z;

int sum[maxn<<2], add[maxn<<2];

void pushUp(int u){
    sum[u] = sum[lson] + sum[rson];
}

void pushDown(int u, int range){
    if(add[u]){
        add[lson] = add[u];
        add[rson] = add[u];
        sum[lson] = add[u]*(range - (range>>1));
        sum[rson] = add[u]*(range>>1);
        add[u] = 0;
    }
}

void build(int left, int right, int u){
    if(left == right){
        sum[u] = 1;
        return;
    }
    int mid = (left + right) >> 1;
    build(left, mid, lson);
    build(mid+1, right, rson);
    pushUp(u);
}

int query(int left, int right, int u){
    if(x <= left && right <= y)
        return sum[u];
    pushDown(u, right - left + 1);
    int mid = (left + right) >> 1, ret = 0;
    if(x <= mid)
        ret += query(left, mid, lson);
    if(mid < y)
        ret += query(mid+1, right, rson);
    return ret;
}

void update(int left, int right, int u){
    if(x <= left && right <= y){
        sum[u] = (right - left + 1) * z;
        add[u] = z;
        return;
    }
    pushDown(u, right - left + 1);
    int mid = (left + right) >> 1;
    if(x <= mid)
        update(left, mid, lson);
    if(mid < y)
        update(mid+1, right, rson);
    pushUp(u);
}

int main(){
#ifdef TEST
freopen("test.txt", "r", stdin);
#endif // TEST

    cin >> T;
    for(int t = 1; t <= T; t++){
        printf("Case %d: The total value of the hook is ", t);
        memset(add, 0, sizeof(add));
        scanf("%d%d", &n, &q);
        build(1,n,1);
        for(int i = 1; i<= q; i++){
            scanf("%d%d%d", &x, &y, &z);
            update(1,n,1);
        }
        x = 1; y = n;
        printf("%d.\n", query(1,n,1));
    }

    return 0;
}
