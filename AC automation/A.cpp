//#include <cstdio>
//#include <iostream>
//#include <cstring>
//using namespace std;
//const int maxNode = 1000000, sigma_size = 26;
//int ch[maxNode][sigma_size];
//int val[maxNode];
//
//struct Trie{
//    int sz;
//    int ret;
//    Trie(){
//        sz = 1;
//        ret = 0;
//        memset(ch[0], 0, sizeof(ch[0]));
//        memset(val, 0, sizeof(val));
//    }
//    int idx(char c){
//        return c - 'a';
//    }
//    void insert(char *s, int v){
//        int u = 0, n = strlen(s);
//        for(int i = 0; i < n; i++){
//            int c = idx(s[i]);
//            if(!ch[u][c]){
//                memset(ch[sz], 0, sizeof(ch[sz]));
//                val[sz] = 0;
//                ch[u][c] = sz++;
//            }
//            u = ch[u][c];
//            val[u]++;
//        }
////        val[u]++;
//    }
//    void dfs(int u){
//        ret += val[u];
//        for(int i = 0; i < sigma_size; i++){
//            if(ch[u][i])
//                dfs(ch[u][i]);
//        }
//    }
//    int query(char *s){
//        int u = 0, n = strlen(s);
//        for(int i = 0; i < n; i++){
//            int c = idx(s[i]);
//            u = ch[u][c];
//            if(!u)
//                return 0;
//        }
//        return val[u];
//    }
//};
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    char str[50];
//    Trie Td;
//    while(gets(str) && *str){
//        Td.insert(str, 1);
//    }
//    while(~scanf("%s", str)){
//        printf("%d\n", Td.query(str));
//        Td.ret = 0;
//    }
//
//    return 0;
//}
