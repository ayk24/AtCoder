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

int n, m, q, ans;
vi a, b, c, d;

void dfs(vi A) {
    if(A.size() == n + 1) {
        int now = 0;
        for(int i = 0; i < q; i++) {
            if(A[b[i]] - A[a[i]] == c[i]) {
                now += d[i];
            }
        }
        ans = max(ans, now);
        return;
    }
    A.push_back(A.back());
    while(A.back() <= m) {
        // for(int i = 0; i < A.size(); i++) {
        //     cout << A[i] << " ";
        // }
        cout << endl;
        dfs(A);
        A.back()++;
    }
}

int main() {
    cin >> n >> m >> q;
    a = b = c = d = vi(q);
    for(int i = 0; i < q; i++) {
        cin >> a[i] >> b[i] >> c[i] >> d[i];
    }
    dfs(vector<int>(1, 1));
    cout << ans << endl;
    return 0;
}