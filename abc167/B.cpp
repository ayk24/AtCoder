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

int main() {
    ll A, B, C, K;
    ll max = 0;
    cin >> A >> B >> C >> K;

    if(A != 0) {
        if(K > A) {
            max += A;
            K = K - A;
        } else {
            max += K;
            cout << max << endl;
            exit(0);
        }
    }

    if(B != 0) {
        if(K > B) {
            K = K - B;
        } else {
            cout << max << endl;
            exit(0);
        }
    }

    if(C != 0) {
        if(K > C) {
            max -= C;
        } else {
            max -= K;
            cout << max << endl;
            exit(0);
        }
    }

    cout << max << endl;

    return 0;
}