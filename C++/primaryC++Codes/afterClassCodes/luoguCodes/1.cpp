/*P10008 将 1,2,…,9 共 9 个数分成 3 组，分别组成 3 个三位数，且使这 3 个三位数构成 1:2:3 的比例，试求出所有满足条件的 3 个三位数。*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    for(int a = 123 ;a < 330; a++)
    {
        int b = 2*a;
        int c = 3*a;
        string s = to_string(a) + to_string(b) + to_string(c);
        sort(s.begin(), s.end());
        if(s == "123456789")
        {
            cout << a << " " << b << " " << c <<endl;
        }
    }
    return 0;
}