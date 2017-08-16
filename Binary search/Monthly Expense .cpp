#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
using namespace std;
int main(){

    int n, m;
    while(cin >> n >> m){
        vector<unsigned int> a;
        unsigned int left = 0, right = 0, mid, temp, c = 0, spend = 0;
        for(int i = 0; i < n; i++){
            scanf("%d", &temp);
            a.push_back(temp);
            left = temp > left ? temp : left;
            right += temp;
        }
        while(left < right){
            c = 0;
            spend = 0;
            mid = (left + right) / 2;
            for(int i = 0; i < n; i++){
                if(spend + a[i] > mid){
                    c++;
                    spend = a[i];
                }
                else
                    spend += a[i];
            }
            c++;
            if(c <= m)
                right = mid;
            else
                left = mid + 1;
            cout<<"left: " << left << "   right: " << right << endl;
        }
        cout << right << endl;
    }

    return 0;
}
