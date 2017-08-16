#include <cstring>
#include <iostream>
#include <cstdio>
#include <vector>
//#define TEST
using namespace std;
const int maxn = 30;
int maxLength = 0;
bool connect[maxn][maxn];
vector<int> node[maxn];
void dfs(int now, int length){
    int nextLen = length + 1;
//    cout << " now: " << now << "  len: " << length << "       next length: " << nextLen << endl;
    if(length > maxLength)
        maxLength = length;
    for(int i = 0; i < node[now].size(); i++){
        int next = node[now][i];
        if(connect[now][next]){
            connect[now][next] = connect[next][now] = false;
            dfs(next, nextLen);
            connect[now][next] = connect[next][now] = true;
        }
    }
}
int main(){
#ifdef TEST
freopen("test.txt","r",stdin);
#endif
    int n, m;
    while(cin>>n>>m){
        if(n == 0 && m == 0)
            break;
        memset(connect, false, sizeof(connect));
        maxLength = 0;
        for(int i = 0; i < m; i++){
            int a, b;
            cin >> a >> b;
            connect[a][b] = connect[b][a] = true;
            node[a].push_back(b);
            node[b].push_back(a);
        }
        for(int i = 0; i < n; i++){
            int length = 0;
            dfs(i, length);
        }
        cout << maxLength << endl;
        for(int i = 0; i < n; i++)
            node[i].clear();
    }
    return 0;
}
