#include <iostream>
#include <cstdio>
#include <cctype>
#include <string>
using namespace std;
string input;
int num_check(int &pos){//可以在匹配重复次数后将printer中的now直接置于数字后一位。
    int num = 0, now = pos;
    while(isdigit(input[now])){
        num = num * 10 + (input[now] - '0');
        now++;
    }
    pos = now;
    return num;
}
//int parenthesis_finder(int start){//传入左括号的位置，返回括号中字符串的长度。
//    int cnt = 1, now = start + 1;
//    if(input[start] != '(')
//        return input.length();
//    while(now < input.length()){
//        if(input[now] == '(')
//            cnt++;
//        else if(input[now] == ')')
//            cnt--;
//        if(cnt == 0)
//            return (now - start - 1);
//        now++;
//    }
//}
int printer(int start){//传入起点。
    int repeat = 1, now = start;
    while(now < input.length() /*&& input[now]!= ')'*/){
        if(isdigit(input[now])){
            repeat = num_check(now);
        }
        else
            repeat = 1;
        if(isalpha(input[now])){//数字后是字母
            for(int i = 1; i <= repeat; i++)
                putchar(input[now]);
//            repeat = 1;
            now++;
        }
        if(input[now] == '('){//数字后不是字母
            int tempPos;
            for(int i = 1; i <= repeat; i++)
                tempPos = printer(now+1);
            now = tempPos;
        }
        else if(input[now] == ')'){
            return now+1;
        }
    }
}
int main(){
//
//    input = "2(2pen5aris2(cde)4x)";
//    printer(0);
//    int x = 0;
//    cout << num_check(x) << endl;
//    cout << x << endl;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> input;
        printer(0);
        printf("\n");
    }

    return 0;
}
//    #include <stdio.h>
//    #include <ctype.h>
//    #include <string.h>
//    char s[300];
//    int fun(int i)
//    {
//        int k,e;
//        k=0;
//        char c;
//        for(c=s[i++];i<strlen(s)&&c!=')';c=s[i++])
//        {
//            for(k=0;isdigit(c);c=s[i++])
//            k=k*10+c-'0';
//            if(!k) k=1;
//            if(c=='(')
//            {
//                while(k--) e=fun(i);
//                i=e;
//            }
//            else
//            {
//                while(k--) putchar(c);
//            }
//        }
//        if(c==')')  return i;
//    }
//    int main()
//    {
//        int N;
//        scanf("%d",&N);
//        while(N--)
//        {
//            scanf("%s",s);
//            fun(0);
//            printf("\n");
//        }
//        return 0;
//    }
