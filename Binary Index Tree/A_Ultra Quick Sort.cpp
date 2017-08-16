//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//#include <queue>
//typedef long long ll;
//using namespace std;
//const ll maxn = 5e5+19;
//
//int n;
//ll A[maxn], B[maxn], C[maxn];
//
//void add(ll x, ll d){
//    while(x <= n){
//        C[x] += d; x += x&-x;
//    }
//}
//
//ll sum(ll x){
//    ll ret = 0;
//    while(x > 0){
//        ret += C[x]; x -= x&-x;
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
//        if(n == 0)
//            break;
//        memset(A, 0, sizeof(A));
//        memset(B, 0, sizeof(B));
//        memset(C, 0, sizeof(C));
//        for(int i = 1; i <= n; i++){
//            scanf("%lld", &A[i]);
//            B[i] = A[i];
//        }
//        // ¶ÔA[]ÀëÉ¢»¯¡£
//        sort(B+1, B+n+1);
//        unique(B+1, B+n+1);
//        for(int i = 1; i <= n; i++){
//            A[i] = lower_bound(B+1, B+n+1, A[i]) - B;
//        }
//        ll res = 0;
//        for(int i = 1; i <= n; i++){
//            add(A[i], 1);
//            res += i-sum(A[i]);
//        }
//        printf("%lld\n", res);
//    }
//
//    return 0;
//}

//#include <iostream>
//#include <stdio.h>
//#include <string.h>
//#include <algorithm>
//#define int long long
//using namespace std;
//const int N=500050;
//int a[N],b[N];
//int t[N];
//void add(int k)
//{
//    for(int i=k;i<=N;i+=(i&-i))
//    {
//        t[i]++;
//    }
//}
//int read(int k)
//{
//    int sum=0;
//    for(int i=k;i;i-=(i&-i))
//    {
//        sum+=t[i];
//    }
//    return sum;
//}
//signed main()
//{
//    freopen("test.txt", "r", stdin);
//    int n;
//    while(scanf("%lld",&n),n)
//    {
//        memset(t,0,sizeof(t));
//        memset(a,0,sizeof(a));
//        memset(b,0,sizeof(b));
//        for(int i=1;i<=n;i++)
//        {
//            scanf("%lld",&a[i]);
//            b[i]=a[i];
//        }
//        sort(b+1,b+n+1);
//        unique(b+1,b+n+1);
//        for(int i=1;i<=n;i++)
//        {
//            a[i]=lower_bound(b+1,b+n+1,a[i])-(b);
//        }
//        int sum=0;
//        for(int i=1;i<=n;i++)
//        {
//            add(a[i]);
//            int q=read(a[i]);
//            sum+=(i-q);
//        }
//        printf("%lld\n",sum);
//    }
//    return 0;
//}
