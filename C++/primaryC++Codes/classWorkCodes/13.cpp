/*题目：输入一个 3 行 4 列的矩阵，输出它的转置（4 行 3 列）。*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("chcp 65001 > nul");
    
    int a[3][4];
    int b[4][3];

    // 1. 输入原矩阵
    cout << "请输入3行4列的矩阵：" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> a[i][j];
        }
    }

    // 2. 转置：行变列，列变行
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            b[j][i] = a[i][j]; // 注意：b是4行3列
        }
    }

    // 3. 输出转置后的矩阵（4行3列）
    cout << "转置后的矩阵：" << endl;
    for (int i = 0; i < 4; i++)
    { // b有4行
        for (int j = 0; j < 3; j++)
        { // b有3列
            cout << b[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}