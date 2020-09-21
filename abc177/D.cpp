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

using Graph = vector<ll>; // グラフ型
Graph G[200005];          // グラフ

bool seen[200005];

ll dfs(int v) {
    seen[v] = true; // v を訪問済にする

    // v から行ける各頂点 next_v について
    ll cnt = 1;
    for(auto next_v : G[v]) {
        if(seen[next_v])
            continue;       // next_v が探索済だったらスルー
        cnt += dfs(next_v); // 再帰的に探索
    }
    return cnt;
}

int main() {
    ll n, m, a, b;
    m0(seen);
    
    cin >> n >> m;
    for(ll i = 0; i < m; i++) {
        cin >> a >> b;
        a--, b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    ll ma = 0;
    for(ll i = 0; i < n; i++) {
        if(seen[i])
            continue;
        ma = max(ma, dfs(i));
    }

    cout << ma << endl;

    return 0;
}