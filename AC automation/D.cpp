//#include <cstdio>
//#include <iostream>
//#include <cstring>
//#include <queue>
//using namespace std;
//const int maxNode = 500000+19, sigma_size = 26;
//int ch[maxNode][sigma_size];
//int val[maxNode];
//int last[maxNode];
//int f[maxNode];
//int finalCnt[maxNode];
//
//struct AC_automation{
//    int sz;
//    AC_automation(){
//        sz = 1;
//        memset(ch[0], 0, sizeof(ch[0]));
//        memset(val, 0, sizeof(val));
//        memset(finalCnt, 0, sizeof(finalCnt));
//    }
//    int idx(char c){
//        return c - 'A';
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
//        return finalCnt[u];
//    }
//    void print(int j){
//        if(j){
//            finalCnt[j]++;
//            print(last[j]);
//        }
//    }
//    void Find(char *T){
//        int n = strlen(T);
//        int j = 0;
//        for(int i = 0; i < n; i++){
//            if(T[i] < 'A' || T[i] > 'Z'){ // if non-capital characters are encountered, redirect
//                j = 0;                    // position pointer to Trie's root, avoiding losing
//                continue;                 // track of pairing position.
//            }
//            int c = idx(T[i]);
//            while(j && !ch[j][c])
//                j = f[j];
//            j = ch[j][c];
//            if(val[j])
//                print(j);
//            else if(last[j])
//                print(last[j]);
//        }
//    }
//    int getFail(){
//        queue<int> q;
//        f[0] = 0; // previous node.
//        for(int c = 0; c < sigma_size; c++){ // initialize queue.
//            int u = ch[0][c];
//            if(u){
//                f[u] = 0;
//                q.push(u);
//                last[u] = 0;
//            }
//        }
//        // calculate last[] in order of BFS.
//        while(!q.empty()){
//            int r = q.front();
//            q.pop();
//            for(int c = 0; c < sigma_size; c++){
//                int u = ch[r][c];
//                if(!u)
//                    continue;
//                q.push(u);
//                int v = f[r];
//                while(v && !ch[v][c])
//                    v = f[v];
//                f[u] = ch[v][c];
//                last[u] = val[f[u]] ? f[u] : last[f[u]];
//            }
//        }
//    }
//};
//
//char str[2000004];
//char Tem[1004][60]; // Tem for template.
//int main(){
//#ifdef TEST
//    freopen("test.txt", "r", stdin);
//#endif
//
//    int N;
//    while(~scanf("%d", &N)){
//        AC_automation ACA;
//        for(int i = 1; i <= N; i++){
//            scanf("%s", Tem[i]);
//            ACA.insert(Tem[i], i);
//        }
//        scanf("%s", str);
//        ACA.getFail();
//        ACA.Find(str);
//        for(int i = 1; i <= N; i++){
//            int getFinalCnt = ACA.query(Tem[i]);
//            if(getFinalCnt){
//                printf("%s: %d\n", Tem[i], getFinalCnt);
//            }
//        }
//    }
//
//    return 0;
//}
