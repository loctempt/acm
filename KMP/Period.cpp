//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//#include <queue>
//using namespace std;
//const int maxn = 1e6+10;
//
//char s[maxn];
//int Next[maxn];
//
//void getNext(){
//    int len = strlen(s);
//    Next[0] = Next[1] = 0;
//    for(int i = 1; i < len; i++){
//        int j = Next[i];
//        while(j && s[i] != s[j])
//            j = Next[j];
//        if(s[i] == s[j])
//            Next[i + 1] = j + 1;
//        else
//            Next[i + 1] = 0;
//    }
//}
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    while(scanf("%s", s)!=EOF){
//        if(s[0] == '.')
//            break;
//        memset(Next, 0, sizeof(Next));
//        getNext();
//        int length = strlen(s);
//        if(length % (length - Next[length]) == 0)
//            cout << length / (length - Next[length]) << endl;
//        else
//            cout << 1 << endl;
//    }
//
//    return 0;
//}
