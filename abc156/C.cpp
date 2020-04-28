#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;

#define mem0(x) memset(x, 0, sizeof(x))
#define asort(x) sort(x.begin(), x.end());
#define dsort(x, t) sort(x.begin(), a.end(), greater<t>());
#define UNIQUE(v) v.erase(unique(v.begin(), v.end()), v.end());
#define MINS(m, s) m.insert(mp(s, 1));
#define MFIN(m, s) m.find(s) != m.end()
#define mp make_pair
#define pb push_back
#define INF (1 << 29)

int main() {
    ll N, hp, ans;
    ans = INF;
    cin >> N;
    int X[101];
    for(ll i = 0; i < N; i++) {
        cin >> X[i];
    }
    for(ll i = 1; i <= 100; i++) {
        hp = 0;
        for(ll j = 0; j < N; j++) {
            hp += pow((X[j] - i), 2);
        }
        ans = min(ans, hp);
    }

    cout << ans << endl;

    return 0;
}