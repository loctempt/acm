#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;
const int maxn = 1e5+10;

char s[maxn], ss[30], decrypt[300], b[maxn];
int Next[maxn];

void getNext(char str[]){
    int len = strlen(str);
    int j;
    Next[0] = Next[1] = 0;
    for(int i = 1; i < len; i++){
        j = Next[i];
        while(j && str[i] != str[j])
            j = Next[j];
        if(str[i] == str[j])
            Next[i + 1] = j + 1;
        else
            Next[i + 1] = 0;
    }
}

int main(){
#ifdef TEST
freopen("test.txt", "r", stdin);
#endif // TEST

    int T;
    cin >> T;
    while(T--){
        scanf("%s%s", ss, s);
        memset(decrypt, 0, sizeof(decrypt));
        int ssLen = strlen(ss), sLen = strlen(s);
        for(int i = 0; i < 26; i++)
            decrypt[ss[i]] = 'a' + i;
//        cout << decrypt+'a' << endl;
        for(int i = 0; i < sLen; i++){//Decryption string s.
            if(i < (sLen+1)/2)
                b[i] = decrypt[s[i]];
            else
                b[i] = s[i];
        }
        getNext(b);//Find out the length of remaining plain text.
        int k = sLen;
        while(Next[k] > sLen/2)//Finally, the value of Next[k] is the length of the remaining plain text.
            k = Next[k];
        cout << s;
        for(int i = Next[k]; i < sLen - Next[k]; i++)//Expend the remaining plain text to its original length.
            putchar(decrypt[s[i]]);
        cout << endl;
    }

    return 0;
}
