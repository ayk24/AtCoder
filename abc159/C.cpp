#include <bits/stdc++.h>
using namespace std;

int main() {
    double L, v, w, h;
    cin >> L;

    v = L / 3;
    L = L - v;
    w = L / 2;
    L = L - w;
    h = L;

    printf("%.7f\n", v * w * h);
    return 0;
}
