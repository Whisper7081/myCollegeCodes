/*P1035 找出最小的整数n，使得其级数求和后大于整数k*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin >> k;
    double sum = 0.00;
    for (int i = 1;i < 10000086;i++)
    {
        sum = sum + 1.0/i;
        if (sum > k)
        {
            cout << i << endl;
            break;
        }
        else continue;
    }
    
    return 0;
}
