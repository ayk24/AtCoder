#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;

#define mem(x, y) memset(x, y, sizeof(x))
#define mp make_pair
#define pb push_back

int main() {
    ll N, K, ans, min, max, tmp;
    cin >> N >> K;
    ll A[200003];
    mem(A, 0);

    for(ll i = 1; i <= N; i++) {
        A[i] = A[i - 1] + i;
    }

    for(ll i = K; i <= N; i++) {
        min = A[i - 1];
        max = A[N] - A[N - i];
        ans += max - min + 1;
    }
    ans += 1;

    cout << ans % 1000000007 << endl;

    return 0;
}
