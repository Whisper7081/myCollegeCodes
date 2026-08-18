#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> dq;
    int a[100][100];
    long long b[100][100];
    int m, n;
    long long sum = 0;
    cin >> m >> n;

    for (int i; i = 0; i < m; i++)
    {
        for (int j; j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i; i = 0; i < m; i++)
    {
        for (int j; j = 0; j < n; j++)
        {
            dq.push_back(a[i][j]);
        }
        int q = 1;
        while (true)
        {
            int k = dq.front();
            int p = dq.back();

            if (k > p && q < n)
            {
                b[i][q] = k * (1 << q);
                q = q + 1;
            }
            else if (k < p && q < n)
            {
                b[i][q] = p * (1 << q);
                q = q + 1;
            }
            else if (q == n - 1)
            {
                b[i][q] = k * (1 << q);
                break;
            }
        }
    }

    for (int i; i = 0; i < m; i++)
    {
        for (int j; j = 0; j < n; j++)
        {
            sum = sum + b[i][j];
        }
    }

    cout << sum << endl;
    return 0;
}