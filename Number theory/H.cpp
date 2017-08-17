#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
#include <queue>
using namespace std;
const int maxn = 1e6 + 19;

int n, primeCount;
bool isPrime[maxn];
int primeList[maxn];

void init() {
    memset(isPrime, true, sizeof(isPrime));
    memset(primeList, 0, sizeof(primeList));
    primeCount = 0;
}

void eular() {
    init();
    for(int i = 2; i < maxn; i++) {
        if(isPrime[i]) {
            primeCount++;
            primeList[primeCount] = i;
        }
        for(int j = 1; j <= primeCount; j++) {
            if(i * primeList[j] > maxn)
                break;
            isPrime[i * primeList[j]] = false;
            if(i % primeList[j] == 0)
                break;
        }
    }
}

int main() {
#ifdef TEST
    freopen("test.txt", "r", stdin);
#endif // TEST

    eular();
    while(cin >> n) {
        int idx = lower_bound(primeList+1, primeList+primeCount+1, n) - primeList;// �ҵ���һ�����ڵ���n��������
        while(!isPrime[idx] && idx <= primeCount) idx++;                          // ����������������е��������ͽ�
                                                                                  // �±�������ֱ���ҵ������е�������
        cout << primeList[idx] << endl;
    }

    return 0;
}
