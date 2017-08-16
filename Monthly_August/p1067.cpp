//#include <iostream>
//#include <cstdio>
//using namespace std;
//
//int main() {
//#ifdef TEST
//    freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    int n;
//    while(cin >> n) {
//        int coefficient, times = n;
//        for(int i = 1; i <= n + 1; i++) {
//            cin >> coefficient;
//            if(i == n + 1) {
//                if(coefficient > 0)
//                    printf("+%d\n", coefficient);
//                else if(coefficient < 0)
//                    printf("%d\n", coefficient);
//                continue;
//            }
//            if(times == 1){
//                if(coefficient != 0) {
//                    if(coefficient != 1 && coefficient != -1){
//                        if(coefficient > 0)
//                            printf("+%dx", coefficient);
//                        else
//                            printf("%dx", coefficient);
//                    }
//                    else {
//                        if(coefficient == 1)
//                            printf("+x");
//                        else
//                            printf("-x");
//                    }
//                }
//                continue;
//            }
//            if(i == 1) {
//                if(coefficient != 0) {
//                    if(coefficient != 1 && coefficient != -1)
//                        printf("%dx^%d", coefficient, times);
//                    else {
//                        if(coefficient == 1)
//                            printf("x^%d", times);
//                        else
//                            printf("-x^%d", times);
//                    }
//                }
//            }
//            else {
//                if(coefficient != 0) {
//                    if(coefficient != 1 && coefficient != -1){
//                        if(coefficient > 0)
//                            printf("+%dx^%d", coefficient, times);
//                        else
//                            printf("%dx^%d", coefficient, times);
//                    }
//                    else {
//                        if(coefficient == 1)
//                            printf("+x^%d", times);
//                        else
//                            printf("-x^%d", times);
//                    }
//                }
//            }
//            times--;
//        }
//    }
//
//    return 0;
//}
