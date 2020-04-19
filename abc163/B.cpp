#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;

#define mem(x, y) memset(x, y, sizeof(x))
#define mp make_pair
#define pb push_back

int main() {
    ll N, M;
    ll A[10001];
    cin >> N >> M;
    for(ll i = 0; i < M; i++) {
        cin >> A[i];
    }

    for(ll i = 0; i < M; i++) {
        N -= A[i];
    }

    if(N < 0) {
        cout << -1 << endl;
    } else {
        cout << N << endl;
    }

    return 0;
}