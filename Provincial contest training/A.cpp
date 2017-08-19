//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//#include <queue>
//using namespace std;
//const int maxn = 2e5+19;
//
//char sample[maxn];
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    int n;
//    while(cin >> n){
//        int cnt = 0;
//        scanf("%s", sample);
//        if(sample[0] == '>' && sample[n - 1] == '<'){
//            cout << 0 << endl;
//            continue;
//        }
//        for(int i = 0; i < n && sample[i] == '<'; i++)
//            cnt++;
//        for(int i = n - 1; i > -1 && sample[i] == '>'; i--)
//            cnt++;
//        cout << cnt << endl;
//    }
//
//    return 0;
//}
