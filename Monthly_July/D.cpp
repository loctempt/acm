//#include <algorithm>
//#include <iostream>
//#include <cstdio>
////#define TEST
//using namespace std;
//int tot = 0, sample[30], N;
//void dfs(int now, int len, int cnt = 1){
//    if(cnt == len){
//        tot++;
//        return;
//    }
//    if(len == 1)
//        return;
//    int currVal = sample[now];
//    for(int i = now + 1; i < N; i++){//由排序和此处循环策略决定，只拿比当前值大的元素进行比较。
//        int nextVal = sample[i];
//        if(nextVal - currVal > len){//剪枝：若nextVal与当前值的差不大于集合长度len，即不考虑这个元素，不进行递归。
//            dfs(i, len, cnt + 1);
//        }
//    }
//}
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    int T;
//    cin >> T;
//    while(T--){
//        cin >> N;
//        tot = 0;
//        for(int i = 0; i < N; i++){
//            cin >> sample[i];
//        }
//        sort(sample, sample + N);
//        for(int i = N; i > 1; i--){//i为集合长度len。
//            for(int j = 0; j < N; j++)//j为起点。
//                dfs(j, i, 1);
//        }
//        cout << tot << endl;
//    }
//
//    return 0;
//}
