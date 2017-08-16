//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//#include <queue>
//#include <map>
//using namespace std;
//const int maxn = 1e5+4;
//
//map<string, int> nest;
//struct cplx{
//    int father, nestScale;
//} tar[maxn];
//
//int Find(int now){
//    if(tar[now].father == now)
//        return now;
//    else
//        return tar[now].father = Find(tar[now].father);
//}
//
//int Merge(int x, int y){
//    int fatherX = Find(x), FatherY = Find(y);
//    if(fatherX != FatherY){
//        tar[FatherY].father = fatherX;
//        tar[fatherX].nestScale += tar[FatherY].nestScale;
//    }
//    return tar[fatherX].nestScale;
//}
//
//void check(int x, int y){
//    cout << Merge(x, y) << endl;
//}
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    int n;
//    while(cin >> n){
//        for(int i = 0; i < n; i++){
//            int f, mapping = 0;
//            for(int i = 0; i < maxn; i++){
//                tar[i].father = i;
//                tar[i].nestScale = 1;
//            }
//            nest.clear();
//            cin >> f;
//            string name1, name2;
//            for(int i = 0; i < f; i++){
//                cin >> name1 >> name2;
//                if(!nest.count(name1))
//                    nest[name1]=mapping++;
//                if(!nest.count(name2))
//                    nest[name2]=mapping++;
//                check(nest[name1], nest[name2]);
//            }
//        }
//    }
//
//    return 0;
//}
