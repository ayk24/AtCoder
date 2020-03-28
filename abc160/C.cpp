#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int K, N, tmp, min1;
    min1 = 1000000;
    cin >> K >> N;

    long long int A[N];
    memset(A, 0, N);
    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for(int i = 0; i < N; i++) {
        if(i == N - 1) {
            tmp = 0;
            if(min1 > K - (K - (A[i] - A[tmp]))) {
                min1 = K - (K - (A[i] - A[tmp]));
            }
        } else {
            tmp = i + 1;
            if(min1 > K - (A[tmp] - A[i])) {
                min1 = K - (A[tmp] - A[i]);
            }
        }
    }

    cout << min1 << endl;
    return 0;
}
