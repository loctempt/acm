//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//#include <queue>
//using namespace std;
//const int maxn = 1e6 + 10;
//
//char s[maxn], sample[maxn];
//int Next[maxn], anotherNext[maxn];
//bool vis[maxn];
//
//void getNext(int nex[], char str[]){
//    int len = strlen(str);
//    nex[0] = nex[1] = 0;
//    int j;
//    for(int i = 1; i < len; i++){
//        j = nex[i];
//        while(j && s[i] != s[j])
//            j = nex[j];
//        if(s[i] == s[j])
//            nex[i + 1] = j + 1;
//        else
//            nex[i + 1] = 0;
//    }
//}
//
//bool check(){
//    int len = strlen(s);
//    for(int i = 0; i < len; i++)
//        vis[Next[i]] = true;
//    int k = len;
//    while(Next[k] != 0){ // 非常巧妙之处。
//        if(vis[Next[k]]){
//            for(int j = 0; j < Next[k]; j++)
//                putchar(s[j]);
//            putchar('\n');
//            return true;
//        }
//        k = Next[k];
//    }
//    return false;
//}
////bool KMPSearch(int st, int ed){
////    int j = 0, m = strlen(sample);
////    for(int i = st; i <= ed; i++){
////        while(j && s[i] != sample[j])
////            j = anotherNext[j];
////        if(s[i] == sample[j])
////            j++;
////        if(j == m)
////            return true;
////    }
////    return false;
////}
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    while(scanf("%s", s) != EOF){
//        memset(Next, 0, sizeof(Next));
//        memset(vis, false, sizeof(vis));
//        int len = strlen(s);
//        getNext(Next, s);
////        int anotherLen = Next[len];
////        for(int i = 0; i < anotherLen; i++)
////            sample[i] = s[i];
////        getNext(anotherNext, sample);
//        if(!check())
//            printf("Just a legend\n");
//    }
//
//    return 0;
//}
