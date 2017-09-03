//#include <iostream>
//#include <cstring>
//#include <cstdio>
//#include <vector>
//#include <algorithm>
//typedef unsigned long long ull;
//typedef long long ll;
//using namespace std;
//const int maxn = 2e3+4;
//
//ull c[]{6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
//struct bigInteger{
//    static const int BASE = 1e8;
//    static const int WIDTH = 8;
//    vector<int> s;
//
//    bigInteger(ll num = 0){*this = num;}
//    bigInteger operator = (ll num){
//        s.clear();
//        do{
//            s.push_back(num % BASE);
//            num /= BASE;
//        }while(num);
//        return *this;
//    }
//    bigInteger operator = (const string &str){
//        s.clear();
//        int x, len = (str.length()-1) / WIDTH + 1;
//        for(int i = 0; i < len; i++){
//            int end = str.length() - i*WIDTH;
//            int start = max(0, end - WIDTH);
//            sscanf(str.substr(start, end-start).c_str(), "%d", &x);
//            s.push_back(x);
//        }
//    }
//    bigInteger operator + (const bigInteger &b) const{
//        bigInteger c;
//        c.s.clear();
//        for(int i = 0, g = 0; ; i++){
//            if(g == 0 && i >= s.size() && i >= b.s.size()) break;
//            int x = g;
//            if(i < s.size()) x += s[i];
//            if(i < b.s.size()) x += b.s[i];
//            c.s.push_back(x % BASE);
//            g = x / BASE;
//        }
//        return c;
//    }
//    bigInteger operator += (const bigInteger &b){
//        *this = *this + b;
//        return *this;
//    }
//    friend ostream& operator << (ostream &out, const bigInteger &x){
//        out << x.s.back();
//        for(int i = x.s.size()-2; i >= 0; i--){
//            char buf[20];
//            sprintf(buf, "%08d", x.s[i]);
//            for(int j = 0; j < strlen(buf); j++)
//                out << buf[j];
//        }
//        return out;
//    }
//    friend istream& operator >> (istream &in, bigInteger &x){
//        string s;
//        if(!(in >> s)) return in;
//        x = s;
//        return in;
//    }
//};
//bigInteger d[maxn];
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    ull n;
//    d[0] = 1;
//    for(int i = 0; i <= maxn; i++){
//        for(int j = 0; j < 10; j++)
//            if(!(i==0&&j==0) && i+c[j]<=maxn){
//                d[i+c[j]] += d[i];
////                if(i+c[j] == 6)
////                    cout << "haha i: " << i << " j: " << j << " d[i]: " << d[i] << endl;
//            }
//    }
////    cout << "debug: " << endl;
////    for(int i = 0; i < 10; i++){
////        cout << "i = " << i << " :  " << d[i] << endl;
////    }
////    cout << "end." << endl;
//    while(cin >> n){
//        bigInteger ans = 0;
//        for(int i = 1; i <= n; i++)
//            ans += d[i];
//        if(n > 5)
//            ans += 1;
//        cout << ans << endl;
//    }
//
//    return 0;
//}
