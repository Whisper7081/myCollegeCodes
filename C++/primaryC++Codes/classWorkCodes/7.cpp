/*输入一个整数 n，然后输入 n 个整数，输出这 n 个数的最大值*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[10086];
    for (int k = 0; k < n; k++)
    {
        cin >> arr[k];
    }
    int maxNumber = arr[0];
    for (int k = 1; k < n; k++)
    {
        if (arr[k] > maxNumber)
        {
            maxNumber = arr[k];
        }
        else
        {
            maxNumber = maxNumber;
        }
    }
    cout << maxNumber << endl;
    return 0;
}
