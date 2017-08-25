//#include <cstdio>
//#include <iostream>
//#include <cstring>
//using namespace std;
//const int maxNode = 1e6+19, sigma_size = 26;
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
//        int u = 0, n = strlen(s);
//        for(int i = 0; i < n; i++){
//            int c = idx(s[i]);
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
//        int u = 0, n = strlen(s);
//        for(int i = 0; i < n; i++){
//            int c = idx(s[i]);
//            u = ch[u][c];
//        }
//        return val[u];
//    }
//};
//char str[1004][1004];
//int weight[1004];
//
//void add(int x, int d){
//    while(x < maxNode){
//        C[x] += d; x += x&-x;
//    }
//}
//
//int sum(int x){
//    int ret = 0;
//    while(x){
//        ret += C[x]; x -= x&-x;
//    }
//    return ret;
//}
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    int N, M, wi, op, x, y;
//    cin >> N;
//    while(~scanf("%d", &N)){
//        memset(C, 0, sizeof(C));
//        Trie Td;
//        for(int i = 1; i <= N; i++){
//            scanf("%s%d", str[i], &wi);
//            Td.insert(str[i], i);
//            add(wi, 1);
//            weight[i] = wi;
//        }
//        scanf("%d", &M);
//        for(int i = 1; i <= M; i++){
//            scanf("%d", &op);
//            if(op == 1){
//                scanf("%d%d", &x, &y);
//                add(weight[x], -1);
//                add(y, 1);
//                weight[x] = y;
//            }
//            else if(op == 2){
//                scanf("%d", &x);
//                printf("%d\n", sum(weight[x])-1);
//            }
//        }
//    }
//
//    return 0;
//}
