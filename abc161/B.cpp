#include <bits/stdc++.h>
using namespace std;

int main(void) {
    long long int N, M, all, tmp1;
    long double tmp2;
    all = 0;
    cin >> N >> M;

    long long int A[N];
    memset(A, 0, N);

    for(int i = 0; i < N; i++) {
        cin >> A[i];
        all += A[i];
    }

    for(int i = 0; i < N; i++) {
        for(int j = N - 1; j > i; j--) {
            if(A[j] < A[j - 1]) {
                tmp1 = A[j];
                A[j] = A[j - 1];
                A[j - 1] = tmp1;
            }
        }
    }

    tmp2 = (long double)all / 4 / (long double)M;

    if((long double)A[N - M] >= tmp2) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
