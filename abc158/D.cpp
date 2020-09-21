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
#define asort(x) sort(x.begin(), x.end());
#define dsort(x, t) sort(x.begin(), a.end(), greater<t>());
#define UNIQUE(v) v.erase(unique(v.begin(), v.end()), v.end());
#define MINS(m, s) m.insert(mp(s, 1));
#define MFIN(m, s) m.find(s) != m.end()
#define mp make_pair
#define pb push_back
#define INF (1 << 29)
const int mod = 1000000007;

int main() {
    string S;
    char C;
    ll Q, T, F;
    bool rev = false;
    deque<char> dq;
    cin >> S;
    for(ll i = 0; i < S.length(); i++) {
        dq.push_back(S[i]);
    }
    cin >> Q;
    for(ll i = 0; i < Q; i++) {
        cin >> T;
        if(T == 1) {
            rev = !rev;
        } else {
            cin >> F >> C;
            if((F == 1 && !rev) || (F == 2 && rev)) {
                dq.push_front(C);
            } else {
                dq.push_back(C);
            }
        }
    }
    if(rev) {
        reverse(all(dq));
    }
    for(auto &x : dq) {
        cout << x;
    }
    cout << endl;
    return 0;
}