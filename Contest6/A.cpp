#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
#include <queue>
using namespace std;
const int maxn = 2e5 + 19;

int T, n, m;
bool vis[maxn];
struct node {
    int x, y;
} sample[maxn];

int main() {
#ifdef TEST
    freopen("test.txt", "r", stdin);
#endif // TEST

    cin >> T;
    while(T--) {
        bool ok = false;
        memset(vis, 0, sizeof(vis));
        cin >> n >> m;
        for(int i = 0; i < n; i++)
            cin >> sample[i].x >> sample[i].y;
        for(int i = 0; i < n; i++) {
            for(int j = i+1; j < n; j++) {
                int d = abs(sample[i].x - sample[j].x) + abs(sample[i].y - sample[j].y);
                if(!vis[d])
                    vis[d] = true;
                else {
                    ok = true;
                    break;
                }
            }
            if(ok)
                break;
        }
        if(ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
