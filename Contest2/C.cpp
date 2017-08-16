#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <queue>
#include <cstring>
#include <map>
//#define TEST
using namespace std;

int T, k, w, h, escapeTime, startX, startY;
map<char,int> duration;
struct node{
    int x, y, step;
    node(){}
    node(int _x, int _y, int _step):x(_x), y(_y), step(_step){}
    bool operator < (const node &a)const{
        return step > a.step;
    }
};

char grid[1000][1001];
bool isAccessed[1004][1004];
int dir[][2] = { {1,0},{-1,0},{0,1},{0,-1} };

int bfs(){
    priority_queue<node> q;
    q.push(node(startX,startY,0));
    isAccessed[startX][startY] = true;
    while(!q.empty()){
        node temp = q.top();
        q.pop();
        if(temp.x == 0 || temp.y == 0 || temp.x == h-1 || temp.y == w-1)
            return temp.step;
        for(int i = 0; i < 4; i++){
            int vx = temp.x + dir[i][0], vy = temp.y + dir[i][1], nextStep;
            if(vx >= 0 && vx < h && vy >= 0 && vy < w && !isAccessed[vx][vy]){
                nextStep = duration[grid[vx][vy]];
                isAccessed[vx][vy] = true;
                q.push(node(vx,vy,temp.step+nextStep));
            }
        }
    }
}

int main(){
#ifdef TEST
freopen("test.txt", "r", stdin);
#endif // TEST

    cin >> T;
    while(T--){
        memset(isAccessed, false, sizeof(isAccessed));
        memset(grid, 0, sizeof(grid));
        duration.clear();
        escapeTime = 0;
        cin >> k >> w >> h;
        char klingonClass; int dur;
        for(int i = 0; i < k; i++){
            cin >> klingonClass >> dur;
            duration[klingonClass] = dur;
        }
        for(int i = 0; i < h; i++)
            scanf("%s", grid[i]);
        for(int i = 0; i < h; i++)
            for(int j = 0; j < w; j++)
                if(grid[i][j] == 'E')
                    startX = i, startY = j;
//for(int i = 0; i < h; i++)
//    cout << grid[i] << endl;
//cout << endl;
        cout << bfs() << endl;
    }

    return 0;
}
