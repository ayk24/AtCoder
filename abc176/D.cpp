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

struct Corr {
    ll y;
    ll x;
    ll depth;
};

ll h, w;
ll ch, cw, dh, dw;
ll y, x, depth;
vector<string> vec, vec_;
queue<Corr> q, q_;

Corr start = {ch, cw, 0};
Corr mi = {ch, cw, 0};

vector<ll> y_vec = {0, 0, -1, +1};
vector<ll> x_vec = {-1, +1, 0, 0};

ll bfs() {
    while(!q.empty()) {
        Corr now = q.front();
        q.pop();
        y = now.y, x = now.x, depth = now.depth;

        if(y == dh && x == dw)
            return depth;

        for(ll i = 0; i < 4; ++i) {
            Corr next = {y + y_vec[i], x + x_vec[i], depth + 1};
            if(0 <= next.y && next.y <= h - 1 && 0 <= next.x &&
               next.x <= w - 1 && vec[next.y][next.x] == '.') {
                vec[next.y][next.x] = '#';
                q.push(next);
                if(abs(next.x - dh) <= 2 && abs(next.y - dw) <= 2) {
                    mi.x = next.x, mi.y = next.y;
                }
            }
        }
    }
    return 0;
}

vector<ll> y2_vec = {-2, -1, 0,  +1, +2, -2, -1, 0,  +1, +2, -2, -1,
                     +1, +2, -2, -1, 0,  +1, +2, -2, -1, 0,  +1, +2};
vector<ll> x2_vec = {+2, +2, +2, +2, +2, +1, +1, +1, +1, +1, 0,  0,
                     0,  0,  -1, -1, -1, -1, -1, -2, -2, -2, -2, -2};

ll bfs2() {
    while(!q_.empty()) {
        Corr now = q_.front();
        q_.pop();
        y = now.y, x = now.x, depth = now.depth;

        if(y == dh && x == dw)
            return depth;

        for(ll i = 0; i < 24; ++i) {
            Corr next = {y + y2_vec[i], x + x2_vec[i], depth + 1};
            if(0 <= next.y && next.y <= h - 1 && 0 <= next.x &&
               next.x <= w - 1 && vec_[next.y][next.x] == '.') {
                vec_[next.y][next.x] = '#';
                q_.push(next);
            }
        }
    }
    return 0;
}

int main() {
    cin >> h >> w >> ch >> cw >> dh >> dw;
    ch--, cw--, dh--, dw--;

    vec.resize(h);
    vec_.resize(h);
    for(ll i = 0; i < h; ++i) {
        cin >> vec[i];
    }
    vec_ = vec;

    q.emplace(start);

    if(bfs() > 0) {
        cout << "0" << endl;
    } else {
        q_.emplace(mi);
        ll ans = bfs2();
        if(ans == 0) {
            cout << "-1" << endl;
        } else {
            cout << ans << endl;
        }
    }
    return 0;
}