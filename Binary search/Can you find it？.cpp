#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;
int main(){

    int l, n, m, t = 1;
    while(cin >> l >> n >> m){
        int temp;
        vector<int> vecA, vecB, vecC, vecS, vecG;
        for(int i = 0; i < l; i++){
            scanf("%d", &temp);
            vecA.push_back(temp);
        }
        for(int i = 0; i < n; i++){
            scanf("%d", &temp);
            for(int j = 0; j < l; j++){
                vecB.push_back(temp + vecA[j]);
            }
        }
        sort(vecB.begin(), vecB.end());
        for(int i = 0; i < vecB.size(); i++){
            if(!binary_search(vecG.begin(), vecG.end(), vecB[i]))
                vecG.push_back(vecB[i]);
        }
        for(int i = 0; i < m; i++){
            scanf("%d", &temp);
            vecC.push_back(temp);
        }
        int s;
        cin >> s;
        cout << "Case " << t++ << ":" << endl;
        for(int i = 0 ;i < s; i++){
            scanf("%d", &temp);
            int j;
            for(j = 0; j < vecC.size(); j++){
                if(binary_search(vecG.begin(), vecG.end(), temp - vecC[j])){
                    cout << "YES" << endl;
                    break;
                }
            }
            if(j == vecC.size())
                cout << "NO" << endl;
        }
    }

    return 0;
}
