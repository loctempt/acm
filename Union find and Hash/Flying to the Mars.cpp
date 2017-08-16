//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//#include <queue>
//#include <string>
//#include <map>
//using namespace std;
//
//int a[3004];
//int BKDRHash(char* s)
//{
//    long long seed=131;
//    long long hash=0;
//    while(*s=='0')s++;//这点很重要，因为0000345645和34564是一个数，但是如果不处理的话会对应到不同的Hash值
//    while(*s)
//    {
//        hash=hash*seed+(*s++);
//    }
//    return (hash & 0x7FFFFFFF);
//}
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//    ios_base::sync_with_stdio(false);
//    int x;
//    while(cin >> x){
//        char sample[34];
//        int maxNumOfBroomsticks = 1;
//        memset(a, 0, sizeof(a));
//        for(int i = 0; i < x; i++){
//            cin >> sample;
//            int hashVal = BKDRHash(sample);
//            a[i] = hashVal;
//        }
//        sort(a, a+x);
//        int man = 1;
//        for(int i = 1; i < x; i++)
//            if(a[i]>a[i-1])
//                man = 1;
//            else{
//                man++;
//                maxNumOfBroomsticks = max(maxNumOfBroomsticks,man);
//            }
//        cout << maxNumOfBroomsticks << endl;
//    }
//
//    return 0;
//}
