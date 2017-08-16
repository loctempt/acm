#include <iostream>
using namespace std;

bool noDuplication(int x){
    int a, b, c;
    a = x/100;
    b = (x/10)%10;
    c = x%10;
    if(a != b && b != c && a != c && a > 0 && b > 0 && c > 0)
        return true;
    return false;
}

bool check(int x, int y){
    int a[3], b[3];
    a[0] = x/100;
    a[1] = (x/10)%10;
    a[2] = x%10;
    b[0] = y/100;
    b[1] = (y/10)%10;
    b[2] = y%10;
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            if(b[i] == a[j])
                return false;
    return true;
}

int main(){

    for(int i = 100; i < 1000; i++){
        if(i * 2 < 1000 && i * 3 < 1000)
            if(noDuplication(i) && noDuplication(i*2) && noDuplication(i*3))
                if(check(i,i*2) && check(i,i*3) && check(i*2, i*3))
                    cout << i << " " << i*2 << " " << i*3 << endl;
    }

    return 0;
}
