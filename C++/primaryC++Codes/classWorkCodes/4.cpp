#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("chcp 65001 > nul");
    double a = 5.0;
    int b = 7;
    cout << a * b << endl;
    auto result = a * b;
    cout << "计算结果是" << result << endl;
    cout << result / 2;
    return 0;
}

/*
% （取余数）的三大用途：
1 判断奇偶性
if (n % 2 == 0) cout << "偶数";
else cout << "奇数"；
2 取一个数的最后几位
int x = 12345;
cout << x % 10 << endl;   // 5（个位数）
cout << x % 100 << endl;  // 45（后两位）
③ 循环数组下标（环形）
int arr[5] = {1, 2, 3, 4, 5};
for (int i = 0; i < 100; i++) {
    cout << arr[i % 5];   // i=0→arr[0], i=5→arr[0], 循环
}
*/