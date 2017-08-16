//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <cstring>
////#define TEST
//using namespace std;
//
//char table[10][11];
//int dir[][2] = { {0,1},{0,-1},{1,0},{-1,0},{1,1},{1,-1},{-1,1},{-1,-1} };
//
//bool moveable(int x, int y){
//    return ( x >= 0 && x < 10 && y >= 0 && y < 10 && table[x][y] != 'O' );
//}
//
//bool check(){
//    int cntX, cntDot;//记录行进中的X个数
//    for(int i = 0; i < 10; i++){
//        for(int j = 0; j < 10; j++){
//            if(table[i][j] == 'X'){
//                for(int k = 0; k < 8; k++){//八向检查
//                    cntX = 1, cntDot = 0;
//                    for(int m = 1; m < 5; m++){//每个方向各走四步
//                        int vx = i+dir[k][0]*m, vy = j+dir[k][1]*m;
//                        if(moveable(vx,vy) && table[vx][vy] == 'X')
//                            cntX++;
//                        else if(moveable(vx,vy) && table[vx][vy] == '.')
//                            cntDot++;
//                        else if(!moveable(vx,vy))
//                            break;
//                    }
//                    if(cntX == 4 && cntDot == 1)
//                        return true;
//                }
//            }
//        }
//    }
//    return false;
//}
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//    memset(table, 0, sizeof(table));
//
//    for(int i = 0; i < 10; i++)
//        scanf("%s", table[i]);
//
//    if(check())
//        cout << "YES" << endl;
//    else
//        cout << "NO" << endl;
//
//    return 0;
//}
