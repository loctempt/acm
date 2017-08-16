#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;
const int maxn = 1e5+10;

int n, m;
int city[maxn], tower[maxn];

int binaryFind(int i){
    int left = 0, right = m - 1, mid;
    while(left <= right){
        mid = (left + right) >> 1;
        if(right - left == 1)
            return min(abs(tower[right] - city[i]), abs(tower[left] - city[i]));
        if(city[i] <= tower[mid]){
            right = mid;
        }
        else{
            left = mid;
        }
    }
}

int main(){
#ifdef TEST
freopen("test.txt", "r", stdin);
#endif // TEST

    while(cin >> n >> m){
        for(int i = 0; i < n; i++)
            cin >> city[i];
        for(int i = 0; i < m; i++)
            cin >> tower[i];
        if(m == 1){
            cout << max(abs(city[0] - tower[0]), abs(city[n - 1] - tower[0])) << endl;
            continue;
        }
        int res = 0;
        for(int i = 0; i < n; i++){
            res = max(res, binaryFind(i));
        }
        cout << res << endl;
    }

    return 0;
}
