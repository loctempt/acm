//#include <cstring>
//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//using namespace std;
//const int maxn = 1004;
//
//int n;
//struct node{
//    int b, j;
//    bool operator < (const node &temp) const{
////        if(b == temp.b)
////            return j > temp.j;
//        return j > temp.j;
//    }
//}e[maxn];
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    int Case = 1;
//    while(scanf("%d", &n) && n){
//        node ans;
//        for(int i = 0; i < n; i++)
//            scanf("%d%d", &e[i].b, &e[i].j);
//        sort(e, e+n);
//        ans.b = e[0].b; ans.j = e[0].j;
//        for(int i = 1; i < n; i++){
//            if(e[i].b >= ans.j)
//                ans.j = e[i].j;
//            else if(e[i].b+e[i].j >= ans.j)
//                ans.j = e[i].j;
//            else
//                ans.j -= e[i].b;
//            ans.b += e[i].b;
//        }
//        printf("Case %d: %d\n", Case++, ans.b+ans.j);
//    }
//
//    return 0;
//}
