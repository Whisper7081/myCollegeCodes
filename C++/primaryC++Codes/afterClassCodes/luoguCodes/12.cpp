/*设有 N×N 的方格图（N≤9），我们将其中的某些方格中填入正整数，而其他的方格中则放入数字 0。如下图所示（见样例）：
某人从图的左上角的 A 点出发，可以向下行走，也可以向右走，直到到达右下角的 B 点。在走过的路上，他可以取走方格中的数（取走后的方格中将变为数字 0）。

此人从 A 点到 B 点共走两次，试找出 2 条这样的路径，使得取得的数之和最大。

输入格式
输入的第一行为一个整数 N，表示 N×N 的方格图。

接下来的若干行，每行有三个整数 x,y,v，表示第 x 行第 y 列的方格中所放的数为 v。

一行单独的 0 表示输入结束。

输出格式
输出一个整数，表示 2 条路径上取得的数的最大总和。

输入输出样例
输入 #1复制

8
2 3 13
2 6  6
3 5  7
4 4 14
5 2 21
5 6  4
6 3 15
7 2 14
0 0  0
输出 #1复制

67
说明/提示
对于全部测试数据，1≤N≤9，1≤x,y≤N，1≤v≤30。
*/
#include <bits/stdc++.h>
using namespace std;

int a[15][15];
int dp[25][15][15];

int main()
{
    int n;
    cin >> n;

    int x, y, num;
    while (cin >> x >> y >> num)
    {
        if (x == 0 && y == 0 && num == 0)
            break;
        a[x][y] = num;
    }

    for (int step = 0; step <= 2 * n - 2; step++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int k = 1; k <= n; k++)
            {
                int j = step - i + 2;
                int l = step - k + 2;

                if (j < 1 || j > n || l < 1 || l > n)
                    continue;

                int val = a[i][j];
                if (i != k || j != l)
                    val += a[k][l];

                if (step == 0)
                {
                    dp[step][i][k] = val;
                    continue;
                }

                int best = 0;
                
                bool keytime = false;
                 
                if (i > 1 && k > 1)
                    best = max(best, dp[step - 1][i - 1][k - 1]);
                if (i > 1 && l > 1)
                    best = max(best, dp[step - 1][i - 1][k]);
                if (j > 1 && k > 1)
                    best = max(best, dp[step - 1][i][k - 1]);
                if (j > 1 && l > 1)
                    best = max(best, dp[step - 1][i][k]);

                dp[step][i][k] = best + val;
            }
        }
    }

    cout << dp[2 * n - 2][n][n] << endl;
    return 0;
}