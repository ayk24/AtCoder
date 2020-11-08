#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> pll;

#define m0(x) memset(x, 0, sizeof(x))
#define all(x) x.begin(), x.end()
#define rep(i, n) for(int i = 0; i < (n); i++)
#define asort(x) sort(all(x));
#define dsort(x, t) sort(x.begin(), x.end(), greater<t>());
#define vuni(v) v.erase(unique(v.begin(), v.end()), v.end());
#define mins(m, s) m.insert(make_pair(s, 1));
#define mfin(m, s) m.find(s) != m.end()

#define dump(x) cout << #x << " = " << (x) << endl
#define YES(n) cout << ((n) ? "YES" : "NO") << endl
#define Yes(n) cout << ((n) ? "Yes" : "No") << endl

const int INF = 1e9;
const ll LINF = 1e18;
const int mod = 1e9 + 7;

int main() {
    int H, W, N, M, A, B, C, D;
    cin >> H >> W >> N >> M;

    char mas[1505][1505];
    bool flg[1505][1505];
    for(int i = 0; i < 1505; i++) {
        for(int j = 0; j < 1505; j++) {
            mas[i][j] = '.';
        }
    }
    m0(flg);

    for(int i = 0; i < N; i++) {
        cin >> A >> B;
        A--, B--;
        mas[A][B] = '*';
    }

    for(int i = 0; i < M; i++) {
        cin >> C >> D;
        C--, D--;
        mas[C][D] = '#';
    }

    ll ans = 0;
    for(int i = 0; i < H; i++) {
        ll now = 0;
        bool flag = false;
        for(int j = 0; j < W; j++) {
            if(mas[i][j] == '.') {
                if(flg[i][j] == false)
                    now++;
            } else if(mas[i][j] == '*') {
                if(flg[i][j] == false) {
                    now++;
                }
                flag = true;
            } else {
                if(flag) {
                    flag = false;
                    ans += now;
                    for(int k = j - now; k < j; k++) {
                        flg[i][k] = true;
                    }
                }
                now = 0;
            }

            if(mas[i][j] != '#' && j == W - 1) {
                if(flag) {
                    flag = false;
                    ans += now;
                    for(int k = j - now + 1; k <= j; k++) {
                        flg[i][k] = true;
                    }
                }
                now = 0;
            }
        }
    }

    for(int i = 0; i < W; i++) {
        ll now = 0;
        bool flag = false;
        for(int j = 0; j < H; j++) {
            if(mas[j][i] == '.') {
                if(flg[j][i] == false) {
                    now++;
                }
            } else if(mas[j][i] == '*') {
                if(flg[j][i] == false) {
                    now++;
                }
                flag = true;
            } else {
                if(flag) {
                    flag = false;
                    ans += now;
                    for(int k = j - now; k < j; k++) {
                        flg[k][i] = true;
                    }
                }
                now = 0;
            }
            if(j == H - 1 && mas[j][i] != '#') {
                if(flag) {
                    flag = false;
                    ans += now;
                    for(int k = j - now + 1; k <= j; k++) {
                        flg[k][i] = true;
                    }
                }
                now = 0;
            }
        }
    }

    cout << ans << endl;
    return 0;
}