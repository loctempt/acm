//#include <cstdio>
//#include <cstring>
//#include <iostream>
//#include <queue>
////#define TEST
//using namespace std;
//const int INF = 1e8;
//
//struct position{
//    int x, y, tearDown;
//    position(){}
//    position(int a, int b, int c):x(a),y(b),tearDown(c){}
//    bool operator < (const position& a)const{
//        return tearDown > a.tearDown;
//    }
//};
//
//char matrix[110][110];
//int T, N, M, startX, startY, totTear, ok;
//int dir[][2] = { {0,1},{0,-1},{1,0},{-1,0} };
//
//void bfs(){
//    priority_queue<position> q;
//    q.push(position(startX, startY, 0));
//    matrix[startX][startY] = '#';
//    while(!q.empty()){
//        position temp = q.top();
//        q.pop();
//        if(temp.x == 0 || temp.x == N-1 || temp.y == 0 || temp.y == M-1){
//                totTear = temp.tearDown;
//                return;
//        }
//        for(int i = 0; i < 4; i++){
//            int vx = temp.x + dir[i][0], vy = temp.y + dir[i][1];
//            if(vx >= 0 && vx < N && vy >= 0 && vy < M && matrix[vx][vy] != '#')
//            if(matrix[vx][vy] == '.'){//                matrix[vx][vy] = '#';
//                q.push(position(vx, vy, temp.tearDown));
//            }
//            if(matrix[vx][vy] == '*'){
//                matrix[vx][vy] = '#';
//                q.push(position(vx, vy, temp.tearDown + 1));
//            }
//        }
//    }
//}
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//        scanf("%d", &T);{
//        while(T--){
//            memset(matrix, '#', sizeof(matrix));
//            totTear = -1;
//            scanf("%d%d", &N, &M);
//            for(int i = 0; i < N; i++){
//                scanf("%s", matrix[i]);
//            }
//            for(int i = 0; i < N; i++)
//                for(int j = 0; j < M; j++)
//                    if(matrix[i][j] == '@')
//                        startX = i, startY = j;
//            bfs();
//            printf("%d\n", totTear);
//            }
//    }
//    return 0;
//}
//
//
//
