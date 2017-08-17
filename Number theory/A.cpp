#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
#include <queue>
using namespace std;
const int maxn = 504;

int m, n;
double mat[maxn<<1][maxn];

double gauss(){

}

int main(){
#ifdef TEST
freopen("test.txt", "r", stdin);
#endif // TEST

    while(cin >> n >> m){
        for(int i = 1; i <= m; i++){
            for(int j = 1; j <= n+1; j++){
                scanf("%lf", &mat[i][j]);
            }
        }

    }

    return 0;
}
