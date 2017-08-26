#include <cstdio>
#include <iostream>
#include <cstring>
#include <queue>
using namespace std;
const int maxNode = 500000+19, sigma_size = 26;
int ch[maxNode][sigma_size];
int val[maxNode];
int last[maxNode];
int f[maxNode];

struct AC_automation{
    // variables to be added, default variables may not able to 
    // work out complicated problems.
    // after adding variables, DO NOT FORGET TO UPDATE CONSTRUCTOR!
    int sz;
    AC_automation(){
        sz = 1;
        memset(ch[0], 0, sizeof(ch[0]));
        memset(val, 0, sizeof(val));
    }
    int idx(char c){
        return c - 'a';
    }
    void insert(char *s, int v){
        int u = 0, n = strlen(s);
        for(int i = 0; i < n; i++){
            int c = idx(s[i]);
            if(!ch[u][c]){
                memset(ch[sz], 0, sizeof(ch[sz]));
                val[sz] = 0;
                ch[u][c] = sz++;  // number nodes in DFS order.
            }
            u = ch[u][c];
        }
        val[u] = v; // ending mark.
    }
    int query(char *s){
        int u = 0, n = strlen(s);
        for(int i = 0; i < n; i++){
            int c = idx(s[i]);
            u = ch[u][c];
        }
        return val[u];
    }
    void print(int j){ // a general purpose function.
        if(j){
            printf("%d: %d\n", j, val[j]);
            print(last[j]);
        }
    }
    void Find(char *T){
        int n = strlen(T);
        int j = 0;
        for(int i = 0; i < n; i++){
            int c = idx(T[i]);
            while(j && !ch[j][c])
                j = f[j];
            j = ch[j][c];
            if(val[j])          // check point at the end of a word.
                print(j);
            else if(last[j])    // check point at every position in text, checking
                print(last[j]); // whether there are patterns being included in a 
        }                       // longer pattern string.
    }
    int getFail(){
        queue<int> q;
        f[0] = 0; // positon of common prefix&suffix.
        for(int c = 0; c < sigma_size; c++){ // initialize queue.
            int u = ch[0][c];
            if(u){
                f[u] = 0;
                q.push(u);
                last[u] = 0;
            }
        }
        // calculate last[] in order of BFS.
        while(!q.empty()){
            int r = q.front();
            q.pop();
            for(int c = 0; c < sigma_size; c++){
                int u = ch[r][c];
                if(!u)
                    continue;
                q.push(u);
                int v = f[r];
                while(v && !ch[v][c])
                    v = f[v];
                f[u] = ch[v][c];
                last[u] = val[f[u]] ? f[u] : last[f[u]]; // if f[u] is the end of a word,
            }                                            // connect with it.
        }
    }
};
char str[1000004]; // text strings.
char patt[100]; // pattern strings.

int main(){
#ifdef TEST
    freopen("test.txt", "r", stdin);
#endif

    int N;
    while(~scanf("%d", &N)){
        AC_automation ACA;
        while(N--){
            ACA.insert(patt, 1);
        }
        scanf("%s", str);
        ACA.getFail();
        cout << ACA.Find(str) << endl;
    }

    return 0;
}
