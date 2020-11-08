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
    int N, K, d, tmp, cnt;
    cnt = 0;

    cin >> N >> K;

    int A[N];
    m0(A);
    for(int i = 0; i < K; i++) {
        cin >> d;
        for(int j = 0; j < d; j++) {
            cin >> tmp;
            A[tmp - 1] = 1;
        }
    }

    for(int i = 0; i < N; i++) {
        if(A[i] == 0)
            cnt++;
    }

    cout << cnt << endl;

    return 0;
}