#include <bits/stdc++.h>
using namespace std;

int f(int n){
    int res;
    
    if (n == 0 || n == 1){
        res = 1;
    }else{
        res = f(n-1)*n;
    }

    return res;
}

int main(){
    int n;
    cin >> n;

    cout << f(n) << endl;
    
    return 0;
}