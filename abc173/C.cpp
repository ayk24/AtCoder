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

ll H, W, K;
char c[10][10];
char now_c[10][10];

bool count(int h, int w, char c[10][10]) {
    for(int i = 0; i < H; i++) {
        if(h & 1) {
            for(int j = 0; j < W; j++) {
                c[i][j] = '.';
            }
        }
        h >>= 1;
    }
    for(int i = 0; i < W; i++) {
        if(w & 1) {
            for(int j = 0; j < H; j++) {
                c[j][i] = '.';
            }
        }
        w >>= 1;
    }
    int cnt = 0;
    for(int i = 0; i < H; i++) {
        for(int j = 0; j < W; j++) {
            if(c[i][j] == '#') {
                cnt++;
            }
        }
    }
    return (cnt == K);
}

int main() {
    cin >> H >> W >> K;
    for(int i = 0; i < H; i++) {
        for(int j = 0; j < W; j++) {
            cin >> c[i][j];
        }
    }
    int ans = 0;
    for(int i = 0; i < (1 << H); i++) {
        for(int j = 0; j < (1 << W); j++) {
            for(int k = 0; k < H; k++) {
                for(int l = 0; l < W; l++) {
                    now_c[k][l] = c[k][l];
                }
            }
            if(count(i, j, now_c)) {
                ans++;
            }
        }
    }
    cout << ans << endl;

    return 0;
}