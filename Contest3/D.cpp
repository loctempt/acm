#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
#include <queue>
using namespace std;
const int maxn = 1e5+4, INF = 0x7fffffff;

int n;
int energyPerLeg[maxn], quantity[maxn];
struct leg{
    int length, cost;
    bool operator < (const leg &a)const{
        if(length == a.length)
            return cost < a.cost;
        return length < a.length;
    }
} sample[maxn];

int main(){
#ifdef TEST
freopen("test.txt", "r", stdin);
#endif // TEST

    while(cin >> n){
        memset(energyPerLeg, 0, sizeof(energyPerLeg));
        memset(quantity, 0, sizeof(quantity));
        for(int i = 0; i < n; i++){
            cin >> sample[i].length;
            quantity[sample[i].length]++;
        }
        for(int i = 0; i < n; i++){
            cin >> sample[i].cost;
            energyPerLeg[sample[i].length]+=sample[i].cost;
        }
        sort(sample, sample+n);
        int res = INF, lastLength = -1, maxLength = sample[n-1].length;
        for(int i = 0; i < n; i++){//枚举每个可能的最大值
            int currLength = sample[i].length, cnt = 0;
            if(currLength == lastLength)
                continue;
            int currCost = 0;
            for(int j = currLength+1; j <= maxLength; j++){//切断比枚举值更大的桌腿
                currCost += energyPerLeg[j];
                cnt += quantity[j];
            }
            int cursor = 0;
            while((n-cnt)/2 > quantity[i]){
                currCost += sample[cursor].cost;
                cursor++;
                cnt++;
            }
            res = min(res, currCost);
            lastLength = currLength;
        }
        cout << res << endl;
    }

    return 0;
}
