//遍历，找到所处城市后检查深度，若深度顺序符合所给顺序，输出YES
#include <iostream>
#include <vector>
using namespace std;
int cnt, order[106], o;
vector<int> depth;
struct node{
    int ind;
    int left, right, father;
}cities[105];
void dfs(int x){
    int dep = 0, pTemp = x;
    if(cities[x].ind == 0)
        return;
    int k = cnt;
    while(cities[pTemp].ind != order[k]) k++;
    int kInt = k + 1;
    if(k < o/*cities[x].ind == order[k]*/){
        while(cities[pTemp].father != 0){

            for(k = kInt; k < o; k++){
                if(cities[pTemp].father == order[k])
                    break;
            }
            if(k == o){
                depth.push_back(dep);
cout << "   ok: " << cities[pTemp].ind << endl;
            }
            else
cout << "   NOTok: " << cities[pTemp].ind << endl;
            pTemp = cities[pTemp].father;
            dep++;
        }
        cnt++;
    }
    else
cout << "   NOTok: " << cities[pTemp].ind << endl;
    dfs(cities[x].left);
    dfs(cities[x].right);

}
int main(){

    int T, n, now, next;
    cin >> T;
    for(int t = 0; t < T; t++){
        depth.clear();
        for(int i = 0; i < 105; i++){
           cities[i].ind = i;
           cities[i].left = cities[i].right = cities[i].father = 0 ;
        }
        cin >> n;
        for(int i = 0; i < n-1; i++){
            cin >> now >> next;
            cities[next].father = now;
            if(cities[now].left == 0)
                cities[now].left = next;
            else
                cities[now].right = next;
        }
        cin >> o;
        for(int i = 0; i < o; i++)
            cin >> order[i];
        cnt = 0;
//        bool ok = 1;
//        for(int i = 0; i < o; i++){
//            if(depth[i] > order[i]){
//                ok = 0;
//                break;
//            }
//        }
//        if(ok)
        dfs(1);
cout << "depth.size(): " << depth.size() << endl;
        if(depth.size() == o)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
