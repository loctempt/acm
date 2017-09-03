#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
const int maxn = 1e6+19;

int n, m, a, b, maxSum;
struct node{
    int parent, scale;
}Node[maxn];

int findSet(int now){
    return Node[now].parent == now ? now : findSet(Node[now].parent);
}

int Merge(int x, int y){
    int fx = findSet(x), fy = findSet(y);
    if(fx != fy){
        Node[fy].parent = fx;
        Node[fx].scale += Node[fy].scale;
    }
    return Node[fx].scale;
}

int main()
{
#ifdef TEST
freopen("test.txt", "r", stdin);
#endif // TEST

	while(cin >> n >> m){
        for(int i = 0; i <= n; i++){
            Node[i].scale = 1;
            Node[i].parent = i;
        }
        maxSum = 0;
        for(int i = 0; i < m; i++){
            scanf("%d%d", &a, &b);
            maxSum = max(maxSum, Merge(a, b));
        }
        printf("%d\n", maxSum);
	}

	return 0;
}
