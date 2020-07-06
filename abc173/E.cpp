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
#define MINS(m, s) m.insert(mp(s, 1));
#define MFIN(m, s) m.find(s) != m.end()
#define INF (1 << 29)
const int mod = 1000000007;

void castMod(ll &left) {
    if(left >= mod) {
        left %= mod;
        left += mod;
        left %= mod;
    }
}

int main() {
    ll n, k, tmp, z_cnt, ans;
    priority_queue<ll> minus;
    priority_queue<ll, vector<ll>, greater<ll>> minus_g;
    priority_queue<ll, vector<ll>, greater<ll>> plus;

    z_cnt = 0;
    cin >> n >> k;
    for(ll i = 0; i < n; i++) {
        cin >> tmp;
        if(tmp > 0) {
            plus.push(tmp);
        } else if(tmp == 0) {
            z_cnt++;
        } else {
            minus.push(tmp);
            minus_g.push(tmp);
        }
    }

    ans = 1;
    if(plus.empty() && k % 2 != 0) {
        if(z_cnt == 0) {
            for(ll i = 0; i < k; i++) {
                ans *= minus.top(), minus.pop();
                castMod(ans);
            }
        }
    } else if(k == n) {
        while(!plus.empty()) {
            ans *= plus.top(), plus.pop();
            castMod(ans);
        }
        while(!minus.empty()) {
            ans *= minus.top(), minus.pop();
            castMod(ans);
        }
    } else {
        ll tmp_p = 0, tmp_m = 0;
        for(ll i = 0; i < k; i++) {
            if(!plus.empty() && !minus_g.empty()) {
                if(plus.top() > abs(minus_g.top())) {
                    ans *= plus.top();
                    tmp_p = plus.top(), plus.pop();
                } else {
                    ans *= minus_g.top();
                    tmp_m = minus_g.top(), minus_g.pop();
                }
            } else if(!plus.empty()) {
                ans *= plus.top();
                tmp_p = plus.top(), plus.pop();
            } else if(!minus_g.empty()) {
                ans *= minus_g.top();
                tmp_m = minus_g.top(), minus_g.pop();
            }
            castMod(ans);
        }
        if(ans < 0) {
            ll max1, max2;
            max1 = ans / tmp_p * minus_g.top();
            max2 = ans / tmp_m * plus.top();
            ans = max(max1, max2);
            castMod(ans);
        }
    }

    if(ans < 0) {
        cout << mod + ans << endl;
    } else {
        cout << ans << endl;
    }

    return 0;
}