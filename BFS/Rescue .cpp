#include <iostream>
#include <cstdio>
#include <cstring>
#include <queue>
//#define TEST
using namespace std;

const int INF = 1e8;
int n, m, startX, startY, endX, endY, minStep;
int dir[][2] = { {0,1},{0,-1},{1,0},{-1,0} };

struct node{
    char content;
    int x, y;
    int step;
    bool operator < (const node &a)const{
        return step > a.step;
    }
} pos[203][203];

void debug(){
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++)
                cout << pos[i][j].content ;
            cout << endl;
        }
}

void bfs(){
    priority_queue<node> q;
    pos[startX][startY].content = '#';
    pos[startX][startY].step = 0;
    q.push(pos[startX][startY]);
    while(!q.empty()){
//debug(); cout << endl;
        node temp = q.top();
        q.pop();
        if(temp.x == endX && temp.y == endY){
            minStep = temp.step;
            return;
        }
        for(int i = 0; i < 4; i++){
            int vx = temp.x + dir[i][0], vy = temp.y + dir[i][1];
            if(pos[vx][vy].content != '#'){
                if(pos[vx][vy].content == '.' || pos[vx][vy].content == 'a'){
                    pos[vx][vy].content = '#';
                    pos[vx][vy].step = temp.step + 1;
                    q.push(pos[vx][vy]);
                }
                if(pos[vx][vy].content == 'x'){
                    pos[vx][vy].content = '#';
                    pos[vx][vy].step = temp.step + 2;
                    q.push(pos[vx][vy]);
                }
            }
        }
    }
}

void init(){
    minStep = INF;
    for(int i = 0; i <= n+1; i++)
        for(int j = 0; j<= m+1; j++)
            pos[i][j].content = '#';
}

int main(){
#ifdef TEST
freopen("test.txt", "r", stdin);
#endif // TEST

    for(int i = 0; i < 203; i++){
        for(int j = 0; j < 203; j++)
            pos[i][j].x = i, pos[i][j].y = j;
    }

    while(cin >> n >> m){
        init();
        for(int i = 1; i <= n; i++)
            for(int j = 1; j <= m; j++){
                cin >> pos[i][j].content;
                if(pos[i][j].content == 'r')
                    startX = i, startY = j;
                if(pos[i][j].content == 'a')
                    endX = i, endY = j;
            }
        bfs();
        if(minStep == INF)
            cout << "Poor ANGEL has to stay in the prison all his life." << endl;
        else
            cout << minStep << endl;
    }

    return 0;
}
