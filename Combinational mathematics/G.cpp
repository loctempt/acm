#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
#include <queue>
using namespace std;
const int maxn = 20;

int factorial[maxn];
string str;

void calcFac(){
    factorial[0] = 1;
    for(int i = 1; i < maxn; i++)
        factorial[i] = i * factorial[i - 1];
}

int countSmaller(int pos){
    int ret = 0;
    for(int i = pos + 1; i < str.length(); i++)
        if(str[i] < str[pos]) ret++;
    return ret;
}

int main(){
#ifdef TEST
freopen("test.txt", "r", stdin);
#endif // TEST

    calcFac();
    int T;
    cin >> T;
    while(T--){
        cin >> str;
        int ans = 0, len = str.length();
        for(int i = 0; i < len; i++){                       // ��������ַ������п���չ����
            ans += countSmaller(i)*factorial[len - 1 - i];
        }
        cout << ans+1 << endl;                              // �ֵ�ӵ�һҳ��ʼ����Ϊչ�������һ��
    }

    return 0;
}
