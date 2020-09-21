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
    string N;
    cin >> N;

    if(N[N.size() - 1] == '3') {
        cout << "bon" << endl;
        exit(0);
    } else if(N[N.size() - 1] == '0' || N[N.size() - 1] == '1' ||
              N[N.size() - 1] == '6' || N[N.size() - 1] == '8') {
        cout << "pon" << endl;
        exit(0);
    } else {
        cout << "hon" << endl;
        exit(0);
    }

    return 0;
}
