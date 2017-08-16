#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
int main(){

    int n;
    while(cin >> n){
        vector<int> va, vb, vc, vd, vSum1, vSum2;
        map<int,int> myMap;
        int ta, tc, tb, td;
        for(int i = 0; i < n; i++){
            scanf("%d%d%d%d", &ta, &tb, &tc, &td);
            va.push_back(ta), vb.push_back(tb), vc.push_back(tc), vd.push_back(td);
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                vSum2.push_back(vc[j] + vd[i]);
            }
        }
        sort(vSum2.begin(), vSum2.end());
        int quantity = 0;
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++){
                quantity += upper_bound(vSum2.begin(), vSum2.end(), -va[i] - vb[j]) - lower_bound(vSum2.begin(), vSum2.end(), -va[i] - vb[j]);
            }
        cout << quantity << endl;
    }

    return 0;
}
