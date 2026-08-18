// 题目：输入一个字符串，输出其中大写字母的个数//
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int capitalNumber = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' and s[i] <= 'Z')
        {
            capitalNumber = capitalNumber + 1;
        }
    }
    cout << capitalNumber << " ";
    return 0;
}

// 之所以能比较大小，是因为用的是char的数据类型，然后可以通过比较等价的ASCII码的方式来实现比较//
// 但在python中，不推荐这样使用，可以用已经存在的x.isupper()这个函数实现，而且可以识别unicode文字//
/*
string fullName;
getline(cin, fullName);       // 读取一整行，包含空格
cout << fullName << endl;     // 输出：Zhang San
*/