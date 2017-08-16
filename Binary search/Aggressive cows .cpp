#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int main(){

    unsigned int n, c;
    while(cin >> n >> c){
        vector<unsigned int> myVec;
        unsigned int temp, mid, left = 1, right = 1e9, cnt = 0, last, index = 0, t = 1;
        for(unsigned int i = 0; i < n; i++){
            scanf("%d", &temp);
            myVec.push_back(temp);
        }
        sort(myVec.begin(), myVec.end());
        while(left < right && t++ < 33){
//            cout <<"left: " << left <<"    right : "<<right<<endl;
            mid = (left + right) / 2;
            cnt = 1;
            last = myVec[0], index = 1;
            for(unsigned int i = 1; i <= n && index < myVec.size(); i++){
                while(index < myVec.size()){
                    if(myVec[index++] - last >= mid){
                        last = myVec[index - 1];
                        break;
                    }
                }
                cnt++;
            }
//            cout << cnt << endl;
            if(cnt > c){//left»°–°¡À
                left = mid;
            }
            else{
                right = mid - 1;
            }
        }
        cout << left << endl;
    }

    return 0;
}
