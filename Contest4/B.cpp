//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//using namespace std;
//const int maxn = 5e4+10;
//
//int p[maxn], r[maxn];
//
//int Find(int now){
//    if(p[now]!=now){
//        int tp = p[now];
//
//    }
//    return now;
//}
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//
//
//    return 0;
//}



    #include <cstdio>
    #include <queue>
    #include <cstring>
    #include <iostream>
    #include <cstdlib>
    #include <algorithm>
    #include <vector>
    #include <map>
    #include <string>
    #include <set>
    #include <ctime>
    #include <cmath>
    #include <cctype>
    using namespace std;
    #define maxn 5005
    #define LL long long
    int cas=1,T;
    struct Node
    {
        int u,v;
        char str[10];
    }que[maxn];
    int a[maxn*2],n,q,cnt;
    int pre[maxn*2],r[maxn*2];
    int Find(int x)
    {
        if (x!=pre[x])
        {
            int f = pre[x];
            pre[x] = Find(pre[x]);
            r[x] = r[x]^r[f];
        }
        return pre[x];
    }

    int main()
    {freopen("test.txt", "r", stdin);
        while (scanf("%d",&n)!=EOF)
        {
            scanf("%d",&q);
            cnt=0;
            for (int i = 0;i<q;i++)
            {
                scanf("%d%d%s",&que[i].u,&que[i].v,&que[i].str);
                que[i].u--;
                a[cnt++]=que[i].u;
                a[cnt++]=que[i].v;
            }
            sort(a,a+cnt);
            cnt = unique(a,a+cnt)-a;
            for (int i = 0;i<cnt;i++)
            {
                pre[i]=i;
                r[i]=0;
            }
            int ans = 0;
            for (int i = 0;i<q;i++)
            {
                int u = lower_bound(a,a+cnt,que[i].u)-a;
                int v = lower_bound(a,a+cnt,que[i].v)-a;
                int ra = Find(u);
                int rb = Find(v);
                if (ra == rb)
                {
                    if (r[u]==r[v] && que[i].str[0]=='o')
                        break;
                    if (r[u]!=r[v] && que[i].str[0]=='e')
                        break;
                    ans++;
                }
                else
                {
                    if (que[i].str[0]=='o')
                    {
                        pre[ra]=rb;
                        r[ra]=r[u]^r[v]^1;
                    }
                    else
                    {
                        pre[ra]=rb;
                        r[ra]=r[u]^r[v];
                    }
                    ans++;
                }
            }
            printf("%d\n",ans);
        }
        //freopen("in","r",stdin);
        //scanf("%d",&T);
        //printf("time=%.3lf",(double)clock()/CLOCKS_PER_SEC);
        return 0;
    }
