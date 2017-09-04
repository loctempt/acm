//#include <bits/stdc++.h>
//using namespace std;
//
//double calculate(double num1, char op, double num2) {
//    switch(op) {
//    case '+':
//        return num1 + num2;
//    case '-':
//        return num1 - num2;
//    case '*':
//        return num1 * num2;
//    case '/':
//        return num1 / num2;
//    }
//}
//
//int main() {
//#ifdef TEST
//    freopen("test.txt", "r", stdin);
//#endif // TEST
//
//    map<char, int> mapping; // 优先级映射表。
//    mapping['+'] = 1;
//    mapping['-'] = 1;
//    mapping['*'] = 2;
//    mapping['/'] = 2;
//    mapping['('] = 3;
//    mapping[')'] = 3;
//    mapping['#'] = 4;
//    string s;
//    while(getline(cin, s)) {
//        if(s == "")
//            continue;
//        stringstream ss;
//        ss << s;
//        cout << "Expr.: " << s << endl;
//        stack<double> num;
//        stack<char> op;
//        char temp;
//        double tempNum;
//        bool lastInputWasAChar, firstEnter = true;
//        while(~(temp = ss.get())) {
//            if('0' <= temp && temp <= '9') {
//                ss.unget();
//                ss >> tempNum;
//                if(!op.empty()){
//                    if(op.top()=='#'){ // 处理位于表达式头部的负数。
//                        tempNum = -tempNum;
//                        op.pop();
//                    }
//                }
//                num.push(tempNum);
////                cout << tempNum << endl;
//                lastInputWasAChar = false;
//            }
//            else {
////                cout << temp << endl;
//                if(!op.empty()) {
//                    char temptemp = op.top();
//                    if(temp == ')') {
//                        while(op.top() != '(') {
//                            double num1, num2;
//                            num2 = num.top();
//                            num.pop();
//                            num1 = num.top();
//                            num.pop();
//                            num.push(calculate(num1, op.top(), num2));
//                            op.pop();
//                        }
//                        op.pop();
//                        if(op.top() == '#'){ // 处理负的括号表达式。
//                            num.top() = -num.top();
//                            op.pop();
//                        }
//                    }
//                    else if(temp == '-' && temptemp == '(' && lastInputWasAChar)
//                        op.push('#');
//                    else if(mapping[temp] > mapping[temptemp] || temptemp == '(' || temptemp == '#') {
//                        op.push(temp);
//                    }
//                    else {
//                        op.pop();
//                        double num1, num2;
//                        num2 = num.top();
//                        num.pop();
//                        num1 = num.top();
//                        num.pop();
//                        num.push(calculate(num1, temptemp, num2));
//                        op.push(temp);
//                    }
//                }
//                else {
//                    if(temp == '-' && firstEnter)
//                        op.push('#');
//                    else
//                        op.push(temp);
//                    firstEnter = false;
//                }
//                lastInputWasAChar = true;
//            }
//        }
//        while(!op.empty()) { // 如果输入结束后运算符栈不为空，则进行最后一次计算。
//            double num1, num2;
//            num2 = num.top();
//            num.pop();
//            num1 = num.top();
//            num.pop();
//            num.push(calculate(num1, op.top(), num2));
//            op.pop();
//        }
//        cout << fixed << setprecision(4) << num.top() << endl << endl;
//    }
//
//    return 0;
//}
/*
-(1+2)-(4+5)
-1-2-3-4
(-(1+(2)))
(123.45*(2*(567.8-19)))
5*(-6+1)
*/
