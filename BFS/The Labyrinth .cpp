//#include <iostream>
//#include <cstdio>
//#include <queue>
//#include <set>
//#include <cstring>
////#define TEST
//using namespace std;
////int test[(int)1e8];
////int test2[10000][10000];
//int matrix[1004][1004], n, m, connectedComp[1005*1005], compInd;
//int dir[][2] = { {0,1},{0,-1},{1,0},{-1,0} };
//char table[1004][1004];
//struct point{
//    int x, y;
//    point(int a, int b):x(a), y(b){}
//};
//
//void bfs(int i, int j){
//    int cnt = 1;
//    queue<point> q;
//    q.push(point(i, j));
//    matrix[i][j] = compInd;
//    while(!q.empty()){
//        point temp = q.front();
//        q.pop();
//        for(int i = 0; i < 4; i++){
//            int vx = temp.x + dir[i][0], vy = temp.y + dir[i][1];
//            if(vx >= 0 && vx < n && vy >= 0 && vy < m && matrix[vx][vy] == -1 && table[vx][vy] == '.'){
//                matrix[vx][vy] = compInd;
//                cnt++;
//                q.push(point(vx, vy));
//            }
//        }
//    }
//    connectedComp[compInd++] = cnt;
//}
//
//void init(){
//    memset(table, 0, sizeof(table));
//    memset(matrix, -1, sizeof(matrix));
//    compInd = 1;
//}
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    while(scanf("%d%d", &n, &m)!=EOF){
//        init();
//        for(int i = 0; i < n; i++){
//            scanf("%s", table[i]);
//        }
//        for(int i = 0; i < n; i++)//对每个连通块进行大小计算。
//            for(int j = 0; j < m; j++)
//                if(table[i][j] == '.' && matrix[i][j] == -1)
//                    bfs(i, j);
//        set<int> s;
//        int nearConn = 0;
//        for(int i = 0; i < n; i++){//将每个‘*’周围环绕的空隙大小计算出来，并用数字替换‘*’
//            for(int j = 0; j < m; j++){
//                if(table[i][j] == '*'){
//                    s.clear();
//                    nearConn = 1;
//                    for(int k = 0; k < 4; k++){
//                        int tx = i+dir[k][0], ty = j+dir[k][1];
//                        if(tx >= 0 && tx < n && ty >= 0 && ty < m && table[tx][ty] == '.' && !s.count(matrix[tx][ty])){
//                            s.insert(matrix[tx][ty]);
//                            nearConn += connectedComp[matrix[tx][ty]];
//                        }
//                    }
//                    table[i][j] = '0' + nearConn%10;
//                }
//            }
//        }
//        for(int i = 0; i < n; i++){
//            printf("%s\n", table[i]);
//        }
//    }
//
//    return 0;
//}
