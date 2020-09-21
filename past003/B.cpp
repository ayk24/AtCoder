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
    ll n, m, q, op, nown, nowm;
    cin >> n >> m >> q;
    bool nscore[100005][55];
    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j < m; j++) {
            nscore[i][j] = false;
        }
    }

    ll mscore[55];
    for(ll i = 0; i < m; i++) {
        mscore[i] = n;
    }

    for(ll i = 0; i < q; i++) {
        cin >> op;
        if(op == 1) {
            cin >> nown;
            nown--;
            ll score = 0;
            for(ll j = 0; j < m; j++) {
                if(nscore[nown][j]) {
                    score += mscore[j];
                }
            }
            cout << score << endl;
        } else {
            cin >> nown >> nowm;
            nown--;
            nowm--;
            mscore[nowm]--;
            nscore[nown][nowm] = true;
        }
    }
    return 0;
}