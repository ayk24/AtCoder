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

vector<ll> res;
void n_Prime(ll n) {
    ll a;
    a = 2;
    while(n >= a * a) {
        if(n % a == 0) {
            res.push_back(a);
            n /= a;
        } else {
            a++;
        }
    }
    res.push_back(n);
}

int main() {
    ll n, cnt;
    vector<ll> pre;

    cin >> n;
    cnt = 0;
    if(n == 1) {
        cout << "0" << endl;
        exit(0);
    }
    n_Prime(n);
    pre.push_back(res[0]);
    cnt++;

    for(int i = 1; i < res.size(); ++i) {
        bool ok = true;
        for(ll j = 0; j < pre.size(); j++) {
            if(res[i] == pre[j]) {
                ok = false;
                break;
            }
        }
        if(ok) {
            pre.push_back(res[i]);
            cnt++;
        } else {
            ll ren = res[i];
            ll tmp = res[i];
            bool ok2 = true;
            ++i;
            if(res[i] == 0) {
                cout << cnt << endl;
                exit(0);
            }
            while(!ok) {
                if(ren != res[i]) {
                    ok2 = false;
                    --i;
                    break;
                }
                tmp *= res[i];
                ++i;

                for(ll j = 0; j < pre.size(); j++) {
                    if(tmp == pre[j]) {
                        break;
                    }
                    if(j == pre.size() - 1) {
                        if(pre[j] != tmp) {
                            ok = true;
                            --i;
                        }
                    }
                }
                if(res[i] == 0) {
                    cout << cnt << endl;
                    exit(0);
                }
            }
            if(ok2) {
                pre.push_back(tmp);
                cnt++;
            }
        }
    }

    cout << cnt << endl;
    return 0;
}