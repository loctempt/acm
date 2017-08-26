//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//#include <queue>
//using namespace std;
//const int maxn = 510, INF = 0x3f3f3f3f;
//
//int N, M;
//bool w[maxn][maxn];
//struct Node{
//    int id, step;
//    bool vis;
//}node[maxn], nodeBus[maxn];
//
//void init(){
//    memset(w, false, sizeof(w));
//    for(int i = 0; i < maxn; i++){
//        node[i].id = nodeBus[i].id = i;
//        node[i].step = nodeBus[i].step = 0;
//        node[i].vis = nodeBus[i].vis = false;
//    }
//}
//
//bool bfsTrain(int s){
//    queue<Node> q;
//    q.push(node[s]);
//    node[s].vis = true;
//    while(!q.empty()){
//        Node u = q.front();
//        q.pop();
//        for(int i = 1; i <= N; i++){
//            int to = i, now = u.id;
//            if(w[now][to] && !node[to].vis){
//                if(to == N){
//                    node[to].step = u.step+1;
//                    return true;
//                }
//                node[to].vis = true;
//                node[to].step = u.step+1;
//                q.push(node[to]);
//            }
//        }
//    }
//    return false;
//}
//bool bfsBus(int s){
//    queue<Node> q;
//    q.push(nodeBus[s]);
//    nodeBus[s].vis = true;
//    while(!q.empty()){
//        Node u = q.front();
//        q.pop();
//        for(int i = 1; i <= N; i++){
//            int to = i, now = u.id;
//            if(!w[now][to] && !nodeBus[to].vis && node[to].step != u.step+1){
//                if(to == N){
//                    nodeBus[to].step = u.step+1;
//                    return true;
//                }
//                nodeBus[to].vis = true;
//                nodeBus[to].step = u.step+1;
//                q.push(nodeBus[to]);
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
//
//
//    while(cin >> N >> M){
//        init();
//        for(int i = 1; i <= M; i++){
//            int a, b;
//            scanf("%d%d", &a, &b);
//            w[a][b] = w[b][a] = true;
//        }
//        bfsTrain(1);
//        bfsBus(1);
//        if(!node[N].step || !nodeBus[N].step)
//            printf("-1\n");
//        else
//            printf("%d\n", max(node[N].step, nodeBus[N].step));
//    }
//
//
//   return 0;
//}
