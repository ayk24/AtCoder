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
    string s, t;
    cin >> s;
    cin >> t;
    int flag[3];
    m0(flag);
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == t[i]) {
        } else {
            flag[i] = 2;
            if(s[i] >= 'A' && s[i] <= 'Z') {
                s[i] += 32;
                if(s[i] == t[i]) {
                    flag[i] = 1;
                }
            }
            if(t[i] >= 'A' && t[i] <= 'Z') {
                t[i] += 32;
                if(s[i] == t[i]) {
                    flag[i] = 1;
                }
            }
        }
    }

    int cnt0 = 0, cnt1 = 0, cnt2 = 0;
    for(int i = 0; i < s.size(); i++) {
        if(flag[i] == 0) {
            cnt0++;
        } else if(flag[i] == 1) {
            cnt1++;
        } else {
            cnt2++;
        }
    }
    if(cnt2 > 0) {
        cout << "different" << endl;
    } else if(cnt1 > 0) {
        cout << "case-insensitive" << endl;
    } else {
        cout << "same" << endl;
    }

    return 0;
}