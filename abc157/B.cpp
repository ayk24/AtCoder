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
#define dsort(x, t) sort(x.begin(), a.end(), greater<t>());
#define UNIQUE(v) v.erase(unique(v.begin(), v.end()), v.end());
#define MINS(m, s) m.insert(mp(s, 1));
#define MFIN(m, s) m.find(s) != m.end()
#define mp make_pair
#define pb push_back
#define INF (1 << 29)
const int mod = 1000000007;

int main() {
    int N, flag;
    flag = 0;
    int a[3][3];
    int b;
    int c[3][3];
    m0(c);

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }

    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> b;
        for(int j = 0; j < 3; j++) {
            for(int k = 0; k < 3; k++) {
                if(b == a[j][k]) {
                    c[j][k] = 1;
                }
            }
        }
    }

    for(int i = 0; i < 3; i++) {
        if(c[i][0] == 1 && c[i][1] == 1 && c[i][2] == 1) {
            flag = 1;
        }
    }

    for(int i = 0; i < 3; i++) {
        if(c[0][i] == 1 && c[1][i] == 1 && c[2][i] == 1) {
            flag = 1;
        }
    }

    if(c[0][0] == 1 && c[1][1] == 1 && c[2][2] == 1) {
        flag = 1;
    }

    if(c[0][2] == 1 && c[1][1] == 1 && c[2][0] == 1) {
        flag = 1;
    }

    if(flag) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}