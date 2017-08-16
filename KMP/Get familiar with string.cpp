//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//#include <string>
//#include <queue>
//using namespace std;
//
//string sample[10];
//
//bool check(string s, int n){
//    for(int i = 1; i <= n-1; i++){
//        if(sample[i].find(s) == string::npos)
//            return false;
//    }
//    return true;
//}
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    int T;
//    cin >> T;
//    while(T--){
//        int n;
//        cin >> n;
//        string res;
//        for(int i = 0; i < n; i++)
//            cin >> sample[i];
//        for(int i = 3; i <= sample[0].length(); i++){
//            for(int j = 0; j + i <= sample[0].length(); j++){
//                string temp(sample[0],j,i);
//                if(check(temp, n)){
//                    if(temp.length() == res.length())
//                        res = temp < res ? temp : res;
//                    else{
//                        res = temp.length() > res.length() ? temp : res;
//                    }
//                }
//            }
//        }
//        if(res.length() < 3)
//            cout << "no significant commonalities" << endl;
//        else
//            cout << res << endl;
//
//    }
//
//    return 0;
//}
