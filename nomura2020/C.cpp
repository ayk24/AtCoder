#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<char, ll> pcl;

#define m0(x) memset(x, 0, sizeof(x))
#define all(x) x.begin(), x.end()
#define rep(i, n) for(int i = 0; i < (n); i++)
#define asort(x) sort(all(x));
#define dsort(x, t) sort(x.begin(), x.end(), greater<t>());
#define UNIQUE(v) v.erase(unique(v.begin(), v.end()), v.end());
#define MINS(m, s) m.insert(mp(s, 1));
#define MFIN(m, s) m.find(s) != m.end()
#define mp make_pair
#define pb push_back
#define INF (1 << 29)
const int mod = 1000000007;

int main() {
    ll n, ans, pre;
    ans = 0;
    ll a[100005];
    cin >> n;
    for(ll i = 0; i <= n; i++) {
        cin >> a[i];
    }

    for(ll i = 0; i <= n; i++) {
        if(a[0] > 0) {
            cout << "-1" << endl;
            exit(0);
        }
        if(i == n) {
            ans += a[i];
            break;
        }
        if(i == 0) {
            ans += 1;
            pre = 1;
        } else {
            ll div = max(0LL, a[i - 1] - a[i]);
            ll tmp = (pre - a[i]) * 2 / pow(2, div);
            if(tmp == 0) {
                tmp = 1;
            } else if(tmp < 0) {
                cout << "-1" << endl;
                exit(0);
            }

            ans += tmp + a[i];
            pre = tmp + a[i];
        }
    }

    cout << ans - 1 << endl;
    return 0;
}