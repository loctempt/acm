//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//#include <queue>
//#include <utility>
//using namespace std;
//const int maxn = 1e5+10;
//
//struct node{
//    int x, y, dist;
//    bool operator < (const node &temp)const{
//        return dist < temp.dist;
//    }
//}road[605*605];
//
//int cnt, num, k;
//int f[1000006], happiness[604];
//bool isPrime[2000003];
//
//int findset(int now){
//    if(f[now] != now){
//        f[now] = findset(f[now]);
//    }
//    return f[now];
//}
//
//int kruskal(){
//    sort(road, road+cnt);
//    int res = 0;
//    for(int i = 0; i < cnt; i++){
//        int fx = findset(road[i].x), fy = findset(road[i].y);
//        if(fx != fy){
//            f[fx] = fy;
//            res += road[i].dist;
//            num++;
//        }
//        if(num == k - 1)
//            break;
//    }
//    return res;
//}
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//    memset(isPrime, true, sizeof(isPrime));
//    isPrime[0] = isPrime[1] = false; isPrime[2] = true;
//    for(int i = 2; i < 2000003; i++){
//        if(!isPrime[i])
//            continue;
//        for(int j = 2; j * i < 2000003; j++)
//            isPrime[j*i] = false;
//    }
//
//    int T;
//    cin >> T;
//    while(T--){
//
//        cnt = num = 0;
//        for(int i = 0; i < 1000000; i++)
//            f[i] = i;
//
//        cin >> k;
//        for(int i = 0; i < k; i++){
//            cin >> happiness[i];
//        }
//
//        for(int i = 0; i < k - 1; i++){
//            for(int j = i + 1; j < k; j++){
//                if(isPrime[happiness[i]] || isPrime[happiness[j]] || isPrime[happiness[i] + happiness[j]]){
//                    road[cnt].x = i;
//                    road[cnt].y = j;
//                    road[cnt++].dist = min(min(happiness[i], happiness[j]),abs(happiness[i] - happiness[j]));
//                }
//            }
//        }
//        int ans = kruskal();
//        if(num == k-1)
//            cout << ans << endl;
//        else
//            cout << -1 << endl;
//    }
//
//    return 0;
//}


//#include <iostream>
//#include <cstdio>
//#include <cstring>
//#include <string>
//#include <queue>
//#include <set>
//#include <map>
//#include <algorithm>
//#include <math.h>
//#include <vector>
//using namespace std;
//
//int n;
//
//struct node {
//    int u,v,w;
//    bool operator <(const node &t)const {
//        return w<t.w;
//    }
//}edge[605*605];//边集
//int fa[1000006];//并查集
//bool prime[2000005];//标记是否是素数
//int a[605];
//
//int find(int x){//并查集
//    return fa[x]==x?x:fa[x]=find(fa[x]);
//}
//
//void getprime(){//预处理出素数
//    memset (prime,true,sizeof (prime));
//    prime[0]=prime[1]=false;
//    for (int i=2;i<=2000000;i++){
//        if (prime[i]){
//            for (int j=i*2;j<=2000000;j+=i){
//                prime[j]=false;
//            }
//        }
//    }
//}
//int judge(int a,int b){//判断是否能连边
//    if (prime[a]||prime[b]||prime[a+b]){
//        return min((int)fabs(a-b),min(a,b));
//    }
//    return -1;//不能连边直接输出-1
//}
//
//int main()
//{
//    freopen("test.txt", "r", stdin);
//    getprime();//预处理
//    int T;
//    scanf ("%d",&T);
//    while (T--){
//        scanf ("%d",&n);
//        for (int i=0;i<n;i++){
//            scanf ("%d",&a[i]);
//        }
//        for (int i=0;i<=1000000;i++)fa[i]=i;//初始化
//        int cnt=0;
//        for (int i=0;i<n-1;i++){
//            for (int j=i+1;j<n;j++){
//                int w=judge(a[i],a[j]);
//                if (w!=-1){//判断能否加边
//                    edge[cnt++]=(node){i,j,w};
//                }
//            }
//        }
//        sort(edge,edge+cnt);//排序
//        int sum=0;
//        int ans=0;
//        for (int i=0;i<cnt;i++){
//            int fu=find(edge[i].u);
//            int fv=find(edge[i].v);
//            if (fu!=fv){
//                sum++;
//                ans+=edge[i].w;
//                fa[fu]=fv;
//            }
//            if (sum==n-1)break;
//        }
//        if (sum!=n-1)printf ("-1\n");
//        else printf ("%d\n",ans);
//    }
//    return 0;
//}
