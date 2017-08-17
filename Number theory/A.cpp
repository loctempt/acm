#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
#include <queue>
using namespace std;
const int maxn = 504;

int m, n;
bool flag = false, manySolutionFlag = false;
double mat[maxn<<1][maxn], b[maxn], value[maxn];

void dbgDisplay(){
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n+1; j++)
            printf("%8.4f ", mat[i][j]);
        putchar('\n');
    }
    putchar('\n');
}

int gauss(){
    for(int i = 1; i <= n; i++){
        bool flag = false;
        for(int j = i; j <= m; j++){
            if(mat[j][i] != 0){
                swap(mat[j], mat[i]);
                flag = true;
                break;
            }
        }
        if(!flag){
            manySolutionFlag = true;
            continue;
        }
        for(int j = i+1; j <= m; j++){
            double c = mat[j][i]/mat[i][i];
            for(int k = 1; k <= n; k++)
                mat[j][k] -= mat[i][k] * c;
            b[j] -= b[i]*c;
        }
//        dbgDisplay();
    }
//    cout << "上三角阵已建立\n即将建立下三角阵\n" << endl;
    for(int i = 1; i <= m; i++){
        int pos = 1;
        while(fabs(mat[i][pos]) < 1e-8 && pos <= n) pos++;
        if(pos == n+1 && fabs(b[i]) > 1e-8)
            return 0; // no solution.
    }
    if(manySolutionFlag)
        return -1;    // multiple solutions.
//    for(int i = n; i >= 1; i--){
//        for(int j = i - 1; j >= 1; j--){
//            double c = mat[j][i] / mat[i][i];
//            for(int k = n+1; k >= 1; k--)
//                mat[j][k] = mat[j][k] - mat[i][k] * c;
//        }
    for(int i = n; i >= 1; i--){
        for(int j = i + 1; j <= n; j++){
            b[i] -= mat[i][j] * value[j];
            mat[i][j] = 0;
        }
        value[i] = b[i] / mat[i][i];
    }
//        dbgDisplay();

    return 1;         // normal status.
}

void init(){
    flag = manySolutionFlag = false;
}

int main(){
#ifdef TEST
freopen("test.txt", "r", stdin);
#endif // TEST

    while(cin >> n >> m){
        init();
        for(int i = 1; i <= m; i++){
            for(int j = 1; j <= n; j++){
                scanf("%lf", &mat[i][j]);
            }
            scanf("%lf", &b[i]);
        }
        int ans = gauss();
        if(ans == 0)
            cout << "No solutions" << endl;
        else if(ans == -1)
            cout << "Many solutions" << endl;
        else
            for(int i = 1; i <= n; i++)
                cout << (long long)round(value[i]) << endl;
    }

    return 0;
}
