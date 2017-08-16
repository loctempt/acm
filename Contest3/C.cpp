//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//#include <queue>
//using namespace std;
//
//struct Group{
//    int No, scale, money;
//    Group(){}
//    Group(int c, int a, int b):No(c), scale(a), money(b){}
//    bool operator < (const Group &another)const{
//        if(money == another.money)
//            return scale > another.scale;
//        return money < another.money;
//    }
//};
//struct table{
//    int No, capacity;
//    table(){}
//    table(int n, int ca):No(n), capacity(ca){}
//};
//struct res{
//    int No, guestNo;
//    res(){}
//    res(int _No, int _guestNo):No(_No), guestNo(_guestNo){}
//};
//
//int n, k;
//int maxReve;
//vector<table> tables;
//vector<bool> isAccessed;
//vector<res> result;
//priority_queue<Group> q;
//
//void arrange(){
//    while(!q.empty()){
//        Group temp = q.top();
//        q.pop();
//        for(int i = 1; i <= k; i++){
//            if(isAccessed[i])
//                continue;
//            if(tables[i].capacity>=temp.scale){
//                isAccessed[i] = true;
//                result.push_back(res(tables[i].No, temp.No));
//                maxReve += temp.money;
//                break;
//            }
//        }
//    }
//}
//
//bool cmp(table a, table b){
//    return a.capacity < b.capacity;
//}
//
//void init(){
//    maxReve = 0;
//    tables.clear();
//    result.clear();
//    isAccessed.clear();
//    while(!q.empty())
//        q.pop();
//}
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    while(cin >> n){
//        init();
//        for(int i = 1; i <= n; i++){
//            int scale, money;
//            cin >> scale >> money;
//            q.push(Group(i,scale, money));
//        }
//        cin >> k;
//        tables.push_back(table(0,0));
//        isAccessed.push_back(true);
//        for(int i = 1; i <= k; i++){
//            int capacity;
//            cin >> capacity;
//            tables.push_back(table(i, capacity));
//            isAccessed.push_back(false);
//        }
//        sort(++tables.begin(), tables.end(), cmp);
//        arrange();
//        cout << result.size() << " " << maxReve << endl;
//        for(int i = 0; i < result.size(); i++)
//            cout << result[i].guestNo << " " << result[i].No << endl;
//
//    }
//
//    return 0;
//}
