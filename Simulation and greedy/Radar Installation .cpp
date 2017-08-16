//#include<cstdio>
//#include<iostream>
//#include<algorithm>
//#include<math.h>
////#define TEST
//using namespace std;
//
//int n, d, T = 1;
//struct range{
//    double l, r;
//} radarRange[1008];
//
//bool cmp(range a, range b){
//    return a.l < b.l;
//}
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    while(cin >> n >> d){
//        if(n == 0 && d == 0)
//            break;
//        bool ok = true;
//        double x, y;
//        int radarNum = 0;
//        for(int i = 0; i < n; i++){
//            cin >> x >> y;
//            if(y > d){
//                ok = false;
//                radarNum = -1;
//            }
//            if(ok){
//                radarRange[i].l = x - sqrt(d*d - y*y);
//                radarRange[i].r = x + sqrt(d*d - y*y);
//            }
//        }
//        sort(radarRange, radarRange+n, cmp);
//        if(ok){
//            radarNum = 1;
//            double temp = radarRange[0].r;
//            for(int i = 1; i < n; i++){
//                if(radarRange[i].r <= temp){
//                    temp = radarRange[i].r;
//                }
//                else if(radarRange[i].l > temp){
//                    radarNum++;
//                    temp = radarRange[i].r;
//                }
//            }
//        }
//        printf("Case %d: %d\n", T++, radarNum);
//    }
//    return 0;
//}
//
//
//
//
//
//
//
//
//
////#include <iostream>
////#include <cstdio>
////#include <cstring>
////#include <algorithm>
////#include <queue>
////#include <math.h>
////#include <utility>
////#include <vector>
//////#define TEST
////using namespace std;
////
////int n, d, T = 1, radarNum = 0;
////double x, y;
////
////struct radar{
////    double left, right;
////};
////
////bool cmp(radar a, radar b){
////    return a.left < b.left;
////}
////
////radar radarPos[5000];
////
////int main(){
////#ifdef TEST
////freopen("test.txt", "r", stdin);
////#endif // TEST
////
////    while(cin >> n >> d){
////        if(n == 0 && d == 0)
////            break;
////
////        if(d<=0){
////            printf("Case %d: -1\n", T++);
////        }
////        radarNum = 0;
////        for(int i = 0; i < n; i++){
////            cin >> x >> y;
////            if(y > d){
////                radarNum = -1;
////            }
////            if(radarNum != -1){
////                double left = x - sqrt(d*d - y*y), right = x + sqrt(d*d - y*y);
////                radarPos[i].left = left;
////                radarPos[i].right = right;
////            }
////        }
////
////        if(d > 0){
////            if(radarNum != -1){
////                sort(radarPos, radarPos + n, cmp);
////                int temp = radarPos[0].right;
////                radarNum = 1;
////                for(int i = 1; i < n; i++){
////                    if(temp >= radarPos[i].right){
////                        temp = radarPos[i].right;
////                    }
////                    else if(radarPos[i].left > temp){
////                        temp = radarPos[i].right;
////                        radarNum++;
////                    }
////                }
////            }
////            printf("Case %d: %d\n", T++, radarNum);
////        }
////    }
////
////    return 0;
////}
//
//
//
//
//
////#include <iostream>
////#include <cstdio>
////#include <cstring>
////#include <algorithm>
////#include <queue>
////#include <utility>
////#include <vector>
//////#define TEST
////using namespace std;
////
////int n, d, x, y, T = 1, radarNum = 0;
////struct island{
////    int x, y;
////    island(){}
////    island(int a, int b):x(a),y(b){}
////    bool operator < (const island &b)const{
////        return y < b.y;
////    }
////};
////vector<int> radarPos;
////priority_queue<island> q;
////
////bool in_range(const int &x, const int &y){
////    for(int i = 0; i < radarPos.size(); i++)
////        if(y*y + (x-radarPos[i])*(x-radarPos[i]) <= d*d)
////            return true;
////    return false;
////}
////
////void init(){
////    while(!q.empty())
////        q.pop();
////    radarNum = 0;
////    radarPos.clear();
////}
////
////int main(){
////#ifdef TEST
////freopen("test.txt", "r", stdin);
////#endif // TEST
////
////    while(cin >> n >> d){
////        if(n == 0 && d == 0)
////            break;
////        init();
////        for(int i = 0; i < n; i++){
////            cin >> x >> y;
////            q.push(island(x,y));
////        }
////        while(!q.empty()){
////            island temp = q.top();
////            q.pop();
////            int tx = temp.x, ty = temp.y;
////            if(ty > d){
////                radarNum = -1;
////                break;
////            }
////            if(in_range(tx, ty))
////                continue;
////            radarPos.push_back(tx);
////            radarNum++;
////        }
////        printf("Case %d: %d\n", T++, radarNum);
////    }
////
////    return 0;
////}
