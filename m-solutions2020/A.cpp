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
    int x;
    cin >> x;
    if(x >= 400 && x <= 599) {
        cout << 8 << endl;
    } else if(x >= 600 && x <= 799) {
        cout << 7 << endl;
    } else if(x >= 800 && x <= 999) {
        cout << 6 << endl;
    } else if(x >= 1000 && x <= 1199) {
        cout << 5 << endl;
    } else if(x >= 1200 && x <= 1399) {
        cout << 4 << endl;
    } else if(x >= 1400 && x <= 1599) {
        cout << 3 << endl;
    } else if(x >= 1600 && x <= 1799) {
        cout << 2 << endl;
    } else {
        cout << 1 << endl;
    }
    return 0;
}