#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
#include <queue>
using namespace std;
const int max1 = 1e4+4, max2 = 1e6+4;

char W[max1], T[max2];
int Next[max1];

void getNext(){
    int len = strlen(W);
    Next[0] = Next[1] = 0;
    int j;
    for(int i = 1; i < len; i++){
        j = Next[i];
        while(j && W[i] != W[j])
            j = Next[j];
        if(W[i] == W[j])
            Next[i + 1] = j + 1;
        else
            Next[i + 1] = 0;
    }
}

void KMPSearch(int start){
    int len = strlen(T), sampleLen = strlen(W);
    int j = 0, cnt = 0;
    for(int i = start; i < len; i++){
        while(j && T[i] != W[j])
            j = Next[j];
        if(T[i] == W[j])
            j++;
        if(j == sampleLen){
            cnt++;
            j = Next[j];
        }
    }
    cout << cnt << endl;
}

int main(){
#ifdef TEST
freopen("test.txt", "r", stdin);
#endif // TEST

    int tt;
    cin >> tt;
    while(tt--){
        scanf("%s", W);
        scanf("%s", T);
//        int cnt = 0, i = 0;
//        while(i < strlen(T)){
//            int temp;
//            if((temp = KMPSearch(i)) != -1){
//                cnt++;
//                i = temp + 1;
//            }
//            else
//                break;
//        }
//        cout << cnt << endl;
        getNext();
        KMPSearch(0);
    }

    return 0;
}
