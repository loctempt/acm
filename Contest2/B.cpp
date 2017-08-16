#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
//#define TEST
using namespace std;

long long Find(long long n){
    long long left = 0, right = (1<<16), mid, ans, sum;
    while(left <= right){
        mid = (left + right) / 2;
        sum = (1+mid)*mid/2;
        if(sum < n){//mid is too small or just it.
            ans = mid;
            left = mid + 1;
        }
        else//mid is too large
            right = mid - 1;
    }
    return ans;
}

int main(){
#ifdef TEST
freopen("test.txt", "r", stdin);
#endif // TEST

    long long k, n, res, i;
    cin >> k;
    while(k--){
        cin >> n;
        i = Find(n);
        res = (n-(1+i)*i/2)%9;
        if(res == 0)
            cout << 9 << endl;
        else
            cout << res << endl;
    }

    return 0;
}
