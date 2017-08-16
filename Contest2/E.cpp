#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <map>
#include <cstring>
using namespace std;

char status[27], sample[100004];
//bool isAccessed[100005];
map<char,int> stat;

int main(){
#ifdef TEST
freopen("test.txt", "r", stdin);
#endif // TEST

    status[1] = 'a';
    for(int i = 2; i <= 26; i++)
        status[i] = status[i-1]+1;

    int m;
    while(cin >> m){
        for(int i = 1; i<= 26; i++)
            stat[status[i]] = 0;
        scanf("%s", sample);

        int len = strlen(sample), sc = 1, last = 0;
        for(int i = 0; i < len; i++){
            stat[sample[i]]++;
        }

        for(int i = 0; i < len-m+1;){
            int Pos = i;
            char tempC = sample[i];
                for(int j = i+1; j < i+m; j++){
                    if(sample[j] <= tempC){
                        Pos = j;
                        tempC = sample[j];
                    }
                }
                while(status[sc]<sample[Pos])sc++, last = 0;
                if(sample[Pos]==status[sc])last++;
                i = Pos+1;
        }

        for(int i = 1; i < sc; i++)
            for(int j = 0; j < stat[status[i]]; j++)
                putchar(status[i]);
        for(int i = 0; i < last; i++)
            putchar(status[sc]);
        cout << endl;
    }

    return 0;
}














//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <map>
//#include <cstring>
//using namespace std;
//
//char status[27], sample[100004];
////bool isAccessed[100005];
//map<char,int> stat;
//
//int main(){
//#ifdef TEST
//freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    status[1] = 'a';
//    for(int i = 2; i <= 26; i++)
//        status[i] = status[i-1]+1;
//
//    int m;
//    while(cin >> m){
//        for(int i = 1; i<= 26; i++)
//            stat[status[i]] = 0;
//        memset(sample, 0, sizeof(sample));
////        memset(isAccessed, false, sizeof(isAccessed));
//        scanf("%s", sample);
//        int len = strlen(sample), sc = 1, last = 0;
//        for(int i = 0; i < len; i++){
//            stat[sample[i]]++;
//        }
//        for(int i = 0; i < len-m+1;){
////            bool no = true;
//            int Pos = i;
////            while(sc <= 26 && no){
//                for(int j = i; j < i+m; j++){
//                    if(sample[j] <= sample[i])
//                        Pos = j;
//                }
//                while(status[sc]<sample[Pos])sc++, last = 0;
//                if(sample[Pos]==status[sc])last++, i = Pos+1;
//                else if(sample[Pos]<status[sc])i = Pos+1;
////                if(no){
////                    sc++;
////                    last = 0;
////                }
////            }
//        }
//        for(int i = 1; i < sc; i++)
//            for(int j = 0; j < stat[status[i]]; j++)
//                putchar(status[i]);
//        for(int i = 0; i < last; i++)
//            putchar(status[sc]);
//        cout << endl;
//    }
//
//    return 0;
//}
