#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
#ifdef TEST
freopen("test.txt", "r", stdin);
#endif // TEST

    string sample;
    while(cin >> sample){
        int cnt = 0, len = sample.length();
        cnt += (len - 1)*10;
        cnt += sample[0]-'1';
        bool add = true;
        for(int i = 1; i < len; i++){
            if(sample[i] < sample[i-1]){
                add = false;
                break;
            }
            else if(sample[i] > sample[i-1])
                break;
        }
        if(add)
            cnt++;
        cout << cnt << endl;
    }

    return 0;
}
