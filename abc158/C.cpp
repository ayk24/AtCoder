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
#define INF (1 << 29)
const int mod = 1000000007;

int main() {
    ll A, B, ansa, ansb, res;
    cin >> A >> B;
    res = -1;
    for(ll i = 1; i <= 11000; i++) {
        ansa = i * 0.08;
        ansb = i * 0.1;
        if(ansa == A && ansb == B) {
            res = i;
            break;
        }
    }
    cout << res << endl;
    return 0;
}