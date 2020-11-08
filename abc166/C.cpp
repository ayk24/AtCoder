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
    ll N, M, cnt;
    cnt = 0;
    ll H[100001];
    bool check[100001];
    m0(check);

    cin >> N >> M;
    for(int i = 0; i < N; i++) {
        cin >> H[i];
    }

    for(int i = 0; i < M; i++) {
        ll a, b;
        cin >> a >> b;
        a--;
        b--;
        if(H[a] > H[b]) {
            check[b] = true;
        } else if(H[b] > H[a]) {
            check[a] = true;
        } else {
            check[a] = check[b] = true;
        }
    }

    for(int i = 0; i < N; i++) {
        if(check[i] == false) {
            cnt++;
        }
    }
    cout << cnt << endl;
}