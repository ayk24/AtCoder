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
#define rep(i, n) for(int i = 0; i < (n); i++)
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
    int N, cnt;
    cnt = 0;
    ll A[205];
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }

    while(true) {
        for(int i = 0; i < N; i++) {
            if(A[i] % 2 != 0) {
                cout << cnt << endl;
                exit(0);
            } else {
                A[i] = A[i] / 2;
            }
        }
        cnt++;
    }

    cout << cnt << endl;

    return 0;
}