#include <iostream>
#include <cstdio>
#include <math.h>
using namespace std;
unsigned long long step = 0;

int main(){

    int n;
    while(scanf("%d", &n) != EOF){
        unsigned long long step = 1;
        for(int i = 0; i < n; i++){
            step *= 3;
        }
        step -= 1;
       cout << step << endl;
    }

    return 0;
}
//50031545098999706
//#include<iostream>
//#include<cstdio>
//#include<cstring>
//#include<cmath>
//
//using namespace std;
//
//int main(){
//
//    //freopen("input.txt","r",stdin);
//
//    int n;
//    while(~scanf("%d",&n)){
//        long long ans=1;
//        for(int i=1;i<=n;i++)
//            ans*=3;
//        ans-=1;
//        cout<<ans<<endl;
//    }
//    return 0;
//}
