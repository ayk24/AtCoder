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
#define UNIQUE(a) a.erase(unique(a.begin(), a.end()), a.end());
#define MINS(m, s) m.insert(mp(s, 1));
#define MFIN(m, s) m.find(s) != m.end()
#define mp make_pair
#define pb push_back
#define INF (1 << 29)
const int mod = 1000000007;

int main() {
    int n, k;
    cin >> n >> k;
    vi a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < min(k, 100); i++) {
        vi tmp(n + 1);
        for(int j = 0; j < n; j++) {
            int l = max(0, j - a[j]);
            int r = min(n - 1, j + a[j]);
            tmp[l]++;
            if(r + 1 <= n)
                tmp[r + 1]--;
        }
        for(int j = 1; j < n; j++) {
            tmp[j] += tmp[j - 1];
        }
        }

    for(int i = 0; i < n; ++i) {
        cout << a[i];
        cout << ((i == n - 1) ? '\n' : ' ');
    }
}