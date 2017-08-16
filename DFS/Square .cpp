#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int m, isAccessed[30], stick[30], edge;
bool ok;
bool cmp(int a, int b){
    return a > b;
}
void dfs(int len, int other, int cnt){

    if(len == edge){
        len = 0;
        other = 0;
        cnt++;
    }
    if(cnt == 4){
        ok = true;
        return;
    }
    for(int i = other; i < m; i++){
        if(i && stick[i] == stick[i - 1] && !isAccessed[i - 1])
            continue;
        if(!isAccessed[i] && len + stick[i] <= edge){//满足下一个stick未被使用，且加上后长度不大于edge，可以递归
            isAccessed[i] = true;
            dfs(len + stick[i], i + 1, cnt);
            isAccessed[i] = false;
        }
    }

}
int main(){

    int T;
    cin >> T;
    while(T--){
        cin >> m;
        int sum = 0;
        ok = false;
        memset(isAccessed, false, sizeof(isAccessed));
        for(int i = 0; i < m; i++){
            cin >> stick[i];
            sum += stick[i];
        }
        if(sum % 4 != 0){
            cout << "no" << endl;
            continue;
        }
        edge = sum / 4;
        sort(stick, stick + m, cmp);
        dfs(0, 0, 0);
        if(ok)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }

    return 0;
}
