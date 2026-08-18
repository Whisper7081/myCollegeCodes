//P1217 写一个程序来找出范围 [a,b](5≤a<b≤100,000,000)（一亿）间的所有回文质数。
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    for (int i = a; i <= b; i++) {
        // 1. 转字符串判断回文
        string m = to_string(i);
        string t = "";
        for (int j = m.length() - 1; j >= 0; j--) {
            t += m[j];
        }

        if (m != t) continue;  // 不是回文，跳过

        // 2. 判断质数
        bool isPrime = true;
        if (i < 2) isPrime = false;
        for (int k = 2; k * k <= i; k++) {
            if (i % k == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << i << endl;
        }
    }

    return 0;
}
