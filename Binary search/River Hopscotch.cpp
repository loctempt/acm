#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int main(){

    unsigned int l, n;
    int m, cnt;
    while(cin >> l >> n >> m){
        vector<unsigned int> myVec;
        unsigned int temp, mid, left = 1, right = l, last, index = 0, ans;
        myVec.push_back(0);
        for(unsigned int i = 0; i < n; i++){
            scanf("%d", &temp);
            myVec.push_back(temp);
        }
        myVec.push_back(l);
        sort(myVec.begin(), myVec.end());
        while(left <= right){
//            cout <<"left: " << left <<"    right : "<<right<<endl;
            mid = (left + right) / 2 ;
//            cout << "mid:  " <<mid <<endl;
            cnt = 0;
            last = 0;
            for(unsigned int i = 1; i <= n+1; i++){
//                printf("myVec[%d] (%d)  - %d = %d\n", i, myVec[i], last, myVec[i] - last);
                if(myVec[i] - last < mid){
                    cnt++;
                }
                else
                    last = myVec[i];

            }
//            cout<<cnt<<endl;
            if(cnt > m){//mid too big
                right = mid - 1;
            }
            else{//mid too small
                ans = mid;
                left = mid + 1;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
//#include<iostream>
//#include<algorithm>
//using namespace std;
//int l,n,m,i,j,ans,num[50010];
//bool search(int a)
//{
//    cout << "mid: " << a << endl;
//    int sum=0,temp=0;
//    for(i=1;i<=n+1;i++)
//    {
//        if(num[i]-num[temp]<a)
//        {
//            cout << "  last: " << num[temp] << "   sum: " << sum << endl;
//            sum++;//�����������a��ȥ��һ����
//            if(sum>m)
//                return false; //ȥ���ĵ����m������
//        }
//        else
//            temp=i;
//    }
//    cout << "haha" << endl;
//    return true;
//}
//int main()
//{
//    int max,min,mid;
//    scanf("%d%d%d",&l,&n,&m);
//    for(i=1;i<=n;i++)
//    {
//        scanf("%d",&num[i]);
//    }
//    num[0]=0;
//    num[n+1]=l;
//    sort(num,num+n+1);
//    max=l;
//    min=0;
//    while(max-min>=0)
//    {
//        mid=(max-min)/2+min;
//        if(search(mid))
//        {
//            ans=mid; //������Ϊʲô�����¼�𰸣���max+min��/2  ����ʹ�ý���ȴ���һ������max=5��min=0����Ϊ3����ȥ�����Ͳ����ˡ����� �����͵Ĳ��á�����
//            min=mid+1;//����Ϊ�棬��midƫС����������
//        }
//        else
//        {
//            max=mid-1;
//        }
//    }
//    printf("%d\n",ans);
//    return 0;
//}
