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
    int n;
    cin >> n;
    string ans;
    string str[5];
    for(int i = 0; i < 5; i++) {
        cin >> str[i];
    }

    for(ll j = 1; j < 4 * n + 1; j += 4) {
        if(str[0][j] == '.') {
            ans += '1';
        } else if(str[0][j+1] == '.') {
            ans += '4';
        } else if(str[2][j] == '#' && str[2][j + 1] == '.') {
            ans += '0';
        } else if(str[1][j] == '.' && str[1][j + 2] == '#' &&
                  str[3][j] == '#' && str[3][j + 2] == '.') {
            ans += '2';
        } else if(str[1][j] == '#' && str[1][j + 2] == '.' &&
                  str[3][j] == '.' && str[3][j + 2] == '#') {
            ans += '5';
        } else if(str[1][j] == '#' && str[1][j + 2] == '.' &&
                  str[3][j] == '#' && str[3][j + 2] == '#') {
            ans += '6';
        } else if(str[1][j] == '#' && str[1][j + 2] == '#' &&
                  str[3][j] == '.' && str[3][j + 2] == '#') {
            ans += '9';
        } else {
            if(str[1][j] == '#') {
                ans += '8';
            } else if(str[2][j] == '.') {
                ans += '7';
            } else {
                ans += '3';
            }
        }
    }
    cout << ans << endl;
    return 0;
}