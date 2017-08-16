//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//#include <queue>
//using namespace std;
//const int maxn = 1e5+10;
//
//int m, n, a, b;
//int arrA[maxn], arrB[maxn];
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    while(cin >> m >> n){
//        cin >> a >> b;
//        for(int i = 0; i < m; i++)
//            scanf("%d", &arrA[i]);
//        for(int i = 0; i < n; i++)
//            scanf("%d", &arrB[i]);
//        int tar = arrA[a-1];
//        int pos = lower_bound(arrB, arrB+n, tar) - arrB;
//        if(arrB[pos] == tar){
//            pos = lower_bound(arrB, arrB+n, tar+1) - arrB;
//        }
//        if(arrB[pos] > tar && n - pos >= b)
//            printf("YES\n");
//        else
//            printf("NO\n");
//    }
//
//    return 0;
//}
