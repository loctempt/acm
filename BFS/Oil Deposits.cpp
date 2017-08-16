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
//int m, n, tot;
//int direction[][2] = {{0,1},{0,-1},{1,0},{-1,0},{1,1},{1,-1},{-1,1},{-1,-1}};
//void bfs(){
//    queue<node> q;
//    for(int i = 1; i <= m; i++){
//        for(int j = 1; j <= n; j++){
//            if(grid[i][j] != '@')
//                continue;
//            q.push(node(i,j));
//            grid[i][j] = 0;
//            while(!q.empty()){
//                node temp = q.front();
//                q.pop();
//                for(int k = 0; k < 8; k++){
//                    int vx = temp.x + direction[k][0], vy = temp.y + direction[k][1];
//                    if(grid[vx][vy] == '@'){
//                        q.push(node(vx, vy));
//                        grid[vx][vy] = 0;
//                    }
//                }
//            }
//            tot++;
//        }
//    }
//}
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    while(cin >> m >> n){
//        getchar();
////cout << "haha" << endl;
//        if(m == 0 && n == 0)
//            break;
//        memset(grid, 0, sizeof(grid));
////        memset(isAccessed, false, sizeof(isAccessed));
//        tot = 0;
//        for(int i = 1; i <= m; i++){
//            for(int j = 1; j <= n; j++){
//                char ch;
//                scanf("%c", &ch);
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
