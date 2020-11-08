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
    ll n, y;
    cin >> n >> y;

    for(ll i = 0; i <= n; i++) {
        for(ll j = 0; i + j <= n; j++) {
            int k = n - i - j;
            int sum = i * 10000 + j * 5000 + k * 1000;
            if(sum == y) {
                cout << i << " " << j << " " << k << endl;
                exit(0);
            }
        }
    }
    cout << "-1 -1 -1" << endl;
    return 0;
}