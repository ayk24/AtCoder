#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<ll, pll> ppll;

#define m0(x) memset(x, 0, sizeof(x))
#define all(x) x.begin(), x.end()
#define rep(i, n) for (int i = 0; i < (n); i++)
#define asort(x) sort(all(x));
#define dsort(x, t) sort(x.begin(), x.end(), greater<t>());
#define vuni(v) v.erase(unique(v.begin(), v.end()), v.end());
#define mins(m, s) m.insert(make_pair(s, 1));
#define mfin(m, s) m.find(s) != m.end()

#define dump(x) cout << #x << " = " << (x) << endl
#define YES(n) cout << ((n) ? "YES" : "NO") << endl
#define Yes(n) cout << ((n) ? "Yes" : "No") << endl

const int INF = 1e9;
const ll LINF = 1e18;
const int mod = 1e9 + 7;

int main() {
    ll N, A, B, sumA = 0, sumB = 0;
    cin >> N;
    vector<ppll> V(N);
    for (int i = 0; i < N; i++) {
        cin >> A >> B;
        sumA += A;
        V.push_back(make_pair(2 * A + B, make_pair(A, B)));
    }
    dsort(V, ppll);

    ll ans;
    for (int i = 0; i < N; i++) {
        sumA -= V[i].second.first;
        sumB += V[i].second.first + V[i].second.second;
        if (sumA < sumB) {
            ans = i + 1;
            break;
        }
    }

    cout << ans << endl;
    return 0;
}