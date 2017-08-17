#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
#include <queue>
using namespace std;
const int maxn = 1004;
const double PCS = 1e-6;                        // 浮点误差不宜设置地太小，否则会错

int m, n, row, col;
bool flag = false, manySolutionFlag = false;
double mat[maxn][maxn], b[maxn], value[maxn];

void dbgDisplay() {
    for(int i = 1; i <= row; i++) {
        for(int j = 1; j <= col; j++)
            printf("%8.4f ", mat[i][j]);
        printf("\n");
    }
    putchar('\n');
}

int gauss() {
    for(int i = 1; i < col; i++) {
        int r = i;
        for(int j = i + 1; j <= row; j++) {
            if(fabs(mat[j][i]) > fabs(mat[r][i]))
                r = j;
        }
        if(r == i && fabs(mat[i][i]) < PCS)
            return -1;                          // multiple solutions.
        swap(mat[i], mat[r]);
        for(int j = i + 1; j <= row; j++) {     // 变换为上三角阵
            double c = mat[j][i] / mat[i][i];
            for(int k = i; k <= col; k++) {
                mat[j][k] -= mat[i][k] * c;
            }
        }
//        dbgDisplay();
    }
    for(int j = 1; j <= row; j++){
        int pos = 1;
        while(pos <= n && fabs(mat[j][pos]) < PCS) pos++;
        if(pos == col && fabs(mat[j][col]) > PCS)
            return 0;                           // no solution.
    }
    for(int i = col - 1; i >= 1; i--) {
        for(int j = i + 1; j <= n; j++) {
            mat[i][col] -= mat[i][j] * value[j];
            mat[i][j] = 0;
        }
        value[i] = mat[i][col] / mat[i][i];
    }
    return 1;         // normal status.
}

int main() {
#ifdef TEST
    freopen("test.txt", "r", stdin);
#endif // TEST

    while(cin >> n >> m) {
        row = m; col = n + 1;
        for(int i = 1; i <= m; i++) {
            for(int j = 1; j <= n + 1; j++) {
                scanf("%lf", &mat[i][j]);
            }
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
