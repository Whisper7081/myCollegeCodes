#include <bits/stdc++.h>
using namespace std;

// 高精度 × 低精度（用于算阶乘）
vector<int> multiply(vector<int> a, int b) {
    int carry = 0;
    for (int i = 0; i < a.size(); i++) {
        long long cur = 1LL * a[i] * b + carry;
        a[i] = cur % 10;
        carry = cur / 10;
    }
    while (carry > 0) {
        a.push_back(carry % 10);
        carry /= 10;
    }
    return a;
}

// 高精度 + 高精度（用于求和）
vector<int> add(vector<int> a, vector<int> b) {
    int carry = 0;
    int len = max(a.size(), b.size());
    vector<int> res;

    for (int i = 0; i < len; i++) {
        int digitA = (i < a.size() ? a[i] : 0);
        int digitB = (i < b.size() ? b[i] : 0);
        int sum = digitA + digitB + carry;
        res.push_back(sum % 10);
        carry = sum / 10;
    }
    if (carry > 0) res.push_back(carry);

    return res;
}

// 打印高精度数（从高位到低位）
void printBig(vector<int> num) {
    for (int i = num.size() - 1; i >= 0; i--) {
        cout << num[i];
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    vector<int> fact = {1};   // 当前阶乘，初始 = 1
    vector<int> sum = {0};    // 总和，初始 = 0

    for (int i = 1; i <= n; i++) {
        fact = multiply(fact, i);   // fact = fact × i = i!
        sum = add(sum, fact);       // sum += fact
    }

    printBig(sum);
    return 0;
}