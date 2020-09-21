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
    long double X, i, j, i2, j2;
    cin >> X;

    for(i = 0; i <= 1000; i++) {
        for(j = 0; j <= 1000; j++) {
            i2 = (-1) * i;
            j2 = (-1) * j;
            if((pow(i, 5) - pow(j, 5)) == X) {
                cout << (ll)i << " " << (ll)j << endl;
                exit(0);
            } else if((pow(i, 5) - pow(j2, 5)) == X) {
                cout << (ll)i << " " << (ll)j2 << endl;
                exit(0);
            } else if((pow(i2, 5) - pow(j, 5)) == X) {
                cout << (ll)i2 << " " << (ll)j << endl;
                exit(0);
            } else if((pow(i2, 5) - pow(j2, 5)) == X) {
                cout << (ll)i2 << " " << (ll)j2 << endl;
                exit(0);
            }
        }
    }


    return 0;
}