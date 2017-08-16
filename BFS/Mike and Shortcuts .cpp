//#include <iostream>
//#include <cstring>
//#include <queue>
//#include <cstdio>
////#define TEST
//using namespace std;
//int n, arr[200005], shortcut[200004];
//struct point{
//    int now, step;
//    point(){}
//    point(int _now, int _step):now(_now), step(_step){}
//};
//void bfs(){
//    queue<point> q;
//    q.push(point(1,0));
//    while(!q.empty()){
//        point temp = q.front();
//        q.pop();
//        int now = temp.now, step = temp.step;
//        if(now - 1 >= 1 && arr[now - 1] == -1){
//            arr[now - 1] = step + 1;
//            q.push(point(now - 1, step + 1));
//        }
//        if(arr[shortcut[now]] == -1){
//            arr[shortcut[now]] = step + 1;
//            q.push(point(shortcut[now], step + 1));
//        }
//        if(now + 1 <= n && arr[now + 1] == -1){
//            arr[now + 1] = step + 1;
//            q.push(point(now + 1, step + 1));
//        }
//    }
//}
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    while(cin >> n){
//        memset(arr, -1, sizeof(arr));
//        arr[1] = 0;
//        for(int i = 1; i <= n; i++)
//            scanf("%d", &shortcut[i]);
//        bfs();
//        for(int i = 1; i <= n; i++)
//            printf("%d ", arr[i]);
//        cout << endl;
//    }
//
//    return 0;
//}
