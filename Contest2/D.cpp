#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <queue>
#include <cmath>
#define TEST
using namespace std;

long long n, king[4], x, y;
bool ckmt[4][2];//国王的八向能否被将军
struct chess_piece{
    long long x, y, md, vd;
    char type;
    chess_piece(int a, int b, char c):x(a), y(b), type(c), md(a+b), vd(a-b){}
    bool operator < (const chess_piece &p)const{
        return abs(x-king[0])+abs(y-king[1]) > abs(p.x-king[0])+abs(p.y-king[1]);
    }
};
priority_queue<chess_piece> q;

bool checkmate(){
    while(!q.empty()){
    int sz = q.size();
        chess_piece temp = q.top();
        q.pop();
        long long vx = temp.x, vy = temp.y, vm = temp.md, vd = temp.vd;
        char typ = temp.type;
        switch (typ){
        case 'R':
            if(vm == king[2] || vd == king[3]){//on diagonal
                if(vx < king[0] && vy > king[1])//up left
                    ckmt[2][0] = false;
                else if(vx > king[0] && vy > king[1])//up right
                    ckmt[3][0] = false;
                else if(vx < king[0] && vy < king[1])//down left
                    ckmt[3][1] = false;
                else if(vx > king[0] && vy < king[1])//down right
                    ckmt[2][1] = false;
            }
            else{//on vertical or horizontal line
                if(vx == king[0] && vy > king[1] && ckmt[1][0])//up
                    return true;
                else if(vx == king[0] && vy < king[1] && ckmt[1][1])//down
                    return true;
                else if(vx < king[0] && vy == king[1] && ckmt[0][0])//left
                    return true;
                else if(vx > king[0] && vy == king[1] && ckmt[0][1])//right
                    return true;
            }
            break;
        case 'B':
            if(vm == king[2] || vd == king[3]){//on diagonal
                if(vx < king[0] && vy > king[1] && ckmt[2][0])//up left
                    return true;
                else if(vx > king[0] && vy > king[1] && ckmt[3][0])//up right
                    return true;
                else if(vx < king[0] && vy < king[1] && ckmt[3][1])//down left
                    return true;
                else if(vx > king[0] && vy < king[1] && ckmt[2][1])//down right
                    return true;
            }
            else{//on vertical or horizontal line
                if(vx == king[0] && vy > king[1])//up
                    ckmt[1][0] = false;
                else if(vx == king[0] && vy < king[1])//down
                    ckmt[1][1] = false;
                else if(vx < king[0] && vy == king[1])//left
                    ckmt[0][0] = false;
                else if(vx > king[0] && vy == king[1])//right
                    ckmt[0][1] = false;
            }
            break;
        case 'Q':
            if(vm == king[2] || vd == king[3]){//on diagonal
                if(vx < king[0] && vy > king[1] && ckmt[2][0])//up left
                    return true;
                else if(vx > king[0] && vy > king[1] && ckmt[3][0])//up right
                    return true;
                else if(vx < king[0] && vy < king[1] && ckmt[3][1])//down left
                    return true;
                else if(vx > king[0] && vy < king[1] && ckmt[2][1])//down right
                    return true;
            }
            else{//on vertical or horizontal line
                if(vx == king[0] && vy > king[1] && ckmt[1][0])//up
                    return true;
                else if(vx == king[0] && vy < king[1] && ckmt[1][1])//down
                    return true;
                else if(vx < king[0] && vy == king[1] && ckmt[0][0])//left
                    return true;
                else if(vx > king[0] && vy == king[1] && ckmt[0][1])//right
                    return true;
            }
            break;
        }
        int cnt = 0;
        for(int z = 0; z < 4; z++)
            for(int v = 0; v < 2; v++)
                if(ckmt[z][v] == false)
                    cnt++;
        if(cnt == 8)
            return false;
    }
    return false;
}

int main(){
#ifdef TEST
freopen("test.txt", "r", stdin);
#endif // TEST

    while(cin >> n){
        cin >> king[0] >> king[1];
        king[2] = king[0] + king[1], king[3] = king[0] - king[1];
        for(int i = 0; i < 4; i++)
            for(int j = 0; j < 2; j++)
                ckmt[i][j] = true;
        while(!q.empty())
            q.pop();
        char typ;
        getchar();
        for(int i = 0; i < n; i++){
            scanf("%c%d%d", &typ, &x, &y);
            q.push(chess_piece(x,y,typ));
            getchar();
//            cout << (char)typ << " " << x << " " << y << endl;
        }
//while(!q.empty()){
//    chess_piece temp = q.top();
//    q.pop();
//}
        if(checkmate())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
