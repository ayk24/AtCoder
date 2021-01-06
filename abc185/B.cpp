#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> pll;

#define m0(x) memset(x, 0, sizeof(x))
#define all(x) x.begin(), x.end()
#define rep(i, n) for (int i = 0; i < (n); i++)
#define asort(x) sort(all(x));
#define dsort(x, t) sort(x.begin(), x.end(), greater<t>());
#define vuni(v) v.erase(unique(v.begin(), v.end()), v.end());
#define mins(m, s) m.insert(make_pair(s, 1));
#define mfin(m, s) m.find(s) != m.end()

#define dump(x) cout << #x << " = " << (x) << endl
#define YES(n) cout << ((n) ? "YES" : "NO") << endl
#define Yes(n) cout << ((n) ? "Yes" : "No") << endl

const int INF = 1e9;
const ll LINF = 1e18;
const int mod = 1e9 + 7;

int main() {
    ll N, M, T;
    ll A[1005], B[1005];
    cin >> N >> M >> T;
    for (ll i = 0; i < M; i++) {
        cin >> A[i] >> B[i];
    }

    ll ans = N;
    for (ll i = 0; i < M; i++) {
        if (i == 0) {
            ans -= A[i];
        } else {
            ans -= A[i] - B[i - 1];
        }

        if (ans <= 0) {
            cout << "No" << endl;
            return 0;
        }
        ans += B[i] - A[i];
        ans = min(ans, N);
    }

    ans -= T - B[M - 1];
    if (ans <= 0) {
        cout << "No" << endl;
        return 0;
    }

    cout << "Yes" << endl;
    return 0;
}