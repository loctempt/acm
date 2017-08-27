//SPFA队列实现
struct node{
    int u, v, w;
}e[maxn];

int first[maxn], Next[maxn], v[maxn], w[maxn], d[maxn];
bool vis[maxn];
int cnt;

void spfa(int src){
    queue<int> Q;
    d[src] = 0;
    Q.push(src);
    vis[src] = true; // newly added array vis[], accuracy to be tested.
    while(!Q.empty()){
        int u = Q.front();
        Q.pop();
        vis[u] = false;
        for(int i = first[u]; i != -1; i = Next[i]){
            if(d[v[i]] > d[u] + w[i]){
                d[v[i]] = d[u] + w[i];
                if(!vis[v[i]]){
                    vis[v[i]] = true;
                    Q.push(v[i]);
                }
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