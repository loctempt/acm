//#include <cstdio>
//#include <cstring>
//#include <iostream>
//#include <queue>
//#include <vector>
////#define TEST
//using namespace std;
//const int INF = 1e8;
//struct node{
//    int nextCity, dist;
//    node(){}
//    node(int a, int b):nextCity(a), dist(b) {}
//};
//struct position{
//    int now, refillExp, step;
//    position(){}
//    position(int _now, int _refillExp, int _step):now(_now),refillExp(_refillExp),step(_step){}
//};
//
//vector<node> myVec[105];
//bool isAccessed[106];
//
//int N, M, L, Y, S, T, expense, totDist;
////L是油箱大小， Y是油价， S是起点， T是终点。
//
//void bfs(){
//    queue<position> q;
//    q.push(position(S,0,0));
//    isAccessed[S] = true;
//    while(!q.empty()){
//        position temp = q.front();
//        q.pop();
////cout  << "temp now: " << temp.now << "   step: " << temp.step << "   refillExp: " << temp.refillExp << "  totDist: "<< totDist << endl;
//        for(int k = 0; k < myVec[temp.now].size(); k++){
//            int tempNextCity = myVec[temp.now][k].nextCity, tempNextDist = myVec[temp.now][k].dist;
////cout << "get nextCity : " << tempNextCity << "   nextDist: " << tempNextDist << endl;
//            if(isAccessed[tempNextCity])
//                continue;//不走回头路
//            if((tempNextCity == T) && (tempNextDist <= L)){
////cout << "**********" << endl;
//                if(temp.step < totDist){
////cout << "update expense" << endl;
//                    totDist = temp.step;
//                    expense = temp.refillExp;
//                }
//                if(temp.step == totDist && expense > temp.refillExp){
////cout << "update expense" << endl;
//                    expense = temp.refillExp;
//                }
//            }
//            if(tempNextDist <= L && tempNextCity != T){
////cout <<"push: "<< tempNextCity << endl;
//                isAccessed[tempNextCity] = true;
//                q.push(position(tempNextCity, tempNextDist * Y, temp.step + 1));
//            }
//        }
////cout << endl;
//    }
//}
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    while(scanf("%d%d%d%d", &N, &M, &L, &Y) != EOF){
//        memset(isAccessed, false, sizeof(isAccessed));
//        expense = INF;
//        totDist = INF;
//        getchar();
//        scanf("%d%d", &S, &T);
//        getchar();
//        for(int i = 0; i < M; i++){
//            int a, b, d;
//            scanf("%d%d%d", &a, &b, &d);
//            myVec[a].push_back(node(b, d));
//            myVec[b].push_back(node(a, d));
//        }
//        bfs();
//        if(expense == INF)
//            printf("-1\n");
//        else
//            printf("%d\n", expense);
//        for(int i = 0; i < N; i++){
//            myVec[i].clear();
//        }
//    }
//
//    return 0;
//}
//
//
