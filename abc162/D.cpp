#include <bits/stdc++.h>
using namespace std;

#define lld long long

int main() {
    int N;
    lld sum = 0;
    string S;

    cin >> N;
    cin >> S;

    lld Rcnt[N + 1];
    lld Gcnt[N + 1];
    lld Bcnt[N + 1];

    Rcnt[N] = 0;
    Gcnt[N] = 0;
    Bcnt[N] = 0;

    for(int i = N - 1; i >= 0; i--) {
        if(S[i] == 'R') {
            Rcnt[i] = Rcnt[i + 1] + 1;
            Gcnt[i] = Gcnt[i + 1];
            Bcnt[i] = Bcnt[i + 1];
        } else if(S[i] == 'G') {
            Gcnt[i] = Gcnt[i + 1] + 1;
            Rcnt[i] = Rcnt[i + 1];
            Bcnt[i] = Bcnt[i + 1];
        } else if(S[i] == 'B') {
            Bcnt[i] = Bcnt[i + 1] + 1;
            Gcnt[i] = Gcnt[i + 1];
            Rcnt[i] = Rcnt[i + 1];
        }
    }

    for(int i = 0; i < N; i++) {
        for(int j = i + 1; j < N; j++) {
            if(S[i] == 'R' && S[j] == 'G') {
                sum += Bcnt[j + 1];
                if(j + j - i <= N && S[j + j - i] == 'B') {
                    sum -= 1;
                }
            } else if(S[i] == 'R' && S[j] == 'B') {
                sum += Gcnt[j + 1];
                if(j + j - i <= N && S[j + j - i] == 'G') {
                    sum -= 1;
                }
            } else if(S[i] == 'G' && S[j] == 'R') {
                sum += Bcnt[j + 1];
                if(j + j - i <= N && S[j + j - i] == 'B') {
                    sum -= 1;
                }
            } else if(S[i] == 'G' && S[j] == 'B') {
                sum += Rcnt[j + 1];
                if(j + j - i <= N && S[j + j - i] == 'R') {
                    sum -= 1;
                }
            } else if(S[i] == 'B' && S[j] == 'R') {
                sum += Gcnt[j + 1];
                if(j + j - i <= N && S[j + j - i] == 'G') {
                    sum -= 1;
                }
            } else if(S[i] == 'B' && S[j] == 'G') {
                sum += Rcnt[j + 1];
                if(j + j - i <= N && S[j + j - i] == 'R') {
                    sum -= 1;
                }
            }
        }
    }

    cout << sum << endl;

    return 0;
}