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
        bool action[20];            //����������������վ�ͳ�վ�Ĺ��̡�
        memset(action, 0, sizeof(action));//���ȳ�ʼ��Ϊ0��������0�����վ��
        cin >> trainIn >> trainOut;
        int sizeOfTrainIn = trainIn.length(), sizeCounter = 0;
        int i, j = 0;
        for(i = 0; i < sizeOfTrainIn; i++){
            trainStack.push(trainIn[i]);
            action[actionIndex++] = 1;  //��һ��һ�е���վ����action��Ԫ�ص�ֵ��Ϊ1����ʾ��վ��ÿ��һ�У��ж�һ�γ�վ˳���Ƿ���Ч��
            while(!trainStack.empty() && trainStack.top() == trainOut[j]){//��鵱ǰջ�����г��Ƿ������ȳ�վ���г���
                trainStack.pop();       //���ջ���г����԰��ճ�վ�����վ���򵯳����ջ��Ԫ�ء�
                actionIndex++;          //���ڴ�ʱ��վһ�л𳵣���index������Ҳ���Ǳ���action��Ԫ�صĳ�ֵ0����ʾ��վ��
                j++;                    //j��ʾ�ܹ���վ���г����������j == sizeOfTrainIn��Ҳ�����ܵ��г�������˵��������
            }                           //��վ˳������Ч�ġ�
        }
        if(j == sizeOfTrainIn){         //����������
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
