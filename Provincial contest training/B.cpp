//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//#include <queue>
//using namespace std;
//const int maxn = 256;
//
//int pos[maxn];
//char sample[maxn];
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    int cnt = 1;
//    for(int i = 'f'; i >= 'd'; i--)
//        pos[i] = cnt++;
//    for(int i = 'a'; i <= 'c'; i++)
//        pos[i] = cnt++;
//
//    while(~scanf("%s", sample)){
//        unsigned long long row = 0, idx = 0;
//        while(sample[idx] >= '0' && sample[idx] <= '9')
//            row = 10*row + sample[idx++] - '0';
//        unsigned long long waiting = (row / 4)*16, remain = row % 4;
//        if(remain == 0) waiting -= 16;
//        if(remain == 2 || remain == 0)
//            waiting += 7;
//        waiting += pos[sample[idx]];
//        cout << waiting << endl;
//    }
//
//
//    return 0;
//}
