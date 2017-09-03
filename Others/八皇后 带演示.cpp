//#include <iostream>
//#include <cstdio>
//using namespace std;
//int tot = 0, n, C[100];//C[i]表示第i行的皇后所在列的位置。
//
//struct node {
//    int result[8];
//} sample[100];
//
//void search(int cur) {
//    if(cur == n) {
//        for(int i = 0; i < n; i++) {
//            sample[tot].result[i] = C[i];
//        }
//        tot++;
//        return;
//    }
//    else {
//        for(int i = 0; i < n; i++) {
//            bool ok = 1;
//            C[cur] = i;
//            for(int j = 0; j < cur; j++) {
//                if(C[cur] == C[j] || j - C[j] == cur - C[cur] || j + C[j] == cur + C[cur]) {
//                    ok = 0;
//                    break;
//                }
//            }
//            if(ok)
//                search(cur + 1);
//        }
//    }
//}
//int main() {
//
//    n = 8;
//    search(0);
//    printf("solutions in total: %d\n", tot);
//    for(int i = 0; i < tot; i++) {
//        printf("situation %d:\n", i + 1);
//        for(int j = 0; j < n; j++) {
//            getchar();
//            for(int k = 0; k < n; k++) {
//                if(k == sample[i].result[j])
//                    cout << "*   ";
//                else
//                    cout << "_   ";
//            }
//            cout << endl;
//        }
//        cout << endl;
//    }
//
//    return 0;
//}
