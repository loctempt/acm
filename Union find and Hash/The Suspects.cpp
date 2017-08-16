//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//#include <queue>
//using namespace std;
//const int maxn = 3e4+4;
//
//struct student{
//    int father, scale;
//}stu[maxn];
//
//int Find(int now){
//    if(stu[now].father == now)
//        return now;
//    return stu[now].father = Find(stu[now].father);
//}
//
//int Merge(int x, int y){
//    int fx = Find(x), fy = Find(y);
//    if(fx != fy){
//        stu[fy].father = fx;
//        stu[fx].scale += stu[fy].scale;
//    }
//    return stu[fx].scale;
//}
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    int n, m;
//    while(cin >> n >> m){
//        if(n == m && n == 0)
//            break;
//        for(int i = 0; i < n; i++){
//            stu[i].father = i;
//            stu[i].scale = 1;
//        }
//        int target;
//        for(int i = 0; i < m; i++){
//            int t, temp;
//            cin >> t;
//            cin >> temp;
//            for(int j = 1; j < t; j++){//建立小组。
//                int temp2;
//                cin >> temp2;
//                Merge(temp, temp2);
//            }
//        }
//        target = Find(0);
//        cout << stu[target].scale << endl;
//
//    }
//
//    return 0;
//}
