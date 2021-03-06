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

void solved(int a, int b, int c, int k) {
    if(b > a && c > b) {
        cout << "Yes" << endl;
        exit(0);
    }
    if(k <= 0) {
        return;
    }
    solved(a * 2, b, c, k - 1);
    solved(a, b * 2, c, k - 1);
    solved(a, b, c * 2, k - 1);
}

int main() {
    int a, b, c, k;
    cin >> a >> b >> c >> k;
    solved(a, b, c, k);
    cout << "No" << endl;
    return 0;
}