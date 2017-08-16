//#include <iostream>
//#include <cstdio>
//#include <cstring>
//using namespace std;
//
//int m, n;
//int dic[104];
//bool inDic[1004];
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    while(cin >> m >> n){
//        for(int i = 0; i < 104; i++)
//            dic[i] = 1003;
//        memset(inDic, false, sizeof(inDic));
//        int pos = 0, temp, cnt = 0;
//        for(int i = 0; i < n; i++){
//            cin >> temp;
//            if(!inDic[temp]){
//                inDic[dic[pos]] = false;
//                dic[pos] = temp;
//                inDic[temp] = true;
//                cnt++;
//                pos++;
//            }
//            if(pos == m)
//                pos = 0;
//        }
//        cout << cnt << endl;
//    }
//
//    return 0;
//}
