#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;

#define mp make_pair
#define pb push_back
#define F first
#define S second

#define all(x) (x).begin(), (x).end()
#define m0(x) memset(x, 0, sizeof(x))
#define asort(x) sort(x.begin(), x.end());
#define dsort(x, t) sort(x.begin(), a.end(), greater<t>());
#define UNIQUE(v) v.erase(unique(v.begin(), v.end()), v.end());

const int mod = 1e9 + 7;

int main() {
    int cnt = 0;
    string S;
    cin >> S;
    for(int i = 0; i < S.length(); i++) {
        for(int j = 1; j <= S.length() - i; j++) {
            if(strtol(S.substr(i, j).c_str(), NULL, 10) % 2019 == 0) {
                cnt++;
                break;
            }
        }
    }
    cout << cnt << endl;

    return 0;
}