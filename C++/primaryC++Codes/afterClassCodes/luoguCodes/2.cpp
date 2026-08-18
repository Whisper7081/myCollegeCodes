/*P1618 将 1,2,…,9 共 9 个数分成三组，分别组成三个三位数，且使这三个三位数的比例是 A:B:C，试求出所有满足条件的三个三位数，若无解，输出 No!!!。*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;

    if (A == 0)
    {
        cout << "No!!!" << endl;
        return 0;
    }

    bool found = false;

    for (int i = 123; i <= 987; i++)
    {
        if ((i * B) % A != 0 || (i * C) % A != 0)
        {
            continue;
        }

        int j = (i * B) / A;
        int k = (i * C) / A;

        if (j < 100 || j > 999 || k < 100 || k > 999)
        {
            continue;
        }

        string s = to_string(i) + to_string(j) + to_string(k);
        sort(s.begin(), s.end());

        if (s == "123456789")
        {
            cout << i << " " << j << " " << k << endl;
            found = true;
        }
    }

    if (!found)
    {
        cout << "No!!!" << endl;
    }

    return 0;
}