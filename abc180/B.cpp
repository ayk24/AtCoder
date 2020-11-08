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
    ll N, ans1 = 0, ans2 = 0, ans3 = 0;
    ll x[100005];
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> x[i];
        ans1 += abs(x[i]);
        ans2 += pow(x[i], 2);
        ans3 = max(ans3, abs(x[i]));
    }

    cout << ans1 << endl;
    cout << fixed << setprecision(10) << sqrt(ans2) << endl;
    cout << ans3 << endl;

    return 0;
}