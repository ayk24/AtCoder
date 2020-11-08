#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> pll;

#define m0(x) memset(x, 0, sizeof(x))
#define all(x) x.begin(), x.end()
#define rep(i, n) for(int i = 0; i < (n); i++)
#define asort(x) sort(all(x));
#define dsort(x, t) sort(x.begin(), x.end(), greater<t>());
#define UNIQUE(v) v.erase(unique(v.begin(), v.end()), v.end());
#define MINS(m, s) m.insert(make_pair(s, 1));
#define MFIN(m, s) m.find(s) != m.end()
#define INF (1 << 29)
const int mod = 1000000007;

int main() {
    ll n, d;
    ll x[200005], y[200005];
    cin >> n >> d;
    for(ll i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    ll cnt = 0;
    for(ll i = 0; i < n; i++) {
        double x2 = x[i] * x[i];
        double y2 = y[i] * y[i];
        double dist = sqrt(x2 + y2);
        if(dist <= d) {
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}