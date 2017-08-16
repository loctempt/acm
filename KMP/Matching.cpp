//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//#include <queue>
//using namespace std;
//const int max1 = 1e6+4, max2 = 1e4+4;
//
//int Next[max2], s[max2], ss[max1];
//
//int m, n;
//
//int getNext(){
//    Next[0] = Next[1] = 0;
//    for(int i = 1; i < m - 1; i++){
//        int j = Next[i];
//        while(j && s[i] != s[j])
//            j = Next[j];
//        if(s[i] == s[j])
//            Next[i+1] = j + 1;
//        else
//            Next[i+1] = 0;
//    }
//}
//
//int Find(){
//    int j = 0;
//    for(int i = 0; i < n; i++){
//        while(j && s[j] != ss[i])
//            j = Next[j];
//        if(s[j] == ss[i])
//            j++;
//        if(j == m)
//            return i - m + 1 + 1;
//    }
//    return -1;
//}
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    int T;
//    cin >> T;
//    while(T--){
//        memset(Next, 0, sizeof(Next));
//        cin >> n >> m;
//        for(int i = 0; i < n; i++)
//            scanf("%d", &ss[i]);
//        for(int i = 0; i < m; i++)
//            scanf("%d", &s[i]);
//        getNext();
//        cout << Find() << endl;
//    }
//
//    return 0;
//}
