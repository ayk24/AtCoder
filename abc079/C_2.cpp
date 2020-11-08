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

string str;
void solved(string ret, int sum, int n, bool &done) {
    if(done)
        return;
    if(n == str.size() - 1) {
        if(sum + str[n] - '0' == 7) {
            cout << ret << "+" << str[n] << "=7" << endl;
            done = true;
            return;
        }
        if(sum - str[n] - '0' == 7) {
            cout << ret << "-" << str[n] << "=7" << endl;
            done = true;
            return;
        }
    }
    solved(ret + "+" + str[n], sum + str[n] - '0', n + 1, done);
    solved(ret + "-" + str[n], sum - str[n] - '0', n + 1, done);
    return;
}

int main() {
    cin >> str;
    string ret;
    ret = str[0];

    bool done = false;
    solved(ret, str[0] - '0', 1, done);
    return 0;
}