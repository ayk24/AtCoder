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
    ll n, l, t1, t2, t3, num;
    cin >> n >> l;

    ll x[100005];
    m0(x);
    for(ll i = 0; i < n; i++) {
        cin >> num;
        x[num] = 1;
    }

    cin >> t1 >> t2 >> t3;

    ll dp[200000];
    dp[0] = 0;
    for(ll i = 1; i < 200000; i++) {
        dp[i] = INF;
    }

    ll act1, act2, act3;
    for(ll i = 0; i < l; i++) {
        // 行動1
        if(x[i] == 0) {
            act1 = t1;
        } else {
            act1 = t1 + t3;
        }
        dp[i + 1] = min(dp[i + 1], act1 + dp[i]);

        // 行動2
        if(i + 2 <= l) {
            if(x[i] == 0) {
                act2 = t1 + t2;
            } else {
                act2 = t1 + t2 + t3;
            }
            dp[i + 2] = min(dp[i + 2], act2 + dp[i]);
        } else {
            if(x[i] == 0) {
                act2 = t1 / 2 + t2 / 2;
            } else {
                act2 = t1 / 2 + t2 / 2 + t3;
            }
            dp[i + 1] = min(dp[i + 1], act2 + dp[i]);
        }

        // 行動3
        if(i + 4 <= l) {
            if(x[i] == 0) {
                act3 = t1 + t2 * 3;
            } else {
                act3 = t1 + t2 * 3 + t3;
            }
            dp[i + 4] = min(dp[i + 4], act3 + dp[i]);
        } else {
            ll diff = l - i;
            if(x[i] == 0) {
                act3 = t1 / 2 + t2 * diff - t2 / 2;
            } else {
                act3 = t1 / 2 + t2 * diff - t2 / 2 + t3;
            }
            dp[i + diff] = min(dp[i + diff], act3 + dp[i]);
        }
    }

    cout << dp[l] << endl;
    return 0;
}