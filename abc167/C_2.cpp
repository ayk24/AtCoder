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

// 20200529 bit全探索
int main() {
    int n, m, x;
    cin >> n >> m >> x;

    vi c(n);
    int a[12][12];
    int ans = INF;
    rep(i, n) {
        cin >> c[i];
        rep(j, m) cin >> a[i][j];
    }

    rep(bit, 1 << n) {
        int cost = 0;
        vi alg(m);
        rep(i, n) {
            if(bit & (1 << i)) {
                cost += c[i];
                rep(j, m) alg[j] += a[i][j];
            }
        }
        bool ok = true;
        rep(j, m) {
            if(alg[j] < x)
                ok = false;
        }
        if(ok) {
            ans = min(ans, cost);
        }
    }

    if(ans == INF) {
        cout << "-1" << endl;
    } else {
        cout << ans << endl;
    }

    return 0;
}