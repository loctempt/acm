//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//#include <queue>
//using namespace std;
//const int maxn = 50009;
//
//int n;
//
//struct node{
//    int x, y;
//    bool operator < (const node &temp)const{
//        if(y == temp.y)
//            return x > temp.x;
//        return y > temp.y;
//    }
//}sample[maxn];
//int b[maxn], c[maxn], d[maxn];
//bool vis[maxn];
//
//void add(int x, int d){
//    while(x <= n){
//        c[x] += d; x += x&-x;
//    }
//}
//
//int sum(int x){
//    int ret = 0;
//    while(x > 0){
//        ret += c[x]; x -= x&-x;
//    }
//    return ret;
//}
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    while(cin >> n){
//        memset(c, 0, sizeof(c));
//        memset(vis, false, sizeof(vis));
//        for(int i = 1; i <= n; i++){
//            scanf("%d%d", &sample[i].x, &sample[i].y);
//        }
//        sort(sample+1, sample+n+1);     //开始离散化
//        for(int i = 1; i <= n; i++)
//            b[i] = sample[i].x;
//        sort(b+1, b+n+1);
//        unique(b+1, b+n+1);
//        for(int i = 1; i <= n; i++)
//            d[i] = lower_bound(b+1, b+n+1, sample[i].x) - b;//完成离散化
//        long long res = 0;
//        for(int i = 1; i <= n; i++){
//            if(!vis[d[i]]){
//                res += sum(d[i]);
//                add(d[i], 1);
//                vis[d[i]] = true;
//            }
//            else{
//                res += sum(d[i]-1);
//                add(d[i], 1);
//            }
//        }
//        printf("%lld\n", res);
//    }
//
//    return 0;
//}
