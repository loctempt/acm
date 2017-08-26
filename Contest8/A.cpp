//#include <cstdio>
//#include <iostream>
//#include <cstring>
//using namespace std;
//const int maxNode = 33e5, sigma_size = 2;
//int ch[maxNode][sigma_size];
//int val[maxNode];
//
//struct Trie{
//    int sz;
//    Trie(){
//        sz = 1;
//        memset(ch[0], 0, sizeof(ch[0]));
//    }
//    int idx(char c){
//        return c - 'a';
//    }
//    void insert(char *s, int v){
//        int u = 0, n = 32;
//        for(int i = 0; i < n; i++){
//            int c = s[i];
//            if(!ch[u][c]){
//                memset(ch[sz], 0, sizeof(ch[sz]));
//                val[sz] = 0;
//                ch[u][c] = sz++;
//            }
//            u = ch[u][c];
//        }
//        val[u] = v;
//    }
//    int query(char *s){
//        int u = 0, n = 32;
//        for(int i = 0; i < n; i++){
//            int c = s[i];
//            if(ch[u][c])
//                u = ch[u][c]; // try to match more binary digits of text and pattern.
//            else
//                u = ch[u][!c];
//        }
//        return val[u];
//    }
//};
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif
//
//    int Case = 1, N, M;
//    cin >> N;
//    while(cin >> N >> M){
//        Trie Td;
//        unsigned int x;
//        for(int i = 0; i < N; i++){
//            scanf("%d", &x);
//            int memoryX = x;
//            char pattern[32];
//            memset(pattern, 0, sizeof(pattern));
//            int pos = 31;
//            while(x){
//                pattern[pos--] = x&1;
//                x >>= 1;
//            }
//            Td.insert(pattern, memoryX);
//        }
//        printf("Case #%d:\n", Case++);
//        for(int i = 0; i < M; i++){
//            scanf("%d", &x);
//            x = ~x;
//            char text[32];
//            int pos = 31;
//            while(x){
//                text[pos--] = x&1;
//                x >>= 1;
//            }
//            printf("%d\n", Td.query(text));
//        }
//    }
//
//    return 0;
//}
