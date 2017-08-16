#include <iostream>
#include <string>
#include <map>
#include <stdio.h>
#include <cctype>
#include <sstream>
using namespace std;
void deladdpunct(string &str){
    //������û���壬ʵ���ǽ��ַ�����ΪСд�õ�

    for(int i = 0; i < str.length(); i++){
        str[i] = tolower(str[i]);
    }
}
int main(){

    map<string,string> dict;
    int T;
    string lang, examp;
    char sep;
    cin >> T;
    for(int t = 0; t < T; t++){
        cin >> lang;
        sep = getchar();
        while(sep != '\n'){//�س��������һ������
            cin >> examp;
            deladdpunct(examp);//--+
            dict[examp] = lang;//  +--���Դ�Сд�����ֵ��
            sep = getchar();   //--+
        }
    }
    string text;
    string wholeLine;
    bool found = false;
    while(getline(cin, wholeLine)){
        for(int i = 0; i < wholeLine.length(); i++)
            if(wholeLine[i] == ',' || wholeLine[i] == ';' || wholeLine[i] == '.' || wholeLine[i] == '(' || wholeLine[i] == ')' || wholeLine[i] == '!' || wholeLine[i] == '?')
                wholeLine[i] = ' ';
        stringstream ss(wholeLine);//��sstream������뵥��
        while(ss >> text){
            deladdpunct(text);
            if(found == false){    //��
                if(dict.count(text)){
                    cout << dict[text] << endl;
                    found = true;
                }
            }
        }
        if(sep == '\n'){           //��
            found = false;         //�ٺ͢ڿ��Լ򻯣�ʵ���Ͼ���ѭ��β��found��ʼ��Ϊfalse��
        }                          //�����ڲ�ѭ��ֻ��foundΪfalseʱִ�С�����д��
    }                              //sep=='\n'ʱ�Ÿ�Ϊfalse��Ҳ���ص������ڲ�ѭ����
    return 0;                      //�ж�found����٣�ֱ����ѭ��������д�������ˡ�
}                                  //���ڢڵ������������㣬����Ϊ�����ֵ�ʱ���ֵ��Իس�������
                                   //�˺���û�ı��sep��ֵ������sep���Ǳ���'\n'�ġ�
