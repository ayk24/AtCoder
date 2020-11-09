#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> pll;

#define m0(x) memset(x, 0, sizeof(x))
#define all(x) x.begin(), x.end()
#define rep(i, n) for(int i = 0; i < (n); i++)
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
    ll N, A[200005], p[200005], q[200005];
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }
    p[0] = A[0], q[0] = A[0];

    for(int i = 0; i < N; i++) {
        p[i + 1] = p[i] + A[i + 1];
        q[i + 1] = max(q[i], p[i + 1]);
    }

    ll ans = 0, x = 0;
    for(int i = 0; i < N; i++) {
        ans = max(ans, x + q[i]);
        x += p[i];
    }
    cout << ans << endl;

    return 0;
}