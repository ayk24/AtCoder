#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;

#define mem0(x) memset(x, 0, sizeof(x))
#define asort(x) sort(x.begin(), x.end());
#define dsort(x, t) sort(x.begin(), a.end(), greater<t>());
#define mp make_pair
#define pb push_back

int main() {
    int A, B, C, D, flagT;
    flagT = 0;
    cin >> A >> B >> C >> D;

    while(true) {
        C -= B;
        if(A <= 0) {
            flagT = 1;
            break;
        } else if(C <= 0) {
            flagT = 0;
            break;
        }
        A -= D;
        if(A <= 0) {
            flagT = 1;
            break;
        } else if(C <= 0) {
            flagT = 0;
            break;
        }
    }

    if(flagT) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }
    return 0;
}