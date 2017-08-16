#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
#include <queue>
typedef long long ll;
using namespace std;

ll n, k;
ll a[20], b[20];

int main(){
#ifdef TEST
freopen("test.txt", "r", stdin);
#endif // TEST

    a[1] = 1;
    for(int i = 2; i < 20; i++)
        a[i] = a[i-1] * 10;
    while(cin >> n >> k){
        if(n == k && n == 0)
            break;
        int ind = 1, another = 1;
        b[1] = k;
        while(a[ind] < k) ind++;
        for(; b[another] <= n && b[another] > 0; ind++){
            b[++another] = a[ind] % k ? a[ind] + k - a[ind] % k : a[ind];
        }
        int pos = 1;
        ll kk = b[pos];
        for(int i = 2; i < another; i++){
            kk *= 10;
            if(kk > b[i]){
                kk = b[i];
                pos = i;
            }
        }
        cout << b[pos] << endl;
    }

    return 0;
}
