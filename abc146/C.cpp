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
const int mod = 1000000007;

ll digsum(ll n, ll k) {
    ll res = 0;
    while(n > 0) {
        res++;
        n /= k;
    }
    return res;
}

int main() {
    ll a, b, x;
    cin >> a >> b >> x;

    ll left = 0, right = min(x, (ll)pow(10, 9)), mid, _min = LLONG_MAX, ans = 0;
    if(a + b <= x) {
        while(left < right) {
            mid = (left + right) / 2;
            ll sum = a * mid + b * digsum(mid, 10);
            if(sum > x) {
                right = mid;
            } else if(sum <= x) {
                left = mid + 1;
                if(_min > x - sum) {
                    _min = x - sum;
                    ans = mid;
                }
            }
        }
        ans++;
        if(a * ans + b * digsum(ans, 10) > x) {
            ans--;
        }
    }
    cout << ans << endl;
    return 0;
}