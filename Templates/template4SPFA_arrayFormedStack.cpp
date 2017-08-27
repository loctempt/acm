//SPFA数组栈实现
int n, m, cnt;
int u[maxn], v[maxn], w[maxn], first[maxn], Next[maxn], d[maxn], stak[maxn];
bool vis[maxn];

void init(){
    memset(first, -1, sizeof(first));
    memset(Next, -1, sizeof(Next));
    memset(vis, false, sizeof(vis));
    for(int i = 0; i <= n; i++)
        d[i] = INF;
    cnt = 0;
}

void makeEdge(int a, int b, int x){
    u[cnt] = a;
    v[cnt] = b;
    w[cnt] = x;
    Next[cnt] = first[a];
    first[a] = cnt;
    cnt++;
}

void spfa(){
    int top = 0;
    stak[top++] = 1;
    d[1] = 0; // mind origin value of d[].
    vis[1] = true;
    while(top != 0){
        int u = stak[--top];
        vis[u] = false;
        for(int i = first[u]; i != -1; i = Next[i]){
            int to = v[i];
            if(d[to] > d[u] + w[i]){
                d[to] = d[u] + w[i];
                if(!vis[to]){
                    vis[to] = true;
                    stak[top++] = to;
                }
            }
        }
    }
}