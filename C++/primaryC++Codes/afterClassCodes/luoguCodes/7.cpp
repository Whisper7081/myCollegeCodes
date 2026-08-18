//P5705 输入一个不小于 100 且小于 1000，同时包括小数点后一位的一个浮点数，例如 123.4 ，要求把这个数字翻转过来，变成 4.321 并输出。
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a;
    cin >> a;
    int b = a*10;
    string c = to_string(b);
    reverse(c.begin(),c.end());
    stringstream ss(c);
    int d;
    ss >> d;
    double f = d/1000.0;
    cout << f << endl;
    return 0;
}