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

string N;
ll ans = LINF;
bool flg[20];

void solved(ll n) {
    if(N.size() == n) {
        ll d = 0;
        ll cnt = 0;
        for(int i = 0; i < N.size(); i++) {
            if(flg[i]) {
                d *= 10;
                d += N[i] - '0';
            } else {
                cnt++;
            }
        }
        if(N.size() != cnt && d % 3 == 0) {
            ans = min(ans, cnt);
        }
        return;
    }
    flg[n] = true;
    solved(n + 1);
    flg[n] = false;
    solved(n + 1);
}

int main() {
    cin >> N;
    m0(flg);
    solved(0);
    if(ans == LINF) {
        cout << "-1" << endl;
    } else {
        cout << ans << endl;
    }
    return 0;
}