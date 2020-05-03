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
    ll N, cnt, maxv;
    string s;
    map<string, ll> m;
    cin >> N;
    for(ll i = 0; i < N; i++) {
        cin >> s;
        m[s] += 1;
    }

    maxv = 0;
    for(auto &x : m) {
        ll v = x.second;
        if(v > maxv)
            maxv = v;
    }

    for(auto it = m.begin(); it != m.end(); it++) {
        if(it->second == maxv) {
            cout << it->first << endl;
        }
    }

    return 0;
}
