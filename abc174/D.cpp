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
    ll n, minc;
    cin >> n;

    char c[200005];
    for(ll i = 0; i < n; i++) {
        cin >> c[i];
    }

    // 全部白
    ll cnt1 = 0;
    for(ll i = 0; i < n; i++) {
        if(c[i] == 'R') {
            cnt1++;
        }
    }

    // 全部赤
    ll cnt2 = 0;
    for(ll i = 0; i < n; i++) {
        if(c[i] == 'W') {
            cnt2++;
        }
    }

    // 左に赤を持っていく
    ll cnt3 = 0;
    for(ll i = 0; i < cnt1; i++) {
        if(c[i] == 'W') {
            cnt3++;
        }
    }

    minc = min(cnt1, cnt2);
    minc = min(minc, cnt3);
    cout << minc << endl;

    return 0;
}