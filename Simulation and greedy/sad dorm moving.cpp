//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
////#define TEST
//using namespace std;
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    int t;
//    cin >> t;
//    while(t--){
//        int n, l, box = 0, arr[100005];
//        scanf("%d%d", &n, &l);
//        for(int i = 0; i < n; i++)
//            scanf("%d", &arr[i]);
//        sort(arr, arr+n);
//
//        int left = 0, right = n - 1;
//        while(arr[right] == l){
//            box++;
//            right--;
//        }
//        while(left < right){
//            if(arr[left]+arr[right] <= l){
//                box++;
//                right--;
//                left++;
//            }
//            else{
//                box++;
//                right--;
//            }
//        }
//        if(left == right)
//            box++;
//        printf("%d\n\n", box);
//    }
//
//    return 0;
//}
