#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("chcp 65001 > nul");
    int s;
    cin >> s;
    string m = to_string(s);
    if (int i = 0; m[i] > 0 && m[i] < 10)
    {
        int n = (int)m.length();
        cout << "数据位数为" << n << endl;
    }
    else
    {
        cout << "无效数据" << endl;
    }
    return 0;
}

// to_srting 可以把数转化成字符串//