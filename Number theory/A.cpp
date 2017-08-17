//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//#include <queue>
//using namespace std;
//const int maxn = 504;
//
//int m, n;
//bool flag = false, manySolutionFlag = false;
//double mat[maxn<<1][maxn];
//
//int gauss(){
//    for(int i = 1; i <= n; i++){
//        bool flag = false;
//        for(int j = i; j <= m; j++){
//            if(mat[j][i] != 0){
//                swap(mat[j], mat[i]);
//                flag = true;
//                break;
//            }
//        }
//        if(!flag){
//            manySolutionFlag = true;
//            continue;
//        }
//        for(int j = i+1; j <= m; j++){
//            double c = mat[j][i]/mat[i][i];
//            for(int k = 1; k <= n+1; k++)
//                mat[j][k] = mat[j][k] - mat[i][k] * c;
//        }
//    }
//    for(int i = 1; i <= m; i++){
//        int pos = 1;
//        while(mat[i][pos] == 0 && pos <= n) pos++;
//        if(pos == n+1 && mat[i][pos+1] != 0)
//            return 0; // no solution.
//    }
//    if(manySolutionFlag)
//        return -1;    // multiple solutions.
//    for(int i = n; i >= 1; i--){
//        for(int j = i - 1; j >= 1; j--){
//            double c = mat[j][i] / mat[i][i];
//            for(int k = n+1; k >= 1; k--)
//                mat[j][k] = mat[j][k] - mat[i][k] * c;
//        }
//    }
//    return 1;         // normal status.
//}
//
//void init(){
//    flag = manySolutionFlag = false;
//}
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    while(cin >> n >> m){
//        init();
//        for(int i = 1; i <= m; i++){
//            for(int j = 1; j <= n+1; j++){
//                scanf("%lf", &mat[i][j]);
//            }
//        }
//        int ans = gauss();
//        if(ans == 0)
//            cout << "No solutions" << endl;
//        else if(ans == -1)
//            cout << "Many solutions" << endl;
//        else
//            for(int i = 1; i <= n; i++)
//                cout << (long long)mat[i][i] << endl;
//    }
//
//    return 0;
//}
