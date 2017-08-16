//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//#include <queue>
//using namespace std;
//const int maxn = 5e4+4;
//
//int p[maxn], r[maxn];
//
//int Find(int x){
//    if(p[x] != x){
//        int n = Find(p[x]);
//        r[x] = (r[x] + r[p[x]]) % 3;
//        p[x] = n;
//    }
//    return p[x];
//}
//
//int Merge(int d, int x, int y){
//    int fx = Find(x), fy = Find(y);
//    if(fx == fy){
//        if((r[x] - r[y] + 3) % 3 != d)
//            return true;
//        else
//            return false;
//    }
//    p[fy] = fx;
//    r[fy] = (r[y] - r[x] + d + 3) % 3;
//    return false;
//}
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    int n, k, cnt = 0;
//    cin >> n >> k;
//    for(int i = 0; i <= n; i++){
//        p[i] = i;
//        r[i] = 0;
//    }
//    for(int i = 0; i < k; i++){
//        int d, x, y;
//        scanf("%d%d%d", &d, &x, &y);
//        if(x > n || y > n || (d == 2 && x == y)){
//            cnt++;
//            continue;
//        }
//        if(Merge(d-1,x,y))
//            cnt++;
//    }
//    cout << cnt << endl;
//    return 0;
//}
//
//#ifndef TEST
//    #include<cstdio>
//    const int N=50001;
//    int p[N],r[N],n;
//    int findset(int x)
//    {
//        if(x!=p[x])
//        {
//            int fx=findset(p[x]);
//            r[x]=(r[x]+r[p[x]])%3;
//            p[x]=fx;
//        }
//        return p[x];
//    }
//    bool Union(int d,int x,int y)
//    {
//        int fx=findset(x),fy=findset(y);
//        if(fx==fy)
//        {
//            if((r[y]-r[x]+3)%3!=d)return 1;
//            else return 0;
//        }
//        p[fy]=fx;
//        r[fy]=(r[x]-r[y]+d+3)%3;
//        return 0;
//    }
//    int main()
//    {
//        freopen("test.txt", "r", stdin);
//        int k,ans,i,d,x,y;
//        scanf("%d%d",&n,&k);
//        ans=0;
//        for(i=1;i<=n;i++)p[i]=i,r[i]=0;
//        while(k--)
//        {
//            scanf("%d%d%d",&d,&x,&y);
//            if(x>n||y>n||(x==y&&d==2)){ans++;continue;}
//            if(Union(d-1,x,y))ans++;
//        }
//        printf("%d\n",ans);
//        return 0;
//    }
//#endif
