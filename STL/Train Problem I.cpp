#include <iostream>
#include <stack>
#include <string>
#include <cstring>
using namespace std;
int main(){

    stack<char> trainStack;
    string trainIn, trainOut;
    int n;
    while(cin >> n){
        int actionIndex = 0;
        while(!trainStack.empty())
            trainStack.pop();
        bool action[20];            //这数组用来保存入站和出站的过程。
        memset(action, 0, sizeof(action));//首先初始化为0；数组中0代表出站。
        cin >> trainIn >> trainOut;
        int sizeOfTrainIn = trainIn.length(), sizeCounter = 0;
        int i, j = 0;
        for(i = 0; i < sizeOfTrainIn; i++){
            trainStack.push(trainIn[i]);
            action[actionIndex++] = 1;  //火车一列一列地入站，将action中元素的值改为1，表示入站；每入一列，判断一次出站顺序是否有效。
            while(!trainStack.empty() && trainStack.top() == trainOut[j]){//检查当前栈顶的列车是否是首先出站的列车。
                trainStack.pop();       //如果栈顶列车可以按照出站书序出站，则弹出这个栈顶元素。
                actionIndex++;          //由于此时出站一列火车，将index自增，也就是保留action中元素的初值0，表示出站。
                j++;                    //j表示能够出站的列车数量。如果j == sizeOfTrainIn，也就是总的列车数量，说明所给的
            }                           //出站顺序是有效的。
        }
        if(j == sizeOfTrainIn){         //如上所述。
            cout << "Yes." << endl;
            for(int j = 0; j < n * 2; j++){
                if(action[j])
                    cout << "in" << endl;
                else
                    cout << "out" << endl;
            }
            cout << "FINISH" << endl;
        }
        else{
            cout << "No." << endl << "FINISH" << endl;
        }
    }

    return 0;
}
