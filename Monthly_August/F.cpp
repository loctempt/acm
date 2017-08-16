//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//#include <queue>
//using namespace std;
//
//int carpet[100004][4];
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    int n;
//    while(cin >> n){
//        for(int i = 1; i <= n; i++)
//            for(int j = 0; j < 4; j++)
//                cin >> carpet[i][j];
//        int x, y, cnt = -1;
//        cin >> x >> y;
//        for(int i = n; i > 0; i--)
//            if(x >= carpet[i][0] && (x <= carpet[i][0] + carpet[i][2]) && y >= carpet[i][1] && (y <= carpet[i][1] + carpet[i][3])){
//                cnt = i;
//                break;
//            }
//        cout << cnt << endl;
//    }
//
//    return 0;
//}
