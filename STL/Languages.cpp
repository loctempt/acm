#include <iostream>
#include <string>
#include <map>
#include <stdio.h>
#include <cctype>
#include <sstream>
using namespace std;
void deladdpunct(string &str){
    //函数名没意义，实际是将字符串改为小写用的

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
        while(sep != '\n'){//回车后读入下一种语言
            cin >> examp;
            deladdpunct(examp);//--+
            dict[examp] = lang;//  +--忽略大小写保存键值对
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
        stringstream ss(wholeLine);//用sstream逐个读入单词
        while(ss >> text){
            deladdpunct(text);
            if(found == false){    //①
                if(dict.count(text)){
                    cout << dict[text] << endl;
                    found = true;
                }
            }
        }
        if(sep == '\n'){           //②
            found = false;         //①和②可以简化，实际上就是循环尾将found初始化为false，
        }                          //并且内层循环只在found为false时执行。不必写明
    }                              //sep=='\n'时才改为false；也不必单独在内层循环中
    return 0;                      //判断found的真假，直接在循环条件中写明就行了。
}                                  //至于②的条件总是满足，是因为读入字典时，字典以回车结束，
                                   //此后再没改变过sep的值，所以sep总是保存'\n'的。
