#include <bits/stdc++.h>
using namespace std;

#define lld long long

int gcd(int a, int b) {
    int t;          // 補助変数
    while(b != 0) { // 他方が0になるまで
        t = a % b;
        a = b;
        b = t; // 一方を剰余に置き換える
    }
    return a; // 他方が0になったときの一方がGCD
}

int gcd3(int a, int b, int c) {
    int s, t;
    s = gcd(a, b);
    t = gcd(c, s);
    return t;
}

int main() {
    lld K;
    lld sum = 0;
    cin >> K;

    for(size_t i = 1; i <= K; i++) {
        for(size_t j = 1; j <= K; j++) {
            for(size_t k = 1; k <= K; k++) {
                sum += gcd3(i, j, k);
            }
        }
    }

    cout << sum << endl;

    return 0;
}
