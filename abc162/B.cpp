#include <bits/stdc++.h>
using namespace std;

#define lld long long

int main() {
    lld N;
    lld sum = 0;
    cin >> N;

    for(lld i = 1; i <= N; i++) {
        if(i % 3 == 0 && i % 5 == 0) {
        } else if(i % 3 == 0) {
        } else if(i % 5 == 0) {
        } else {
            sum += i;
        }
    }
    cout << sum << endl;

    return 0;
}