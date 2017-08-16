#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;
const int maxn = 1e6+10;

int sample[maxn];
bool check[maxn];

int main(){
#ifdef TEST
freopen("test.txt", "r", stdin);
#endif // TEST

    int step, mod;
    while(cin >> step >> mod){
        memset(check, false, sizeof(check));
        int last = 0;
        check[0] = true;
        int i;
        for(i = 1; i < mod; i++){
            last = (last + step) % mod;
            if(check[last])
                break;
            check[last] = true;
        }
        if(i == mod)
            printf("%10d%10d    Good Choice\n\n", step, mod);
        else
            printf("%10d%10d    Bad Choice\n\n", step, mod);
    }

    return 0;
}
/*
         3         5    Good Choice

        15        20    Bad Choice

     63923     99999    Good Choice

         3         5    Good Choice

        15        20    Bad Choice

     63923     99999    Good Choice


*/
