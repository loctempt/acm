#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
#include <queue>
using namespace std;
const int maxn = 1e6+19;

bool isPrime[maxn];
int primeList[maxn];
int primeCount, range;

void init(){
    memset(isPrime, true, sizeof(isPrime));
    memset(primeList, 0, sizeof(primeList));
    primeCount = 0;
}

void eular(){
    init();
    for(int i = 2; i <= range; i++){
        if(isPrime[i]){
            primeCount++;
            primeList[primeCount] = i;
        }
        for(int j = 1; j <= primeCount; j++){
            if(i * primeList[j] > range)
                break;
            isPrime[i*primeList[j]] = false;
            if(i % primeList[j] == 0)
                break;
        }
    }
}

int main(){
#ifdef TEST
freopen("test.txt", "r", stdin);
#endif // TEST

    while(cin >> range){
        eular();
        cout << primeCount << endl;
    }

    return 0;
}
