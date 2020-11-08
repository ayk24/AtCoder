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
    ll A, B, N, ans, x, tmp, f1, f2;
    ans = 0;
    cin >> A >> B >> N;

    // 最大値
    x = N;
    f1 = A * x / B;
    f2 = x / B;
    tmp = f1 - A * f2;
    ans = max(ans, tmp);

    // bの上境界
    x = N / B;
    if(x > 0) {
        x = (B * x) - 1;
        f1 = A * x / B;
        f2 = x / B;
        tmp = f1 - A * f2;
        ans = max(ans, tmp);
    }

    // bの下境界
    x = N / B;
    if(x > 1) {
        x = (B * (x - 1)) - 1;
        f1 = A * x / B;
        f2 = x / B;
        tmp = f1 - A * f2;
        ans = max(ans, tmp);
    }

    // aの上境界
    x = N / A;
    if(x > 0) {
        x = (A * x) - 1;
        f1 = A * x / B;
        f2 = x / B;
        tmp = f1 - A * f2;
        ans = max(ans, tmp);
    }

    // aの下境界
    x = N / A;
    if(x > 1) {
        x = (A * (x - 1)) - 1;
        f1 = A * x / B;
        f2 = x / B;
        tmp = f1 - A * f2;
        ans = max(ans, tmp);
    }

    cout << ans << endl;

    return 0;
}