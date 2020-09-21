#include <bits/stdc++.h>
using namespace std;

int main(void) {
    long long int X, tmp, ans;
    cin >> X;

    tmp = X / 500;
    ans = X / 500 * 1000;
    X = X - 500 * tmp;

    ans += X / 5 * 5;

    cout << ans << endl;

    return 0;
}