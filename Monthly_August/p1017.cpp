//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <cmath>
//#include <cstring>
//using namespace std;
//
//char checkTable[50] = {"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
//char res[1000];
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    int n, base;
//    while(cin >> n >> base){
//        memset(res, 0, sizeof(res));
//        int pos = 0, m = n;
//        while(n){
//            int temp = n % base;
//            n /= base;
//            if(temp < 0){
//                temp -= base;
//                n++;
//            }
//            res[pos++] = checkTable[temp];
//        }
//        printf("%d=", m);
//        for(int i = pos-1; i >= 0; i--)
//            printf("%c", res[i]);
//        printf("(base%d)\n", base);
//    }
//
//    return 0;
//}
