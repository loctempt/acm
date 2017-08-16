//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//#include <queue>
//using namespace std;
//const int max1 = 1e6+10, max2 = 1e4+10;
//
//char s[max2], ss[max1];
//int Next[max2];
//
//void getNext(){
//    int len = strlen(s);
//    Next[0] = Next[1] = 0;
//    int j;
//    for(int i = 1; i < len; i++){
//        j = Next[i];
//        while(j && s[i] != s[j])
//            j = Next[j];
//        if(s[i] == s[j])
//            Next[i + 1] = j + 1;
//        else
//            Next[i + 1] = 0;
//    }
//}
//
//void solution(){
//    getNext();
//    int len = strlen(ss), j = 0, tar = strlen(s), cnt = 0;
//    for(int i = 0; i < len; i++){
//        while(j && s[j] != ss[i])
//            j = Next[j];
//        if(s[j] == ss[i])
//            j++;
//        if(j == tar)
//            cnt++;
//    }
//    printf("%d\n", cnt);
//}
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    int n;
//    cin >> n;
//    while(n--){
//        memset(Next, 0, sizeof(Next));
//        scanf("%s%s", s, ss);
//        solution();
//    }
//
//    return 0;
//}
