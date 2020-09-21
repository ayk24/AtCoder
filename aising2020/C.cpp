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
    ll n, ans;
    ll cnt[100005];
    cin >> n;
    for(ll i = 1; i <= 100; i++) {
        for(ll j = 1; j <= 100; j++) {
            for(ll k = 1; k <= 100; k++) {
                ans = i * i + j * j + k * k + i * j + j * k + k * i;
                if(ans <= n) {
                    cnt[ans]++;
                }
            }
        }
    }

    for(ll i = 1; i <= n; i++) {
        cout << cnt[i] << endl;
    }

    return 0;
}