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
#define all(x) x.begin(), x.end()
#define asort(x) sort(all(x));
#define dsort(x, t) sort(x.begin(), a.end(), greater<t>());
#define UNIQUE(v) v.erase(unique(v.begin(), v.end()), v.end());
#define MINS(m, s) m.insert(mp(s, 1));
#define MFIN(m, s) m.find(s) != m.end()
#define mp make_pair
#define pb push_back
#define INF (1 << 29)
const int mod = 1000000007;

int main() {
    ll K, N, maxx;
    maxx = 0;
    ll A[200001];
    cin >> K >> N;
    for(ll i = 0; i < N; i++) {
        cin >> A[i];
    }
    ll diff[200001];
    mem0(diff);

    for(ll i = 0; i < N; i++) {
        if(i == 0) {
            diff[i] = A[i] + K - A[N - 1];
        } else {
            diff[i] = A[i] - A[i - 1];
        }
        maxx = max(maxx, diff[i]);
    }

    cout << K - maxx << endl;

    return 0;
}