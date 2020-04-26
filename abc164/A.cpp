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

int main(){
    int S, W;
    cin >> S >> W;
    if(S <= W) {
        cout << "unsafe" << endl;
    } else {
        cout << "safe" << endl;
    }
    return 0;
}