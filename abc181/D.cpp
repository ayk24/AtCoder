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

int main() {
    string S;
    cin >> S;

    if(S.size() < 5) {
        asort(S);
        do {
            if(stoi(S) % 8 == 0) {
                cout << "Yes" << endl;
                return 0;
            }
        } while(next_permutation(all(S)));
        cout << "No" << endl;
        return 0;
    }

    vector<int> V(10);
    for(int i = 0; i < S.size(); i++) {
        V[S[i] - '0']++;
    }

    for(int i = 1; i <= 9; i++) {
        V[i]--;
        for(int j = 1; j <= 9; j++) {
            V[j]--;
            for(int k = 1; k <= 9; k++) {
                V[k]--;
                bool flag = true;
                for(int l = 0; l < V.size(); l++) {
                    if(V[l] < 0) {
                        flag = false;
                    }
                }
                if(flag && (i * 100 + j * 10 + k) % 8 == 0) {
                    cout << "Yes" << endl;
                    return 0;
                }
                V[k]++;
            }
            V[j]++;
        }
        V[i]++;
    }

    cout << "No" << endl;
    return 0;
}