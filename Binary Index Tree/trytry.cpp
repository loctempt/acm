//#include <iostream>
//using namespace std;
//
//int n;
//int C[20], A[]{0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17};
//
//void add(int x, int d){
//    while(x <= 15){
//        C[x] += d; x += x&-x;
//    }
//}
//
//int sum(int x){
//    int ret = 0;
//    while(x > 0){
//        ret += C[x]; x -= x&-x;
//    }
//    return ret;
//}
//
//int main(){
//
//    n = 8;
//    for(int i = 1; i <= 15; i++)
//        add(i,A[i]);
//    for(int i = 1; i <= 15; i++)
//        cout << sum(i) << endl;
//
//    return 0;
//}
