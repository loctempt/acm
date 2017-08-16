#include <cstdio>
#include <queue>
#include <cstring>
using namespace std;
const int maxn = 1e6+19, INF = 0x3f3f3f3f;

struct node{
    int u, v, w;
}e[maxn];

int first[maxn], Next[maxn], v[maxn], w[maxn], d[maxn];
int cnt, n, m;// n 是站点数， m 是路线数.

void spfa(int src){
    queue<int> Q;
    d[src] = 0;
    Q.push(src);
    while(!Q.empty()){
        int u = Q.front();
        Q.pop();
        for(int i = first[u]; i != -1; i = Next[i]){
            if(d[v[i]] > d[u] + w[i]){
                d[v[i]] = d[u] + w[i];
                Q.push(v[i]);
            }
        }
    }
}

void makeEdge(int a, int b, int c){
    v[cnt] = b;
    w[cnt] = c;
    Next[cnt] = first[a];
    first[a] = cnt;
    cnt++;
}

void init(){
    memset(Next, -1, sizeof(Next));
    memset(first, -1, sizeof(first));
    for(int i = 0; i <= n; i++)
        d[i] = INF;
    cnt = 0;
}

int main(){
#ifdef TEST
freopen("test.txt", "r", stdin);
#endif // TEST

    int T;
    scanf("%d", &T);
    while(T--){
        scanf("%d%d", &n, &m);
        init();
        for(int i = 0; i < m; i++){
            scanf("%d%d%d", &e[i].u, &e[i].v, &e[i].w);
            makeEdge(e[i].u, e[i].v, e[i].w);
        }
        long long sum = 0;
        spfa(1);
        for(int i = 2; i <= n; i++)
            sum += d[i];
        init();
        for(int i = 0; i < m; i++)
            makeEdge(e[i].v, e[i].u, e[i].w);
        spfa(1);
        for(int i = 2; i <= n; i++)
            sum += d[i];
        printf("%lld\n", sum);
    }

    return 0;
}











//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//#include <queue>
//using namespace std;
//const int maxn = 1e6 + 10, INF = 0x5fffffff;
//
//int p, q, cnt;
//int u[maxn], v[maxn], w[maxn], first[maxn], Next[maxn], d[maxn];
//
//void spfa() {
//    d[1] = 0;
//    queue<int> que;
//    que.push(1);
//    while(!que.empty()) {
//        int temp = que.front();
//        que.pop();
//        for(int i = first[temp]; i != -1; i = Next[i]){
//            int to = v[i];
//            if(d[to] > d[temp] + w[i]){
//                d[to] = d[temp] + w[i];
//                que.push(to);
//            }
//        }
//    }
//}
//
//void makeEdge(int a, int b, int c) {
//    u[cnt] = a;
//    v[cnt] = b;
//    w[cnt] = c;
//    Next[cnt] = first[a];
//    first[a] = cnt;
//    cnt++;
//}
//
//void init(){
//    for(int i = 0; i <= p; i++)
//        d[i] = INF;
//    memset(first, -1, sizeof(first));
//    memset(Next, -1, sizeof(Next));
//    cnt = 1;
//}
//
//int main() {
//#ifdef TEST
//    freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    int T;
//    scanf("%d", &T);
//    while(T--) {
//        scanf("%d%d", &p, &q);
//        init();
//        for(int i = 1; i <= q; i++) {
//            int a, b, dst;
//            scanf("%d%d%d", &a, &b, &dst);
//            makeEdge(a, b, dst);
//        }
//        int sum = 0;
//        spfa();
//        for(int i = 2; i <= p; i++)
//            sum += d[i];
//        init();
//        for(int i = 1; i <= q; i++)
//            makeEdge(v[i], u[i], w[i]);
//        spfa();
//        for(int i = 2; i <= p; i++)
//            sum += d[i];
//        printf("%d\n", sum);
//    }
//
//    return 0;
//}





