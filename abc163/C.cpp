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
    ll N, tmp;
    ll A[200001];
    mem(A, 0);
    cin >> N;

    for(ll i = 0; i < N - 1; i++) {
        cin >> tmp;
        A[tmp-1] += 1;
    }

    for(ll i = 0; i < N; i++) {
        cout << A[i] << endl;
    }

    return 0;
}