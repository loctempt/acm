#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <queue>
#include <cstring>
//#define TEST
using namespace std;

int n, a, b, k[205], minStep;
bool isAccessed[205];

struct status{
    int now, step;
    status(){}
    status(int a, int c):now(a),step(c){}
};

void bfs(){
    queue<status> q;
    q.push(status(a,0));
    while(!q.empty()){
        status temp = q.front();
        q.pop();
        if(temp.now == b){
            minStep = temp.step;
            return;
        }
        int now = temp.now, step = temp.step, next = k[now];
        isAccessed[now] = true;
        if(!isAccessed[now+next]){

            if(now + next <= n){
                q.push(status(now+k[now], step+1));
            }
        }
        if(!isAccessed[now-next])
            if(now - next >= 1){
                q.push(status(now-k[now], step+1));
            }

    }
}

int main(){
#ifdef TEST
freopen("test.txt", "r", stdin);
#endif // TEST

    while(cin >> n){
        if(n == 0)
            break;
        cin >> a >> b;
        minStep = -1;
        memset(isAccessed, false, sizeof(isAccessed));
        for(int i = 1; i<=n; i++)
            cin >> k[i];
        bfs();
        cout << minStep << endl;
    }

    return 0;
}
