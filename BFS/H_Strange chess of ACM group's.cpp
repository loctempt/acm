//#include <cstdio>
//#include <cstring>
//#include <iostream>
//#include <queue>
////#define TEST
//using namespace std;
//
//int direction[][2] = {{-2,-1},{-1,-2},{-2,1},{-1,2},{2,-1},{1,-2},{2,1},{1,2}};
//struct node{
//    bool isAccessed;
//    int step;
//    int x, y;
//    node(){}
//    node(int a, int b): x(a), y(b){}
//} grid[305][305];
//
//int m, n, tot, startX, startY, endX, endY;
//
//void bfs(){
//    queue<node> q;
//
//        q.push(grid[startX][startY]);
//        grid[startX][startY].isAccessed = true;
//        grid[startX][startY].step = 0;
//        while(!q.empty()){
//            node temp = q.front();
//            q.pop();
//            if(temp.x == endX && temp.y == endY)
//                break;
//            for(int k = 0; k < 8; k++){
//                int vx = temp.x + direction[k][0], vy = temp.y + direction[k][1];
//                if(!grid[vx][vy].isAccessed && vx >= 1 && vx <= n && vy >= 1 && vy <= m){
//                    grid[vx][vy].step = (temp.step + 1);
//                    grid[vx][vy].isAccessed = true;
//                    q.push(grid[vx][vy]);
//                }
//            }
//        }
//}
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    while(cin >> n){
//        cin >> m;
//        for(int i = 0; i <= n+1; i++){
//            for(int j = 0; j <= m+1; j++){
//                grid[i][j].x = i, grid[i][j].y = j;
//                grid[i][j].step = 0;
//                if(i == 0 || i == n + 1 || j == 0 || j == n + 1)
//                    grid[i][j].isAccessed = true;
//                else
//                    grid[i][j].isAccessed = false;
//            }
//        }
//        cin >> startX >> startY >> endX >> endY;
////        startX++; startY++; endX++; endY++;
//        grid[endX][endY].step = -1;
//        bfs();
//        printf("%d\n", grid[endX][endY].step);
//    }
//
//    return 0;
//}
//
//
