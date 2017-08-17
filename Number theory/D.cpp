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

void eular(){ //欧拉筛子
    init();
    for(int i = 2; i <= range; i++){
        if(isPrime[i]){
            primeCount++;
            primeList[primeCount] = i; //素数表是逐渐加长的
        }
        for(int j = 1; j <= primeCount; j++){
            if(i * primeList[j] > range)
                break;
            isPrime[i*primeList[j]] = false; //将每个数的素数倍标记为合数；这种枚举值乘
	    				     //上质数的方法确保质数表只增大，之前确定的
					     //质数不再重复判断并加以重复标记。
            if(i % primeList[j] == 0) //若当前枚举值已经为合数即中断
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