//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//#include <queue>
//using namespace std;
//const int maxn = 1e6 + 10, INF = 0x6fffffff;
//
//int p, q, cnt;
//int u[maxn], v[maxn], w[maxn], first[maxn], Next[maxn], d[maxn];
//
//void spfa(int flag) {
//    for(int i = 0; i <= p; i++)
//        d[i] = INF;
//    d[1] = 0;
//    queue<int> q;
//    q.push(1);
//    while(!q.empty()) {
//        int temp = q.front();
//        q.pop();
//        for(int i = first[temp]; i != -1; i = Next[i]) {
//            int to = (flag ? v[i] : u[i]);
//            if(d[to] > d[temp] + w[i]) {
//                d[to] = d[temp] + w[i];
//                q.push(to);
//            }
//        }
//    }
//}
//void resetMap() {
//    memset(first, -1, sizeof(first));
//    memset(Next, -1, sizeof(Next));
//    for(int i = 1; i <= q; i++){
//        int to = v[i];
//        Next[i] = first[to];
//        first[to] = i;
//    }
//}
//
//int main() {
//#ifdef TEST
//    freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    int T;
//    scanf("%d", &T);
//    while(T--) {
//        memset(first, -1, sizeof(first));
//        memset(Next, -1, sizeof(Next));
//        cnt = 1;
//        scanf("%d%d", &p, &q);
//        for(int i = 1; i <= q; i++) {
//            int a, b, dst;
//            scanf("%d%d%d", &a, &b, &dst);
//            u[i] = a; v[i] = b; w[i] = dst;
//            Next[i] = first[a];
//            first[a] = i;
//        }
//        int sum = 0;
//        spfa(1);
//        for(int i = 2; i <= p; i++)
//            sum += d[i];
//        resetMap();
//        spfa(0);
//        for(int i = 2; i <= p; i++)
//            sum += d[i];
//        printf("%d\n", sum);
//    }
//
//    return 0;
//}


//    #include <stdio.h>
//    #include <string.h>
//    #include <algorithm>
//    #include <queue>
//    using namespace std;
//
//    const int L = 10000000+10;
//    const int inf = 1500000000;
//    struct node
//    {
//        int now,to,w;
//    } e[L];
//    int first[L],Next[L];
//    int dis[L],vis[L];
//    int n,m;
//
//    void init()
//    {
//        int i,j;
//        for(i = 0; i<=m; i++)
//            first[i] = Next[i] = -1;
//        for(i = 0; i<m; i++)
//        {
//            scanf("%d%d%d",&e[i].now,&e[i].to,&e[i].w);
//            Next[i] = first[e[i].now];
//            first[e[i].now] = i;
//        }
//    }
//
//    void SPFA(int src,int flag)
//    {
//        int i;
//        for(i = 0; i<=n; i++)
//            dis[i] = inf;
//        dis[src] = 0;
//
//        queue<int> que;
//        que.push(src);
//        while(!que.empty()) {
//            src = que.front();
//            que.pop();
//            for(int i = first[src]; i != -1; i = Next[i]){
//                int to = (flag?e[i].to:e[i].now);
//                if(dis[to] > dis[src] + e[i].w){
//                    dis[to] = dis[src] + e[i].w;
//                    que.push(to);
//                }
//            }
//        }
//
//    }
//
//    void set_map()
//    {
//        int i;
//        for(i = 0; i<=m; i++)
//            first[i] = Next[i] = -1;
//        for(i = 0; i<m; i++)
//        {
//            int now = e[i].now;
//            int to = e[i].to;
//            Next[i] = first[to];
//            first[to] = i;
//        }
//    }
//
//    int main()
//    {  freopen("test.txt", "r", stdin);
//        int t,sum,i,j;
//        scanf("%d",&t);
//        while(t--)
//        {
//            sum = 0;
//            scanf("%d%d",&n,&m);
//            init();
//            SPFA(1,1);
//            for(i = 2; i<=n; i++)//先将1到每个车站的最小花费加起来
//                sum+=dis[i];
//            set_map();//重置图
//            SPFA(1,0);
//            for(i = 2; i<=n; i++)//将所有点到1的最小花费加起来
//                sum+=dis[i];
//            printf("%d\n",sum);
//        }
//
//        return 0;
//    }
