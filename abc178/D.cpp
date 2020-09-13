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
    ll s;
    cin >> s;

    ll cnt[10005];
    m0(cnt);
    for(int i = 3; i < 10000; i++) {
        cnt[i] = 1;
    }

    for(ll i = 3; i <= s; i++) {
        for(ll j = 3; j <= s - 3; j++) {
            cnt[i + j] += cnt[i];
            cnt[i + j] = cnt[i + j] % mod;
        }
    }

    cout << cnt[s] << endl;

    return 0;
}