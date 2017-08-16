#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
//8*x^4 + 7*x^3 + 2*x^2 + 3*x + 6 == Y
double equation(double x){
    return 8.0*pow(x,4) + 7.0*pow(x,3) + 2.0*pow(x,2) + 3.0*x + 6;
}
int main(){

    int T;
    cin >> T;
    for(int t = 0; t < T; t++){
        double y;
        cin >> y;
        if(y < 6 || y > 807020306){
            cout << "No solution!" << endl;
            continue;
        }
        double l = 0, r = 100, mid;
        while(r - l > 1e-8){
            mid = (l + r)/2;
            if(equation(mid) - y > 0){//大了
                r = mid;
//                cout <<fixed << setprecision(4) << "大了：" << mid << "equation: " << equation(mid)<< endl;
            }
            else if(equation(mid) - y < 0){//小了
                l = mid;
//                cout <<fixed << setprecision(4)<< "小了：" << mid << "equation: " << equation(mid)<< endl;
            }
        }
        cout <<fixed<<setprecision(4)<< mid << endl;
    }
    return 0;
}
//#include<cstdio>
//#include<iostream>
//#include<cmath>
//#include <iomanip>
//using namespace std;
//int find(double x,double y)
//{
//    if(y-(8.0*pow(x,4)+7.0*pow(x,3)+2.0*pow(x,2)+3.0*x+6)<0)
//       return 1;
//    else
//       return 0;
//}
//
//int main()
//{cout << "haha" << endl;
//    int t;
//    double y,mid,L,R;
//    scanf("%d",&t);
//    while(t--)
//    {
//        L=0;
//        R=100;
//        scanf("%lf",&y);
//        if(y<6||y>807020306)
//           printf("No solution!\n");
//        else
//        {
//            while(R-L>1e-8)
//            {
//                mid=(R+L)/2.0;
//                cout << mid << endl;
//                if(find(mid,y))//返回值为1的时候表示x的值取大了，则继续在小于mid的区间寻找
//                   R=mid;
//                else
//                   L=mid;
//            }
//            printf("%.4f\n",mid);
////            cout << fixed <<setprecision(4) << mid << endl;
//        }
//    }
//    return 0;
//}
