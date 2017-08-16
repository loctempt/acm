//#include <cstdio>
//#include <cstring>
//#include <iostream>
//#include <queue>
////#define TEST
//using namespace std;
//char grid[105][105];
////bool isAccessed[106][106];
//struct node{
//    int x, y;
//    node(){}
//    node(int a, int b): x(a), y(b){}
//};
//int m, n, tot, P, Q;
//int direction[][2] = {{0,1},{0,-1},{1,0},{-1,0}};
//void bfs(){
//    queue<node> q;
//
//        q.push(node(P,Q));
//        grid[P][Q] = '#';
//        while(!q.empty()){
//            node temp = q.front();
//            q.pop();
//            for(int k = 0; k < 4; k++){
//                int vx = temp.x + direction[k][0], vy = temp.y + direction[k][1];
//                if(grid[vx][vy] == '.'){
//                    q.push(node(vx, vy));
//                    tot++;
//                    grid[vx][vy] = '#';
//                }
//            }
//        }
//}
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    while(cin >> m >> n){
//        getchar();
//
//        if(m == 0 && n == 0)
//            break;
//        memset(grid, '#', sizeof(grid));
//
//        tot = 1;
//        for(int i = 1; i <= n; i++){
//            for(int j = 1; j <= m; j++){
//                char ch;
//                scanf("%c", &ch);
//                if(ch == '@')
//                    P = i, Q = j;
//                grid[i][j] = ch;
//            }
//            getchar();
//        }
//        bfs();
//        printf("%d\n", tot);
//    }
//
//    return 0;
//}
//
