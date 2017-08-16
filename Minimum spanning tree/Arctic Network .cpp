#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
#include <queue>
#include <cmath>
using namespace std;
const int maxn = 504;

int s, p, cnt;
int f[maxn];

struct node {
    int x, y; double dist;
    bool operator < (const node &temp)const {
        return dist < temp.dist;
    }
} road[maxn * maxn];
struct nodenode {
    int x, y;
} outpost[maxn];

int findset(int now) {
    return f[now] == now ? now : f[now] = findset(f[now]);
}

double kruskal() {
    sort(road, road + cnt);
    double res = 0;
    int sum = 0;
    for(int i = 0; i < cnt; i++) {
        int fx = findset(road[i].x), fy = findset(road[i].y);
        if(fx != fy) {
            f[fx] = fy;
            sum++;
        }
        if(sum == p - s) {
            res = road[i].dist;
            break;
        }
    }
    return res;
}

int main() {
#ifdef TEST
    freopen("test.txt", "r", stdin);
#endif // TEST

    int T;
    cin >> T;
    while(T--) {
        for(int i = 0; i < maxn; i++)
            f[i] = i;
        cin >> s >> p;
        for(int i = 0; i < p; i++)
            cin >> outpost[i].x >> outpost[i].y;
        cnt = 0;
        for(int i = 0; i < p - 1; i++)
            for(int j = i + 1; j < p; j++) {
                road[cnt].x = i;
                road[cnt].y = j;
                int tx = outpost[i].x, ty = outpost[i].y;
                int ttx = outpost[j].x, tty = outpost[j].y;
                road[cnt++].dist = sqrt(pow(tx - ttx, 2) + pow(ty - tty, 2));
            }
        printf("%.2f\n", kruskal());
    }

    return 0;
}
