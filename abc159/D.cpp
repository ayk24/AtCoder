#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll N;
    ll A[200005];
    ll cnt[200005];
    memset(cnt, 0, sizeof(cnt));

    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> A[i];
        A[i]--;
        cnt[A[i]]++;
    }

    ll ans = 0;
    for(int i = 0; i < N; i++) {
        if(cnt[i] > 1) {
            ans += (cnt[i]) * (cnt[i] - 1) / 2;
        }
    }
    for(int i = 0; i < N; i++) {
        cout << ans - (cnt[A[i]] - 1) << endl;
    }
}