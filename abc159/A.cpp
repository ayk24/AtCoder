#include <bits/stdc++.h>
using namespace std;

int facctorialMethod(int k);

int main() {
    int N, M;
    cin >> N >> M;

    if(N == 1 && M == 1 || N == 0 && M == 0) {
        cout << 0 << endl;
    } else if(N == 1 || N == 0) {
        cout << facctorialMethod(M - 1) << endl;
    } else if(M == 1 || M == 0) {
        cout << facctorialMethod(N - 1) << endl;
    } else if(N == 2 && M == 2) {
        cout << 2 << endl;
    } else if(N == 2) {
        cout << 1 + facctorialMethod(M - 1) << endl;
    } else if(M == 2) {
        cout << facctorialMethod(N - 1) + 1 << endl;
    } else if(N == 3 && M == 3) {
        cout << 2 << endl;
    } else if(N == 3) {
        cout << 3 + facctorialMethod(M - 1) << endl;
    } else if(M == 3) {
        cout << facctorialMethod(N - 1) + 3 << endl;
    } else {
        cout << facctorialMethod(N - 1) + facctorialMethod(M - 1) << endl;
    }

    return 0;
}

int facctorialMethod(int k) {
    int sum = 0;
    for(int i = 1; i <= k; ++i) {
        sum += i;
    }
    return sum;
}