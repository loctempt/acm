//#include <iostream>
//#include <cstdio>
//using namespace std;
//int tot = 0, n, C[100];//C[i]表示第i行的皇后所在列的位置。
//void search(int cur){
//    if(cur == n){
//        tot++;
//        return;
//    }
//    else{
//        for(int i = 0; i < n; i++){
//            bool ok = 1;
//            C[cur] = i;
//            for(int j = 0; j < cur; j++){
//                if(C[cur] == C[j] || j - C[j] == cur - C[cur] || j + C[j] == cur + C[cur]){
//                    ok = 0;
//                    break;
//                }
//            }
//            if(ok)
//                search(cur + 1);
//        }
//    }
//}
//int main(){
//
////    while(cin >> n){
////        if(n == 0)
////            break;
////        search(0);
////        cout << tot << endl;
////        tot = 0;
//
//    for(n = 1; n < 15; n++){
//        search(0);
//        printf("%d, ", tot);
//        tot = 0;
//    }
//
//    return 0;
//}
#include <iostream>
using namespace std;
int main(){
    int ans[] = {0, 1, 0, 0, 2, 10, 4, 40, 92, 352, 724, 2680, 14200, 73712, 365596};
    int n;
    while(cin >> n){
        if(n == 0)
            break;
        cout << ans[n] << endl;
    }
    return 0;
}
