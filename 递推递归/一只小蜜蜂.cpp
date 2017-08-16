#include <iostream>
#include <cstdio>
using namespace std;
//int step = 0;
//void findPath(int s, int e){
//    if(s == e){
//        step++;
////        cout << endl << step << endl<<endl;
//        return;
//    }
//    if(s + 1 <= e){
////        cout << s + 1 << " ";
//        findPath(s + 1, e);
//    }
//    if(s + 2 <= e){
////        cout << s + 2 << " ";
//        findPath(s + 2, e);
//    }
//    return;
//}
int main(){
    long long f[51];
    f[1] = 1, f[2] = 2;
    for(int i = 3; i < 51; i++){
        f[i] = f[i - 1] + f[i - 2];
    }
    int n;
    while(cin >> n){
        for(int i = 0; i < n; i++){
//            step = 0;
            int s, e;
            scanf("%d%d", &s, &e);
//            findPath(s,e);
            cout << f[e - s] << endl;
        }
    }
    return 0;
}
