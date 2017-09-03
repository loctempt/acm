//#include <iostream>
//#include <cstdio>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//const int maxn = 2e4+10;
//
//int n, m;
//int head[maxn], knight[maxn];
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    while(cin >> n >> m){
//        if(n == m && n == 0)
//            break;
//        for(int i = 1; i <= n; i++){
//            scanf("%d", &head[i]);
//        }
//        knight[0] = 0;
//        for(int j = 1; j <= m; j++){
//            scanf("%d", &knight[j]);
//        }
//        if(m < n){
//            printf("Loowater is doomed!\n");
//            continue;
//        }
//        sort(head+1, head+1+n);
//        sort(knight+1, knight+1+m);
//        int pos = 1;
//        for(int j = 1; j <= m; j++){
//            if(knight[j]<head[pos])
//                continue;
//            knight[0] += knight[j];
//            pos++;
//            if(pos == n+1)
//                break;
//        }
//        if(pos == n+1)
//            printf("%d\n", knight[0]);
//        else
//            printf("Loowater is doomed!\n");
//    }
//
//    return 0;
//}
