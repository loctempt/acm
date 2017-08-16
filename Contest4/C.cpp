#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;
const int maxn = 5e4+10;

int n, m, cnt;
int p[maxn], dist[maxn];//dist is the distance from any node to its root.

int Find(int now){
    if(p[now] == now)
        return now;
    int temp = p[now];
    p[now] = Find(p[now]);
    dist[now] += dist[temp];
    return p[now];
}

void Merge(int a, int b, int x){
    int fa = Find(a), fb = Find(b);
    if(fa != fb){
        p[fb] = fa;
        dist[fb] = dist[a] + x - dist[b];
    }
    else{
        if(dist[a] + x != dist[b])
            cnt++;
    }
}

int main(){
#ifdef TEST
freopen("test.txt", "r", stdin);
#endif // TEST

    while(cin >> n >> m){
        for(int i = 0; i <= n; i++){
            p[i] = i;
            dist[i] = 0;
        }
        cnt = 0;
        for(int i = 0; i < m; i++){
            int a, b, x;
            scanf("%d%d%d", &a, &b, &x);
            Merge(a, b, x);
        }
        printf("%d\n", cnt);
    }

    return 0;
}
