/*输入 n 个数和一个目标值 target，判断是否存在两个不同的数，它们的和等于 target。（假设 n ≤ 1000）*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[10005];
    int n, target;
    cin >> n >> target;
    for (int k = 0; k < n; k++)
    {
        cin >> a[k];
    } /*所有的比较的前提是输入已经OK了，要先执行输入语句才能执行输出语句*/
    bool isFound = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (a[i] + a[j] == target)
            {
                isFound = true;
                break;
            }
        }
        if (isFound)
        {
            break;
        }
    }
    cout << (isFound ? "Yes" : "No") << endl;
    return 0;
}