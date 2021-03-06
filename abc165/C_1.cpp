#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<char, ll> pcl;
typedef pair<string, ll> psl;

#define m0(x) memset(x, 0, sizeof(x))
#define all(x) x.begin(), x.end()
#define asort(x) sort(all(x));
#define dsort(x, t) sort(x.begin(), x.end(), greater<t>());
#define REP(i, n) for(int i = 0; i < (int)(n); i++)
#define REPR(i, n) for(int i = (int)(n); i >= 0; i--)
#define FOR(i, s, n) for(int i = (s); i < (int)(n); i++)
#define UNIQUE(v) v.erase(unique(v.begin(), v.end()), v.end());
#define MINS(m, s) m.insert(mp(s, 1));
#define MFIN(m, s) m.find(s) != m.end()
#define mp make_pair
#define pb push_back
#define INF (1 << 29)
const int mod = 1000000007;

int main() {
    ll N, M, Q;
    cin >> N >> M >> Q;

    vector<ll> a(Q), b(Q), c(Q), d(Q);
    REP(i, Q) cin >> a[i] >> b[i] >> c[i] >> d[i];

    vector<ll> m(N);
    ll ans = 0;
    REP(i1, M) {
        FOR(i2, i1, M) {
            FOR(i3, i2, M) {
                FOR(i4, i3, M) {
                    FOR(i5, i4, M) {
                        FOR(i6, i5, M) {
                            FOR(i7, i6, M) {
                                FOR(i8, i7, M) {
                                    FOR(i9, i8, M) {
                                        FOR(i10, i9, M) {
                                            vector<ll> m = {i1, i2, i3, i4,
                                                            i5, i6, i7, i8,
                                                            i9, i10};
                                            ll sum = 0;
                                            REP(i, Q) {
                                                if(m[b[i] - 1] - m[a[i] - 1] ==
                                                   c[i])
                                                    sum += d[i];
                                            }
                                            ans = max(ans, sum);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}