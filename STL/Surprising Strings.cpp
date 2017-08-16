#include <iostream>
#include <vector>
#include <utility>
#include <string>
using namespace std;
int main(){

    pair<char, char> myPair;
    vector<pair<char,char> > myVec;
    string str;
    while(cin >> str){
        int lenOfStr = str.length();
        if(str == "*")
            break;
        myVec.clear();
        if(str.length() > 2){
            int i;
            for(i = 0; i < str.length()-2; i++){//按D的所有可能长度循环。
                bool isThisUnique = true;
                myVec.clear();
                for(int j = 0; j < lenOfStr - i - 1; j++){//在确保不越界的情况下将pair的first向右移动，找出所有pair。
                    myPair = make_pair(str[j], str[j + i + 1]);
                    int k;
                    for(k = 0; k < myVec.size(); k++){//判断是否为D-Unique
                        if(myVec[k].first == myPair.first && myVec[k].second == myPair.second){
                            isThisUnique = false;
                            break;
                        }
                    }
                    if(k == myVec.size())
                        myVec.push_back(make_pair(str[j], str[j + i + 1]));
                    else
                        break;
                }
                if(!isThisUnique)
                    break;
            }
            if(i == str.length() - 2)
                cout << str << " is surprising." << endl;
            else
                cout << str << " is NOT surprising." << endl;
        }
        else
            cout << str << " is surprising." << endl;
    }

    return 0;
}
