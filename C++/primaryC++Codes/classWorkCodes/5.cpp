/*
简单的 if-else 语句
if (条件) {                if 要顶格
    // 条件为真时执行       这个地方的条件写 写的时候跟if差TAB
} else {                   else贴着大括号写
    // 条件为假时执行       这个地方同样，跟上一个条件保持同缩进
}

多条件语句if-else if-else语句
if  (条件) {
    //
} else if {
    //
}else {
    //
}

符号	含义	               示例
&&	    且（两边都为真才真）	a > 0 && a < 10
||	    或（至少一边为真就真）	a < 0 || a > 10
!	    非（取反）	           !(a == 5)

if (条件1) {
    if (条件2) {
        语句1;
    } else {
        语句2;
    }
}


*/

/* 输入三个整数，输出其中的最大值 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a >= b and a >= c)
    {
        cout << a << endl;
    }
    else if (b >= c and b >= a)
    {
        cout << b << endl;
    }
    else if (c >= b and c >= a)
    {
        cout << c << endl;
        return 0;
    }
}
