#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int get_startpoint(string const &tar, int x){
    while(x>=1){
        if(tar[x-1]!='S')
            x--;
        else if(tar[x-1] == 'S' && x>=2 && tar[x-2] == 'E')
            x-=2;
        else if(tar[x-1] == 'S'){
            x--;
            break;
        }
    }
    return x;
}

int main(){
#ifdef TEST
freopen("test.txt", "r", stdin);
#endif // TEST

    string sample, coord;
    while(cin >> sample){
        int sampleLen = sample.length();
        coord = string(sampleLen,' ');
        int cnt = 0;
        for(int i = 0; i < sampleLen; i++){
            if(sample[i] == '('){
//                if(cnt == 0)
//                    coord[i] = 'S';
                cnt++;
            }
            if(sample[i] == ')' && cnt > 0){
                cnt--;
                coord[i] = 'E';
            }
        }
        cnt = 0;
        for(int i = sampleLen - 1; i >= 0; i--){
            if(sample[i] == ')' && coord[i] == 'E'){
                if(cnt > 0)
                    coord[i] = ' ';
                cnt++;
            }
            if(sample[i] == '(' && cnt > 0){
                cnt--;
                if(cnt == 0)
                    coord[i] = 'S';
            }
        }
#ifdef TEST
cout << sample << endl << coord << endl;
#endif // TEST
        int maxLen = 0, maxNum = 1;
        for(int i = sampleLen-1; i >= 0;){
            int j = i;
            while(j>=0 && coord[j]!='E') j--;
            int k = get_startpoint(coord, j);
            if(k >= 0){
                int tempLen = j - k + 1;
                if(tempLen > maxLen){
                    maxLen = tempLen;
                    maxNum = 1;
                }
                else if(tempLen == maxLen)
                    maxNum++;
            }
            i = k - 1;
        }
        cout << maxLen << " " << maxNum << endl;
    }

    return 0;
}
