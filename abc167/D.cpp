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
    int n;
    ll k;
    cin >> n >> k;
    vector<int> a(n);
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> s;
    vector<int> ord(n + 1, -1);
    
    int c = 1, l = 0, v = 1;
    while(ord[v] == -1) {
        ord[v] = s.size();
        s.push_back(v);
        v = a[v - 1];
    }
    c = s.size() - ord[v];
    l = ord[v];

    if(k < l)
        cout << s[k] << endl;
    else {
        k -= l;
        k %= c;
        cout << s[l + k] << endl;
    }
    return 0;
}