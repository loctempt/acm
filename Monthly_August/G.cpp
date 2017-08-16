//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//#include <queue>
//using namespace std;
//const int maxn = 100004;
//
//int rr[maxn];
//
//void Qsort(int *a, int *b){
//    if(a >= b)
//        return;
//    int KEY = *a;
//    int len = b - a, temp;
//    int left = 0, right = len - 1, mid = 0;
//    while(left < right){
//        while(left < right && a[right] >= KEY) right--;
//        a[left] = a[right];
//        while(left < right && a[left] <= KEY) left++;
//        a[right] = a[left];
//    }
//    a[left] = KEY;
//    Qsort(a, a+left);
//    Qsort(a+left+1, b);
//}
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    int n;
//    while(cin >> n){
//        for(int i = 0; i < n; i++)
//            scanf("%d", &rr[i]);
//        Qsort(rr, rr+n);
//        for(int i = 0; i < n; i++)
//            printf("%d%c",rr[i], " \n"[i==n-1]);
//    }
//
//    return 0;
//}
