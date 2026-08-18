/*
假设一个表达式由数字、英文字母（小写）、运算符（+、-、*、/）和左右小（圆）括号构成，以 @ 作为表达式的结束符。请编写一个程序检查表达式中的左右圆括号是否匹配，若匹配，则输出 YES；否则输出 NO。表达式长度小于 255，左圆括号少于 20 个。

输入格式
一行：表达式。

输出格式
一行：YES 或 NO。

输入输出样例
输入 #1复制

2*(x+y)/(1-x)@
输出 #1复制

YES
输入 #2复制

(25+x)*(a*(a+b+b)@
输出 #2复制

NO
说明/提示
表达式长度小于 255，左圆括号少于 20 个。*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<int> st;
    char a[400];
    bool yes = true;

    for(int i=0;i<400;i++){
        cin >> a[i] ;
    }

    for(int i=0;i<400;i++){
        if (a[i] == '('){
            st.push(a[i]);
        }else if (a[i] == ')')
        {
            char m = st.top();
            if (m == '(')continue;
            else {
                yes = false;
                break;
            }
        }
    }

    if (yes == true)
    {
        cout <<"YES"<<endl;
    }else{
        cout <<"NO"<<endl;
    }

    return 0;
    
}
