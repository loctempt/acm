#include <algorithm>
#include <iostream>
#include <cstdio>
#include <set>
//#define TEST
using namespace std;
struct node{
    int x;
    int y;
};
struct cmp{
    bool operator()(const node &a, const node &b){
        return a.x < b.x;
    }
};
int main(){
#ifdef TEST
freopen("test.txt", "r", stdin);
#endif // TEST

    int n;
    while(cin >> n){
        set<node, cmp> mySet;
        int k, xx, yy; double x, y;
        for(int i = 0; i < n; i++){
            scanf("%d %lf %lf", &k, &x, &y);
            node potion;
            xx = potion.x = x * 100, yy = potion.y = y * 100;

            if(k == 0){//²éÑ¯
                if(mySet.empty()){
                    printf("No\n");
                    continue;
                }

                set<node, cmp>::iterator be = mySet.begin();
                set<node, cmp>::iterator en = --mySet.end();

                if(be->x <= xx && en->x >= xx){
                    printf("Yes\n");
                }
                else{
                    printf("No\n");
                }
            }
            if(k == 1){//²åÈë
                mySet.insert(potion);
            }
            if(k == -1){//É¾³ý
                mySet.erase(potion);
            }
        }
    }

    return 0;
}
