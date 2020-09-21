#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> pll;

#define m0(x) memset(x, 0, sizeof(x))
#define all(x) x.begin(), x.end()
#define rep(i, n) for(int i = 0; i < (n); i++)
#define asort(x) sort(all(x));
#define dsort(x, t) sort(x.begin(), x.end(), greater<t>());
#define dump(x)  cout << #x << " = " << (x) << endl
#define UNIQUE(v) v.erase(unique(v.begin(), v.end()), v.end());
#define MINS(m, s) m.insert(make_pair(s, 1));
#define MFIN(m, s) m.find(s) != m.end()
#define YES(n) cout << ((n) ? "YES" : "NO" ) << endl
#define Yes(n) cout << ((n) ? "Yes" : "No" ) << endl

const int INF = 1e9;
const ll LINF = 1e18;
const int mod = 1e9+7;

int main(){
    ll n;
    cin >> n;

    vector<ll> l(n);
    for(ll i = 0; i < n; i++) {
        cin >> l[i];
    }
    asort(l);

    ll cnt = 0;
    for(ll i = 0; i < n; i++) {
        for(ll j = i + 1; j < n; j++) {
            for (ll k = j + 1; k < n; k++) {
                if(l[i] + l[j] > l[k] && l[j] + l[k] > l[i] 
                && l[k] + l[i] > l[j] && l[i] != l[j] && l[j] != l[k] && l[k] != l[i]){
                    cnt++;
                }
            }
        }
    }

    cout << cnt << endl;
    return 0;
}