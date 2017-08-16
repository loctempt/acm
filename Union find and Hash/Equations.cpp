//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//#include <queue>
//using namespace std;
//const int maxn = 1e6;
//
//int tar[maxn*2];
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    int a, b, c, d;
//    while(cin >> a >> b >> c >> d){
//        if(a>0 && b>0 && c>0 && d>0){
//            cout << 0 << endl;
//            continue;
//        }
//        memset(tar, 0, sizeof(tar));
//        int res = 0;
//        for(int i = 1; i <= 100; i++)
//            for(int j = 1; j <= 100; j++)
//                tar[i*i*a + j*j*b + maxn]++;
//        for(int i = 1; i <= 100; i++)
//            for(int j = 1; j <= 100; j++)
//                res += tar[-i*i*c - j*j*d + maxn];
//        cout << res * 16 << endl;
//    }
//
//    return 0;
//}
