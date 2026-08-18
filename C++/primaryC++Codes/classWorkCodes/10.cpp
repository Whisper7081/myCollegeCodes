#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("chcp 65001 > nul");
    string s;
    cin >> s;

    int count = 0;
    bool isValid = true;
    int i = 0;

    while (i < (int)s.length())
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            count++;
        }
        else
        {
            isValid = false;
            break;
        }
        i++;
    }

    if (!isValid)
    {
        cout << "输入数据有误" << endl;
    }
    else
    {
        cout << "该数字位数为" << count << endl;
    }

    return 0;
}