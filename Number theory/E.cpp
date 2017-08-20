#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
#include <queue>
using namespace std;

int josephus(int n, int k) {
    int ret;
    if(n == 1)
        return 0;
    else if(n < k) {
        ret = 0;
        for(int i = 2; i <= n; i++)
            ret = (ret + k) % i;
        return ret;
    }
    else {
        ret = josephus(n - n / k, k);
        if(ret < n % k)
            ret -= n % k - n;
        else
            ret -= n % k - (ret - n % k) / (k - 1);
    }
    return ret;
}

int main() {
#ifdef TEST
    freopen("test.txt", "r", stdin);
#endif // TEST

    int t, n, k;
    cin >> t;
    while(t--) {
        cin >> n >> k;
        cout << josephus(n, k) << endl;
    }

    return 0;
}
