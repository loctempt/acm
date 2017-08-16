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
//    int j;
//    for(int i = 1; i < len; i++){
//        j = Next[i];
//        while(j && s[i] != s[j])
//            j = Next[j];
//        if(s[i] == s[j]){
//            Next[i + 1] = j + 1;
//            if(Next[i+1] > 0 && (i+1)%(i+1 - Next[i+1]) == 0)//注意，要一边计算一边输出，否则会超时...
//                printf("%d %d\n", i+1, (i+1)/(i+1 - Next[i+1]));
//        }
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
//    int n, tt = 1;
//    while(cin >> n){
//        if(n == 0)
//            break;
//        memset(Next, 0, sizeof(Next));
//        scanf("%s", s);
//        printf("Test case #%d\n", tt++);
//        getNext();
////        for(int i = 2; i <= strlen(s); i++)
////            if(Next[i] > 0 && i%(i - Next[i]) == 0)
////                printf("%d %d\n", i, i/(i - Next[i]));
//        printf("\n");
//    }
//
//
//    return 0;
//}
