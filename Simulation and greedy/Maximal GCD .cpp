#include <iostream>
#include <cstdio>
#include <algorithm>
#include <set>
#include <vector>
//#define TEST
using namespace std;

int main(){
#ifdef TEST
freopen("test.txt", "r", stdin);
#endif // TEST

    unsigned long long n, k, Mgcd, getGcd, H;
    while(cin >> n >> k){
        set<unsigned long long> mySet;
//        Mgcd = 2*n/(k+1)/k;
        H = k * (k + 1) / 2;
        if(n < H || k > 1e6){
            cout << -1 << endl;
            continue;
        }
        for(unsigned long long i = 1; i * i <= n; i++){
            if(n%i == 0){
                mySet.insert(i);
                mySet.insert(n/i);
            }
        }
        getGcd = n/(*mySet.lower_bound(H));
        unsigned long long temp = 0;
        for(unsigned long long i = 1; i < k; i++){
            cout << i*getGcd << " ";
            temp += i*getGcd;
        }
        cout << n - temp << endl;
    }

    return 0;
}
