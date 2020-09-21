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
    int n, m;
    vi to[100005];
    cin >> n >> m;
    rep(i, m) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        to[a].pb(b);
        to[b].pb(a);
    }

    queue<int> q;
    vi dist(n, INF);
    vi pre(n, -1);
    dist[0] = 0;
    q.push(0);
    while(!q.empty()) {
        int v = q.front();
        q.pop();
        for(int u : to[v]) {
            if(dist[u] != INF)
                continue;
            dist[u] = dist[v] + 1;
            pre[u] = v;
            q.push(u);
        }
    }

    cout << "Yes" << endl;
    rep(i, n) {
        if(i == 0)
            continue;
        int ans = pre[i];
        ans++;
        cout << ans << endl;
    }
    return 0;
}