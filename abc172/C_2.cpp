#include <bits/stdc++.h>
using namespace std;

#define lld long long
#define pi pair<int, int>
#define pl pair<lld, lld>
#define mem0(x) memset(x, 0, sizeof(x))
#define fillnum(x, n) fill(begin(x), end(x), n)
#define asort(x) sort(x.begin(), x.end())
#define dsort(x, t) sort(x.begin(), x.end(), greater<t>())

int main() {
    lld N, M, K;
    lld A, B;
    lld A_sum[200001], B_sum[200001];
    A_sum[0] = 0;
    B_sum[0] = 0;

    cin >> N >> M >> K;
    for(int i = 0; i < N; i++) {
        cin >> A;
        A_sum[i + 1] = A_sum[i] + A;
    }
    for(int i = 0; i < M; i++) {
        cin >> B;
        B_sum[i + 1] = B_sum[i] + B;
    }

    lld left = 0, right = N + M;
    while(left < right) {
        lld mid = (left + right) / 2 + 1;
        bool flg = false;
        for(int i = 0; i <= mid; i++) {
            if(i <= N && mid - i <= M && A_sum[i] + B_sum[mid - i] <= K) {
                flg = true;
                break;
            }
        }
        if(flg) {
            left = mid;
        } else {
            right = mid - 1;
        }
    }
    cout << left << endl;
}