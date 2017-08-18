#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
#include <queue>
using namespace std;

int m, n;
int ans;
vector<long long> a;

void dfs(int cur, long long lcm, int id) {
    lcm = a[cur] * lcm / __gcd(a[cur], lcm);
    if(id & 1)
        ans += (n - 1) / lcm;
    else
        ans -= (n - 1) / lcm;
    for(int i = cur + 1; i < a.size(); i++)
        dfs(i, lcm, id+1);
}

int main() {
#ifdef TEST
    freopen("test.txt", "r", stdin);
#endif // TEST

    while(cin >> n >> m) {
        a.clear();
        int temp;
        for(int i = 0; i < m; i++) {
            cin >> temp;
            if(temp)
                a.push_back(temp);
        }
        ans = 0;
        for(int i = 0; i < a.size(); i++) {
            dfs(i, a[i], 1);
        }
        cout << ans << endl;
    }

    return 0;
}
