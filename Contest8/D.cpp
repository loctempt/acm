#include <cstdio>
#include <iostream>
#include <cstring>
#include <queue>
using namespace std;
const int maxNode = 200000 + 19, sigma_size = 26;
int ch[maxNode][sigma_size];
int val[maxNode];
int last[maxNode];
int f[maxNode];
int flag[100004];
char patt[100004]; // pattern strings.
int pos[100004];
int maxLength;

struct AC_automation {
    // variables to be added, default variables may not able to
    // work out complicated problems.
    // after adding variables, DO NOT FORGET TO UPDATE CONSTRUCTOR!
    int sz;
    AC_automation() {
        sz = 1;
        memset(ch[0], 0, sizeof(ch[0]));
        memset(val, 0, sizeof(val));
        memset(flag, 0, sizeof(flag));
    }
    int idx(char c) {
        return c - 'a';
    }
    void insert(char *s, int v, int n) {
        int u = 0;
        for(int i = 0; i < n; i++) {
            int c = idx(s[i]);
            if(!ch[u][c]) {
                memset(ch[sz], 0, sizeof(ch[sz]));
                ch[u][c] = sz++;  // number nodes in DFS order.
            }
            u = ch[u][c];
            val[u] = i + 1; // distance form current node to root.
        }
    }
    int query(char *s) {
        int u = 0, n = strlen(s);
        for(int i = 0; i < n; i++) {
            int c = idx(s[i]);
            u = ch[u][c];
        }
        return val[u];
    }
    void print(int j) { // a general purpose function.
        if(j) {
            printf("%d: %d\n", j, val[j]);
            print(last[j]);
        }
    }
    void Find(char *T, int len, int vt, bool checkMode) {
        int u = 0;
        for(int i = 0; i <= len; i++) {
            int c = idx(T[i]);
            u = ch[u][c];
            int j = u;
            while(j){
                if(checkMode) {
                    if(flag[j] == vt)
                        maxLength = max(maxLength, val[j]);
                }
                else {
                    flag[j] = vt;

                }
                j = f[j];
            }
        }
    }
    int getFail() {
        queue<int> q;
        f[0] = 0; // positon of common prefix&suffix.
        for(int c = 0; c < sigma_size; c++) { // initialize queue.
            int u = ch[0][c];
            if(u) {
                f[u] = 0;
                q.push(u);
                last[u] = 0;
            }
        }
        // calculate last[] in order of BFS.
        while(!q.empty()) {
            int r = q.front();
            q.pop();
            for(int c = 0; c < sigma_size; c++) {
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

int main() {
#ifdef TEST
    freopen("test.txt", "r", stdin);
#endif

    int N, M;
    pos[1] = pos[0] = 0;
    cin >> N;
    while(~scanf("%d", &N)) {
        AC_automation ACA;
        for(int i = 1; i <= N; i++) {
            scanf("%s", patt + pos[i]);
            pos[i + 1] = strlen(patt);
            ACA.insert(patt+pos[i], 1, pos[i+1]-pos[i]);
        }
        ACA.getFail();
        scanf("%d", &M);
        for(int i = 1; i <= M; i++) {
            int x, y;
            scanf("%d%d", &x, &y);
            maxLength = 0;
            ACA.Find(patt + pos[x], pos[x+1] - pos[x], i, false);
            ACA.Find(patt + pos[y], pos[y+1] - pos[y], i, true);
            printf("%d\n", maxLength);
        }
    }

    return 0;
}

