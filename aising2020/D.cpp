#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> pll;

#define m0(x) memset(x, 0, sizeof(x))
#define all(x) x.begin(), x.end()
#define rep(i, n) for(int i = 0; i < (n); i++)
#define asort(x) sort(all(x));
#define dsort(x, t) sort(x.begin(), x.end(), greater<t>());
#define UNIQUE(v) v.erase(unique(v.begin(), v.end()), v.end());
#define MINS(m, s) m.insert(make_pair(s, 1));
#define MFIN(m, s) m.find(s) != m.end()
#define INF (1 << 29)
const int mod = 1000000007;

int memo[200005]; // popcount
int n;

// 10進数を2進数に変換
void itob(int bina) {
    memo[bina] = count(cbegin(bitset<n>(bina)), cend(bitset<n>(bina), '1');
}

int main() {
    cin >> n;

    string x;
    cin >> x;

    for(int i = 0; i < 200005; i++) {
        memo[i] = INF;
    }

    for(int i = 0; i < n; i++) {
        string str = x;
        ll cnt = 0;
        if(str[i] == '0') {
            str[i] = '1';
        } else {
            str[i] = '0';
        }
        // 2進数を10進数に
        int t = stoi(str, nullptr, 2);
        memo[t] = count(cbegin(str), cend(str), '1');

        while(t > 0) {
            int repl = t % memo[t]; // 7 % 3 = 1
            binary(repl);           // popcount(1) = 1
            cout << repl << endl;
            cout << memo[repl] << endl;
            t = memo[repl];
            if(t == 1 || t == 2) {
                cnt++;
                break;
            }
            cnt++;
        }
        cout << cnt << endl;
    }

    return 0;
}