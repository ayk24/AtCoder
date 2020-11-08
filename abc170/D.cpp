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

vector<ll> enum_div(ll n) {
    vector<ll> res;
    for(ll i = 1; i * i <= n; ++i) {
        if(n % i == 0) {
            res.push_back(i);
            if(i != 1 && i * i != n) {
                res.push_back(n / i);
            }
        }
    }
    return res;
}

int main() {
    ll n;
    ll check[1000005];
    m0(check);
    
    cin >> n;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
        check[a[i]]++;
    }

    ll ans = 0;
    for(ll i = 0; i < n; i++) {
        bool flag = true;
        for(auto x : enum_div(a[i])) {
            if(x != a[i] && check[x] != 0)
                flag = false;
            if(check[a[i]] != 1)
                flag = false;
        }
        if(flag) {
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}