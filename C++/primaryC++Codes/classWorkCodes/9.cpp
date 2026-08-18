#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("chcp 65001 > nul");
    string s;
    cin >> s;

    bool found = false;

    // 注意：循环到 s.length() - 2，防止越界
    for (int k = 0; k <= (int)s.length() - 3; k++)
    {
        if (s[k] == 'a' && s[k + 1] == 'b' && s[k + 2] == 'c')
        {
            found = true;
            break; // 找到了就立刻结束循环
        }
    }

    if (found)
    {
        cout << "abc被包含在该字符串中" << endl;
    }
    else
    {
        cout << "abc不被包含在该字符串中" << endl;
    }

    return 0;
}