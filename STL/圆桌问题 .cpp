#include<iostream>
#include<cstring>
using namespace std;
bool persons[65536];
int main(){

    unsigned int n, step, position, counter;
    while(cin >> n >> step){
        memset(persons, 1, sizeof(persons));//1��ʾ����
        position = 0;
        for(int i = 0; i < n; i++){
            counter = 1;                    //ounter���ڱ���
            int temp = position;
            while(counter < step){          //�������ҵ����Ĵ���
                temp++;                     //-----------------------+
                if(temp == 2 * n)           //-+                     |
                    temp = 0;               //-+--���������ص���� |
                while(persons[temp] == 0){  //                       +--�����Ѿ���ɱ������
                temp++;                     //                       |
                if(temp == 2 * n)           //                       |
                    temp = 0;               //                       |
                }                           //-----------------------+
                counter++;
            }
            persons[temp] = 0;
            while(persons[temp] == 0){      //--+
                temp++;                     //  |
                if(temp == 2 * n)           //  +--��״̬0010001�����������̱�Ϊ��0000001��Ϊʹ
                    temp = 0;               //  |  position�����Ѿ���ɱ�����ˣ�����ĩβ��1����Ҫ
            }                               //--+  �����Ĳ���
            position = temp;
        }
        bool flag = 0;                      //flag�����ò��ţ���Ϊ��Ŀ�Ĵ𰸸����費һ�¡�
        for(int i = 0; i < 2 * n; i++){     //�����ע�͵ĳ�����Եõ�����ȷ����
            if(persons[i]){
                cout << "G";
//                flag = 0;
            }
            else if(persons[i] == 0){
                cout << "B";
//                flag = 0;
            }
            if((i + 1) % 50 == 0){
                cout << endl;
//                flag = 1;
            }
        }
//        if(flag == 0)
//            cout << endl;
        cout << endl << endl;
    }

    return 0;
}
//#include <stdio.h>
//#include <string.h>
//
//#define maxn 32800
//
//bool arr[maxn << 1];
//
//int main() {
//    int n, m, i, j, cnt, cas = 0;
//    while(scanf("%d%d", &n, &m) == 2) {
//        memset(arr, 0, sizeof(bool) * n * 2);
//        for(i = j = 0; i < n; ++i) {
//            cnt = 0;
//            while(true) {
//                if(arr[j] == false) {
//                    if(++cnt == m) break;
//                }
//                if(++j == 2 * n) j = 0;
//            }
//            arr[j] = true;
//        }
//        for(i = 0; i < n * 2; ++i) {
//            putchar(arr[i] ? 'B' : 'G');
//            if((i + 1) % 50 == 0) putchar('\n');
//        }
//        putchar('\n'); putchar('\n');
//    }
//    return 0;
//}
