#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;

#define mem0(x) memset(x, 0, sizeof(x))
#define asort(x) sort(x.begin(), x.end());
#define dsort(x, t) sort(x.begin(), a.end(), greater<t>());
#define UNIQUE(v) v.erase(unique(v.begin(), v.end()), v.end());
#define MINS(m, s) m.insert(mp(s, 1));
#define MFIN(m, s) m.find(s) != m.end()
#define mp make_pair
#define pb push_back

ll convert(ll x, ll n) {
    ll y = 0, i = 0, z;
    while(x > 0) {
        z = x % n;
        y += z * pow(10, i);
        x = x / n;
        i++;
    }
    return y;
}

int main() {
    ll N, K, tmp;
    cin >> N >> K;
    tmp = convert(N, K);
    cout << to_string(tmp).length() << endl;
    return 0;
}