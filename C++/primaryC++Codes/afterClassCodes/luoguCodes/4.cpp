#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x) {
    if (x < 2) return false;
    if (x == 2) return true;
    if (x % 2 == 0) return false;
    for (int i = 3; i * i <= x; i += 2) {
        if (x % i == 0) return false;
    }
    return true;
}

bool isPalindrome(int x) {
    string s = to_string(x);
    int l = 0, r = s.length() - 1;
    while (l < r) {
        if (s[l] != s[r]) return false;
        l++;
        r--;
    }
    return true;
}

int main() {
    int a, b;
    cin >> a >> b;

    // 一位数
    for (int i = a; i <= min(b, 9); i++) {
        if (isPrime(i)) cout << i << endl;
    }

    // 两位数：只有 11
    if (a <= 11 && b >= 11 && isPrime(11)) {
        cout << 11 << endl;
    }

    // 三位数
    for (int i = max(a, 100); i <= min(b, 999); i++) {
        if (isPalindrome(i) && isPrime(i)) {
            cout << i << endl;
        }
    }

    // 五位数
    for (int i = max(a, 10000); i <= min(b, 99999); i++) {
        if (isPalindrome(i) && isPrime(i)) {
            cout << i << endl;
        }
    }

    // 七位数
    for (int i = max(a, 1000000); i <= min(b, 9999999); i++) {
        if (isPalindrome(i) && isPrime(i)) {
            cout << i << endl;
        }
    }

    // 八位数：所有 8 位回文数都能被 11 整除，没有质数，直接跳过

    return 0;
}