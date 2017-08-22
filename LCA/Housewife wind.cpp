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
//int N, Q, S, ne, id;
//
//int first[maxn], Next[maxn>>1];
//int father[maxn], son[maxn], cnt[maxn], dep[maxn], top[maxn], idx[maxn];
//struct node{
//    int u, v, w;
//}edge[maxn>>1];
//
//void dfs1(int u, int pre, int d){
//    father[u] = pre;
//    dep[u] = d;
//    cnt[u] = 1;
//    son[u] = 0;
//    for(int i = first[u]; i != -1; i = Next[i]){
//        int to = edge[i].v;
//        if(to == pre)
//            continue;
//        dfs1(to, u, d+1);
//        cnt[u] += cnt[to];
//        if(cnt[son[u]] < cnt[to])
//            son[u] = to;
//    }
//}
//void dfs2(int u, int rot){
//    top[u] = rot;
//    idx[u] = id++;
//    if(son[u])
//        dfs2(son[u], rot);
//    for(int i = first[u]; i != -1; i = Next[i]){
//        int to = edge[i].v;
//        if(to == father[u] || to == son[u])
//            continue;
//        dfs2(to, to);
//    }
//}
//
//inline void makeEdge(int u, int v, int w){
//    edge[ne].u = u;
//    edge[ne].v = v;
//    edge[ne].w = w;
//    Next[ne] = first[u];
//    first[u] = ne++;
//}
//
//int lc[maxn << 2], rc[maxn << 2];
//long long s[maxn << 2];
//
//inline void pushUp(int u){
//    s[u] = s[lson] + s[rson];
//}
//
//void build(int left, int right, int u){
//    lc[u] = left; rc[u] = right; s[u] = 0;
//    if(left == right)
//        return;
//    int mid = (left + right) >> 1;
//    build(left, mid, lson);
//    build(mid+1, right, rson);
//    pushUp(u);
//}
//
//void update(int u, int x, int w){
//    if(lc[u] == x && rc[u] == x){
//        s[u] = w;
//        return;
//    }
//    int mid = (rc[u] + lc[u]) >> 1;
//    if(x <= mid)
//        update(lson, x, w);
//    else
//        update(rson, x, w);
//    pushUp(u);
//}
//
//long long query(int left, int right, int u){
//    if(left <= lc[u] && rc[u] <= right)
//        return s[u];
//    long long ret = 0;
//    int mid = (lc[u] + rc[u]) >> 1;
//    if(left <= mid)
//        ret += query(left, mid, lson);
//    if(mid < right)
//        ret += query(mid+1, right, rson);
//    return ret;
//}
//
//void init(){
//    ne = 0; id = 1;
//    memset(first, -1, sizeof(first));
//    int u, v, w;
//    for(int i = 0; i < N-1; i++){
//        scanf("%d%d%d", &u, &v, &w);
//        makeEdge(u, v, w);
//        makeEdge(v, u, w);
//    }
//    dfs1(1, 0, 0);
//    dfs2(1,1);
//    build(1,N,1);
//    for(int i = 0; i < N - 1; i++){
//        if(dep[edge[i<<1].u] < dep[edge[i<<1].v])
//            swap(edge[i<<1].u, edge[i<<1].v);
//        update(1, idx[edge[i<<1].u], edge[i<<1].w);
//    }
//}
//
//long long solve(int u, int v){
//    long long ret = 0;
//    int p = top[u], q = top[v];
//    while(p != q){
//        if(dep[p] < dep[q]){
//            swap(p, q);
//            swap(u, v);
//        }
//        ret += query(idx[p], idx[u], 1);
//        u = father[p];
//        p = top[u];
//    }
//    if(u == v)
//        return ret;
//    if(dep[u] > dep[v])
//        swap(u, v);
//    ret += query(idx[son[u]], idx[v], 1);
//    return ret;
//}
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    while(~scanf("%d%d%d", &N, &Q, &S)){
//        init();
//        int k, u, w;
//        while(Q--){
//            scanf("%d%d", &k, &u);
//            if(k){
//                scanf("%d", &w);
//                update(idx[edge[u*2-2].u], w, 1);
//            }
//            else{
//                printf("%lld\n", solve(S, u));
//                S = u;
//            }
//        }
//    }
//
//    return 0;
//}
