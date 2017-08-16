#include <iostream>
#include <cstring>
using namespace std;
long long target[100]{0,1};
bool primeNum[10000];
bool available[100];
int n;
bool f(int i){
    if(i>n)
        return true;
    for(int j = 2; j <= n; j++){
        if(available[j] && primeNum[j + target[i - 1]]){//是素数的话
            cout << "位置: " << i << "     j = " << j << "     过程: " << target[i - 1] << endl;
            available[j] = 0;
            target[i] = j;
            if(f(i + 1))
                return true;
            available[j] = 1;
        }
    }
    return false;
}
int main(){

    memset(primeNum, 1, sizeof(primeNum));
    for(int i = 2; i < 10000; i++){
        if(!primeNum[i])
            continue;
        for(int j = 2; j * i < 10000; j++){
            primeNum[j * i] = 0;
        }
    }
    while(cin >> n){
        memset(available, 1, sizeof(available));
        f(2);
        for(int i = 1; i <= n; i++)
            cout << target[i] << " ";
        cout << endl;
    }

    return 0;
}
