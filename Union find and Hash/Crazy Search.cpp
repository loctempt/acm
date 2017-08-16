#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
#include <queue>
using namespace std;
const int maxn = 16e6+5;

bool Hash[maxn/2];
int c[256];
char str[maxn];

int main(){
#ifdef TEST
freopen("test.txt", "r", stdin);
#endif // TEST

    int n, nc;
    while(scanf("%d%d", &n, &nc) != EOF){
        memset(Hash, 0, sizeof(Hash));
        memset(c, 0, sizeof(c));
        scanf("%s", str);
        int i= 0, uniq = 1, sum, cnt = 0, len;
        while(str[i]){
            if(c[str[i]] == 0)
                c[str[i]] = uniq++;
            if(uniq > nc)
                break;
            i++;
        }
        len = strlen(str);
        for(int s = 0; s < len - n + 1; s++){
            sum = 0;
            for(int j = s; j < s + n; j++){
                sum = sum * nc + c[str[j]];
            }
            sum %= maxn;
            if(Hash[sum] == 0){
                Hash[sum] = 1;
                cnt++;
            }
        }
        printf("%d\n", cnt);
    }

    return 0;
}
