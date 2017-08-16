//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
////#define TEST
//using namespace std;
//
//char sample[41];
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    int T, n, P, lastP, cursorP;
//    cin >> T;
//    while(T--){
//
//        cin >> n;
//
//        lastP = cursorP = 0;
//        for(int i = 0; i < n; i++){//»¹Ô­À¨ºÅÅÅÁÐ
//            cin >> P;
//            if(P > lastP){
//                int k;
//                for(k = cursorP; k - cursorP < P - lastP; k++)
//                    sample[k] = '(';
//                sample[k] = ')';
//                cursorP = k+1;
//            }
//            if(P == lastP){
//                sample[cursorP++] = ')';
//            }
//            lastP = P;
//        }
////        cout << sample << endl;
//
//        for(int i = 0; i < 2*n; i++){
//            if(sample[i] == ')'){
//                int right = 1, left = 0;
//                for(int j = i - 1; j >= 0; j--){
//                    if(sample[j] == ')')
//                        right++;
//                    if(sample[j] == '(')
//                        left--;
//                    if(left + right == 0)
//                        break;
//                }
//                cout << right << " ";
//            }
//        }
//        cout << endl;
//    }
//
//    return 0;
//}
