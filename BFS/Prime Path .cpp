//#include <iostream>
//#include <cstdio>
//#include <queue>
//#include <cstring>
////#define TEST
//using namespace std;
//
//int T, start, End, tot;
//bool prime[10005];
//bool isAccessed[10005];
//struct node{
//    int val, step;
//    node(){}
//    node(int _val, int _step): val(_val), step(_step){}
//};
//
//void bfs(){
//    queue<node> q;
//    q.push(node(start, 0));
//    isAccessed[start] = true;
//    while(!q.empty()){
//        node temp = q.front();
//        q.pop();
//        int value = temp.val;
//        if(temp.val == End){
//            tot = temp.step;
//            return;
//        }
//        int a, b, c, d;
//        a = value/1000, b = (value/100)%10, c = (value/10)%10, d = value%10;
//        for(int i = -a + 1; i < 10 - a; i++){
//            int nextValue = value+i*1000;
//            if(prime[nextValue] && !isAccessed[nextValue]){
//                isAccessed[nextValue] = true;
//                q.push(node(nextValue, temp.step+1));
//            }
//        }
//        for(int i = -b; i < 10 - b; i++){
//            int nextValue = value+i*100;
//            if(prime[nextValue] && !isAccessed[nextValue]){
//                isAccessed[nextValue] = true;
//                q.push(node(nextValue, temp.step+1));
//            }
//        }
//        for(int i = -c; i < 10 - c; i++){
//            int nextValue = value+i*10;
//            if(prime[nextValue] && !isAccessed[nextValue]){
//                isAccessed[nextValue] = true;
//                q.push(node(nextValue, temp.step+1));
//            }
//        }
//        for(int i = -d; i < 10 - d; i++){
//            int nextValue = value+i;
//            if(prime[nextValue] && !isAccessed[nextValue]){
//                isAccessed[nextValue] = true;
//                q.push(node(nextValue, temp.step+1));
//            }
//        }
//    }
//}
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//    memset(prime, true, sizeof(prime));
//    prime[1] = true;
//    for(int i = 2; i < 10005; i++){
//        if(!prime[i])
//            continue;
//        for(int j = 2; j*i < 10005; j++){
//            prime[i*j] = false;
//        }
//    }
//
//    cin >> T;
//    while(T--){
//        memset(isAccessed, false, sizeof(isAccessed));
//        tot = 0;
//        cin >> start >> End;
//        bfs();
//        cout << tot << endl;
//    }
//
//    return 0;
//}
