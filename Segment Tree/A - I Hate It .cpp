#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
#include <queue>
#define lson u<<1
#define rson u<<1|1
using namespace std;
const int maxn = 2e5 + 19, INF = 0x7fffffff;

int n, m, x, y;

int sum[maxn * 4];

void pushUp(int u){
   sum[u] = max(sum[lson], sum[rson]);
}

void build(int left, int right, int u) {
   if(left == right){
       scanf("%d", &sum[u]);
       return;
   }
   int mid = (left + right) >> 1;
   build(left, mid, lson);
   build(mid+1, right, rson);
   pushUp(u);
}

void update(int left, int right, int u) {
   if(left == right){
       sum[u] = y;
       return;
   }
   int mid = (left + right) >> 1;
   if(x <= mid)
       update(left, mid, lson);
   else
       update(mid+1, right, rson);
   pushUp(u);
}

int query(int left, int right, int u) {
   if(x <= left && right <= y)
       return sum[u];
   int mid = (left + right) >> 1, ret = 0;
   if(x <= mid)
       ret = max(ret, query(left, mid, lson));
   if(mid < y)
       ret = max(ret, query(mid+1, right, rson));
   return ret;
}

int main() {
#ifdef TEST
   freopen("test.txt", "r", stdin);
#endif // TEST

   while(cin >> n >> m){
       build(1,n,1);
       char ch;
       for(int i = 1; i <= m; i++){
           getchar();
           scanf("%c%d%d", &ch, &x, &y);
           if(ch == 'Q')
               printf("%d\n", query(1, n, 1));
           if(ch == 'U')
               update(1, n, 1);
       }
   }

   return 0;
}




//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//#include <queue>
//#define lson u<<1
//#define rson u<<1|1
//using namespace std;
//const int maxn = 2e5 + 19, INF = 0x7fffffff;
//
//int n, m;
//
//struct stu {
//    int left, right, val;
//} student[maxn * 4];
//
//void build(int left, int right, int u) {
//    int mid = (left + right) / 2;
//    student[u].left = left;
//    student[u].right = right;
//    student[u].val = 0;
//    if(left == right)
//        return ;
//    build(left, mid, lson);
//    build(mid+1, right, rson);
//}
//
//void update(int pos, int val, int u) {
//    int mid = (student[u].left+student[u].right)/2;
//    if(student[u].left == student[u].right){
//        student[u].val = val;
//        return;
//    }
//    if(pos > mid)
//        update(pos, val, rson);
//    else
//        update(pos, val, lson);
//    student[u].val = max(student[lson].val, student[rson].val);
//}
//
//int query(int left, int right, int u) {
//    int mid = (student[u].left + student[u].right) / 2;
//    if(student[u].right < left || right < student[u].left)
//        return 0;
//    if(left <= student[u].left && student[u].right <= right)
//        return student[u].val;
//    int a = query(left, mid, lson);
//    int b = query(mid+1, right, rson);
//    return max(a, b);
//}
//
//int main() {
//#ifdef TEST
//    freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    while(cin >> n >> m){
//        int score;
//        build(1,n,1);
//        for(int i = 1; i <= n; i++){
//            scanf("%d", &score);
//            update(i,score,1);
//        }
//        char ch;
//        int x, y;
//        for(int i = 1; i <= m; i++){
//            getchar();
//            scanf("%c%d%d", &ch, &x, &y);
//            if(ch == 'Q')
//                printf("%d\n", query(x, y, 1));
//            if(ch == 'U')
//                update(x, y, 1);
//        }
//    }
//
//    return 0;
//}



//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//#include <queue>
//using namespace std;
//const int maxn = 2e5 + 19, INF = 0x7fffffff;
//
//int n, m;
//
//struct stu {
//    int left, right, val;
//} student[maxn * 4];
//
//void build(int left, int right, int u) {
//    student[u].left = left;
//    student[u].right = right;
//    student[u].val = 0;
//    int mid = (left + right) / 2;
//    if(left == right)
//        return;
//    build(left, mid, u << 1);
//    build(mid + 1, right, u << 1 | 1);
//}
//
//void update(int stu, int val, int u) {
//    int mid = (student[u].left + student[u].right) / 2;
//    if(student[u].left == student[u].right) {
//        student[u].val = val;
//        return;
//    }
//    if(stu <= mid)
//        update(stu, val, u << 1);
//    else
//        update(stu, val, u << 1 | 1);
//    student[u].val = max(student[u << 1 | 1].val, student[u << 1].val);
//}
//
//int query(int left, int right, int u) {
//    int mid = (student[u].right + student[u].left) / 2, ans = -99999;
//    if(student[u].left >= left && right >= student[u].right)
//        return student[u].val;
//    if(left <= mid)
//        ans = max(ans, query(left, mid, u<<1));
//    if(mid < right)
//        ans = max(ans, query(mid+1, right, u<<1|1));
//    return ans;
//}
//
//int main() {
//#ifdef TEST
//    freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    while(cin >> n >> m){
//        int score;
//        build(1,n,1);
//        for(int i = 1; i <= n; i++){
//            scanf("%d", &score);
//            update(i,score,1);
//        }
//        char ch;
//        int x, y;
//        for(int i = 1; i <= m; i++){
//            getchar();
//            scanf("%c%d%d", &ch, &x, &y);
//            if(ch == 'Q')
//                printf("%d\n", query(x, y, 1));
//            if(ch == 'U')
//                update(x, y, 1);
//        }
//    }
//
//    return 0;
//}
