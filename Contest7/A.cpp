//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//#include <string>
//#include <queue>
//using namespace std;
//
//bool check(string strA, string strB) {
//    int len = strA.length();
//    if(strA == strB)
//        return true;
//    if(len & 1)
//        return false;
//    string subA1 = strA.substr(0, len / 2);
//    string subB1 = strB.substr(0, len / 2);
//    string subA2 = strA.substr(len / 2, len / 2);
//    string subB2 = strB.substr(len / 2, len / 2);
//    if(check(subA1, subB2) && check(subA2, subB1))//这里一定要先交错对比，再垂直对比，否则会在测试点89超时。
//        return true;
//    if(check(subA1, subB1) && check(subA2, subB2))
//        return true;
//    return false;
//}
//
//int main() {
//#ifdef TEST
//    freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    string strA, strB;
//    cin >> strA >> strB;
//    if(check(strA, strB))
//        cout << "YES" << endl;
//    else
//        cout << "NO" << endl;
//
//
//    return 0;
//}
