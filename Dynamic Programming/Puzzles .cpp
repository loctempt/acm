//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//using namespace std;
//const int INF = 1e8;
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    int n, m, temp;
//    while(cin >> n){
//        cin >> m;
//        vector<int> sample;
//        for(int i = 0; i < m; i++){
//            cin >> temp;
//            sample.push_back(temp);
//        }
//        sort(sample.begin(), sample.end());
//        int least = INF;
//        for(int i = 0; i < m - n + 1; i++)
//            if(sample[i+n-1] - sample[i] < least)
//                least = sample[i+n-1] - sample[i];
//        cout << least << endl;
//    }
//
//    return 0;
//}
