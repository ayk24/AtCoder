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
    int N, M, s, c, cnt, num;
    cnt = num = 0;
    int check[3][10];
    m0(check);

    cin >> N >> M;
    for(int i = 0; i < M; i++) {
        cin >> s >> c;
        if(N > 1 && s == 1 && c == 0) {
            cout << "-1" << endl;
            exit(0);
        } else {
            if(s == 1) {
                check[0][c] = 1;
            } else if(s == 2) {
                check[1][c] = 1;
            } else {
                check[2][c] = 1;
            }
        }
    }

    for(int i = 0; i < N; i++) {
        cnt = 0;
        for(int j = 0; j <= 9; j++) {
            if(cnt > 1) {
                cout << "-1" << endl;
                exit(0);
            } else if(check[i][j] == 1) {
                cnt++;
                num += j * pow(10, N - i - 1);
            }
        }
    }

    if(N == 3 && num < 100) {
        num += 100;
    } else if(N == 2 && num < 10) {
        num += 10;
    }

    cout << num << endl;

    return 0;
}