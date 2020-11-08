#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> pll;

#define m0(x) memset(x, 0, sizeof(x))
#define all(x) x.begin(), x.end()
#define rep(i, n) for(int i = 0; i < (n); i++)
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
    int N;
    cin >> N;
    vector<pair<int, int>> V(N);

    for(int i = 0; i < N; i++) {
        cin >> V[i].first >> V[i].second;
    }

    bool flag = false;
    for(int i = 0; i < N; i++) {
        int xi = V[i].first;
        int yi = V[i].second;
        for(int j = i + 1; j < N; j++) {
            int xj = V[j].first;
            int yj = V[j].second;
            for(int k = j + 1; k < N; k++) {
                int xk = V[k].first;
                int yk = V[k].second;
                if((xj - xi) * (yk - yi) == (xk - xi) * (yj - yi)) {
                    flag = true;
                }
            }
        }
    }

    Yes(flag);

    return 0;
}