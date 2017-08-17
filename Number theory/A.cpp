#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
#include <queue>
using namespace std;
const int maxn = 504;
const double PCS = 1e-8;

int m, n;
bool flag = false, manySolutionFlag = false;
double mat[maxn << 1][maxn], b[maxn], value[maxn];

void dbgDisplay() {
    for(int i = 1; i <= m; i++) {
        for(int j = 1; j <= n; j++)
            printf("%8.4f ", mat[i][j]);
        printf("%8.4f\n", b[i]);
    }
    putchar('\n');
}

int gauss() {
    for(int i = 1; i <= n; i++) {
        int r = i;
        for(int j = i + 1; j <= m; j++) {
            if(fabs(mat[j][i]) > fabs(mat[r][i]))
                r = j;
        }
        if(r == i && fabs(mat[i][i]) < PCS)
            return -1;                          // multiple solutions.
        swap(mat[i], mat[r]);
        for(int j = i + 1; j <= m; j++) {       // 变换为上三角阵
            double c = mat[j][i] / mat[i][i];
            for(int k = 1; k <= m; k++) {
                mat[j][k] -= mat[i][k] * c;
            }
            b[j] -= b[i] * c;
        }
        dbgDisplay();
    }
    for(int j = 1; j <= m; j++){
        int pos = 1;
        while(pos <= n && fabs(mat[j][pos]) < PCS) pos++;
        if(pos == n + 1 && fabs(b[j]) > PCS)
            return 0;                           // no solution.
    }
    for(int i = n; i >= 1; i--) {
        for(int j = i + 1; j <= n; j++) {
            b[i] -= mat[i][j] * value[j];
            mat[i][j] = 0;
        }
        value[i] = b[i] / mat[i][i];
    }
    return 1;         // normal status.
}

int main() {
#ifdef TEST
    freopen("test.txt", "r", stdin);
#endif // TEST

    while(cin >> n >> m) {
        for(int i = 1; i <= m; i++) {
            for(int j = 1; j <= n; j++) {
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
