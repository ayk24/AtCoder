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

ll N, M, X;
ll C[15];
ll A[15][15];
ll ans = INF;

void solved(vl vec, ll n, ll money) {
    if(n == N) {
        for(ll i = 0; i < vec.size(); i++) {
            if(vec[i] < X) {
                return;
            }
        }
        ans = min(money, ans);
        return;
    }
    solved(vec, n + 1, money);
    for(ll i = 0; i < M; i++) {
        vec[i] += A[n][i];
    }
    solved(vec, n + 1, money + C[n]);
}

int main() {
    cin >> N >> M >> X;

    for(ll i = 0; i < N; i++) {
        cin >> C[i];
        for(ll j = 0; j < M; j++) {
            cin >> A[i][j];
        }
    }
    vl alg(M, 0);
    solved(alg, 0, 0);
    if(ans != INF) {
        cout << ans << endl;
    } else {
        cout << "-1" << endl;
    }
    return 0;
}