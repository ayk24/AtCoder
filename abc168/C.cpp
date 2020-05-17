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
    int A, B, H, M;
    double l, m, diff, c;

    cin >> A >> B >> H >> M;

    l = (double)M * 6;
    double tmp = l / 12;
    m = (double)H * 30 + tmp;

    if(l == 0) {
        l = 360;
    }
    if(m == 0) {
        m = 360;
    }
    if(l > m) {
        diff = l - m;
    } else {
        diff = m - l;
    }

    double a = cos(diff * M_PI / 180);
    tmp = pow(A, 2) + pow(B, 2) - 2 * A * B * a;
    c = sqrt(tmp);
    printf("%.10f\n", c);

    return 0;
}