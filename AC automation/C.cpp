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
//
//struct AC_automation{
//    int sz, ret;
//    AC_automation(){
//        sz = 1;
//        memset(ch[0], 0, sizeof(ch[0]));
//        memchr(val, 0, sizeof(val));
//        ret = 0;
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
//        val[u] += v;
//    }
//    int query(char *s){
//        int u = 0, n = strlen(s);
//        for(int i = 0; i < n; i++){
//            int c = idx(s[i]);
//            u = ch[u][c];
//        }
//        return val[u];
//    }
//    void print(int j){
//        if(j){
//            ret+=val[j];
//            val[j] = 0;
//            print(last[j]);
//        }
//    }
//    int Find(char *T){
//        int n = strlen(T);
//        int j = 0;
//        for(int i = 0; i < n; i++){
//            int c = idx(T[i]);
//            while(j && !ch[j][c])
//                j = f[j];
//            j = ch[j][c];
//            if(val[j])
//                print(j);
//            else if(last[j]){
//                print(last[j]);
//            }
//
//        }
//        return ret;
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
//char str[1000004];
//int N;
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    char sample[60];
//    cin >> N;
//    while(cin >> N){
//        AC_automation ACA;
//        for(int i = 0; i < N; i++){
//            scanf("%s", sample);
//            ACA.insert(sample,1);
//        }
//        ACA.getFail();
//        scanf("%s", str);
//        printf("%d\n",ACA.Find(str));
//    }
//
//    return 0;
//}
