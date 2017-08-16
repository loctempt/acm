#include <iostream>
#include <cstdio>
using namespace std;
long long c(int k){
    long long ans = 1;
    for(int i = 1; i <= k; i++)
        ans *= 3;
    return ans;
}
long long g(int k, int i){
    if(k==0 && i == 1)
        return 1;
    else if(k == 0)
        return 0;
    if(i == ((1<<k) + 1)){
//        cout << "haha" << endl;
        return 0;
    }
    if(i > (1<<(k - 1))){
        return g(k - 1, i - (1<<(k - 1)));
    }
    else{
        return g(k - 1, i) * 2 + c(k - 1);
    }
}
int main(){

    int t;
    while(cin >> t){
        for(int i = 1; i <= t; i++){
            int k, a, b;
            scanf("%d%d%d", &k, &a, &b);
            printf("Case %d: %lld\n", i, g(k,a) - g(k,b+1));
        }
    }

    return 0;
}
