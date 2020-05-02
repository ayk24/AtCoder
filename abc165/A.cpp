#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<char, ll> pcl;
typedef pair<string, ll> psl;

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
    int k, a, b, a1, b1;

    cin >> k;
    cin >> a >> b;

    a1 = a / k;
    b1 = b / k;

    a1 = a1 * k;
    b1 = b1 * k;

    if((a <= a1 && a1 <= b) || (a <= b1 && b1 <= b)) {
        cout << "OK" << endl;
    } else {
        cout << "NG" << endl;
    }

    return 0;
}