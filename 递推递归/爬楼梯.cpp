#include <iostream>
using namespace std;
int main(){

    int f[50];
    f[1] = 1, f[2] = 2;
    for(int i = 3; i<50; i++){
        f[i] = f[i - 1] + f[i - 2];
    }
    int n, t;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> t;
        cout << f[t] << endl;
    }

    return 0;
}
