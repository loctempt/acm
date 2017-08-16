#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

int common[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

int main(){
#ifdef TEST
freopen("test.txt", "r", stdin);
#endif // TEST

    int n, m;
    while(cin >> n >> m){
        if(n > common[m] || m > 12){
            cout << "Impossible" << endl;
            continue;
        }
        int days = 0;
        for(int i = 1; i < m; i++)
            days += common[i];
        days += n;
        if(n % 7 == 0)
            cout << 7 << endl;
        else
            cout << days % 7 << endl;

    }

    return 0;
}
