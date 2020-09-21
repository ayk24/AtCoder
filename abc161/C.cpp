#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int N, K, min1, tmp1, tmp2, tmp3;
    min1 = 1000000000000000001;
    cin >> N >> K;

    tmp1 = N / K;
    tmp2 = N - tmp1 * K;
    tmp3 = -1 * (N - (tmp1 + 1) * K);
    min1 = min(tmp2, tmp3);

    cout << min1 << endl;
    return 0;
}
