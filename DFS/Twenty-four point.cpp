#include <iostream>
using namespace std;
int sample[5];
bool f(int i, double res){
    if(i == 3 && res == 24)
        return true;
    if(res > 24)
        return false;
    if(f(i + 1, res + sample[i + 1]) || f(i + 1, res - sample[i + 1]) || f(i + 1, res * sample[i + 1]) || f(i + 1, res / sample[i + 1]))
        return true;
    else
        return false;
}
int main(){
    while(cin >> sample[1] >> sample[2] >> sample[3] >> sample[4]){
        if(f(1, sample[1]))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
