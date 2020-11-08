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
// const int mod = 1000000007;

ll modPow(ll a, ll n, ll p) {
    if(n == 0)
        return 1;
    if(n == 1)
        return a;
    if(n % 2 == 1) {
        ll res = a * modPow(a, n - 1, p);
        if(res > p) {
            cout << "large" << endl;
            exit(0);
        } else {
            return res;
        }
    }
    long long t = modPow(a, n / 2, p);
    return t * t;
}

int main() {
    ll a, r, n, m;
    cin >> a >> r >> n;
    m = modPow(r, n - 1, 1000000000);
    if(m == 0) {
        cout << "large" << endl;
        exit(0);
    }
    if(a * m > 1000000000) {
        cout << "large" << endl;
    } else {
        cout << a * m << endl;
    }
    return 0;
}