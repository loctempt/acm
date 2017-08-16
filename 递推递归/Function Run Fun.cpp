#include <iostream>
#include <cstdio>
using namespace std;
int main(){

    int ans[21][21][21];
    for(int a = 0; a < 21; a++){
        for(int b = 0; b < 21; b++){
            for(int c = 0; c < 21; c++){
                if(a == 0 || b == 0 || c == 0){
                    ans[a][b][c] = 1;
                }
                else if(a < b && b < c){
                    ans[a][b][c] = ans[a][b][c-1] + ans[a][b-1][c-1] - ans[a][b-1][c];//, b, c-1) + w(a, b-1, c-1) - w(a, b-1, c)
                }
                else{
                    ans[a][b][c] = ans[a-1][b][c] + ans[a-1][b-1][c] + ans[a-1][b][c-1] - ans[a-1][b-1][c-1];//w(a-1, b, c) + w(a-1, b-1, c) + w(a-1, b, c-1) - w(a-1, b-1, c-1)
                }
            }
        }
    }
    int a, b, c;
    while(cin >> a >> b >> c){
        if(a == -1 && b == -1 && c == -1)
            break;
        if(a <= 0 || b <= 0 || c <= 0){
            printf("w(%d, %d, %d) = %d\n", a, b, c, 1);
        }
        else if(a > 20 || b > 20 || c > 20){
            printf("w(%d, %d, %d) = %d\n", a, b, c, ans[20][20][20]);
        }
        else{
            printf("w(%d, %d, %d) = %d\n", a, b, c, ans[a][b][c]);
        }
    }

    return 0;
}
