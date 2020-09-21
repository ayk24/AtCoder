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
    ll n, m, k, a, b, left, right;
    ll sum_a[200005], sum_b[200005];
    sum_a[0] = 0, sum_b[0] = 0;
    cin >> n >> m >> k;

    for(ll i = 0; i < n; i++) {
        cin >> a;
        sum_a[i + 1] = sum_a[i] + a;
    }
    for(ll i = 0; i < m; i++) {
        cin >> b;
        sum_b[i + 1] = sum_b[i] + b;
    }

    left = 0, right = n + m;
    while(left < right) {
        ll mid = (left + right) / 2 + 1;
        bool flag = false;
        for(int i = 0; i <= mid; i++) {
            if(i <= n && mid - i <= m && sum_a[i] + sum_b[mid - i] <= k) {
                flag = true;
                break;
            }
        }
        if(flag) {
            left = mid;
        } else {
            right = mid - 1;
        }
    }

    cout << left << endl;

    return 0;
}