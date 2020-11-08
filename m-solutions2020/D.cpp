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
    ll n, ansm, ansk, cnt;
    ll a[85];
    ansm = 1000;

    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    a[n] = 0;

    int si = a[0];
    cnt = 0;
    for(int i = 1; i <= n; i++) {
        if(a[i] > a[i - 1]) {
            cnt++;
        } else if(a[i] < a[i - 1]) {
            if(cnt > 0) {
                ansk = ansm / si;
                ansm += ansk * (a[i - 1] - si);
                cnt = 0;
            }
            si = a[i];
        }
    }

    cout << ansm << endl;

    return 0;
}