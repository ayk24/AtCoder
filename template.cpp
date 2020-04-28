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
#define UNIQUE(v) v.erase(unique(v.begin(), v.end()), v.end());
#define MINS(m, s) m.insert(mp(s, 1));
#define MFIN(m, s) m.find(s) != m.end()
#define mp make_pair
#define pb push_back

// vector
template <typename T> istream &operator>>(istream &is, vector<T> &v) {
    for(T &in : v)
        is >> in;
    return is;
}
template <typename T> ostream &operator<<(ostream &os, const vector<T> &v) {
    for(int i = 0; i < (int)v.size(); i++) {
        os << v[i] << (i + 1 != v.size() ? " " : "");
    }
    return os;
}

// pair
template <typename T1, typename T2>
ostream &operator<<(ostream &os, const pair<T1, T2> &p) {
    os << p.first << " " << p.second;
    return os;
}
template <typename T1, typename T2>
istream &operator>>(istream &is, pair<T1, T2> &p) {
    is >> p.first >> p.second;
    return is;
}

// mint
const int mod = 1000000007;
class mint {
    long long x;

  public:
    mint(long long x = 0) : x((x % mod + mod) % mod) {}
    mint operator-() const { return mint(-x); }
    mint &operator+=(const mint &a) {
        if((x += a.x) >= mod)
            x -= mod;
        return *this;
    }
    mint &operator-=(const mint &a) {
        if((x += mod - a.x) >= mod)
            x -= mod;
        return *this;
    }
    mint &operator*=(const mint &a) {
        (x *= a.x) %= mod;
        return *this;
    }
    mint operator+(const mint &a) const {
        mint res(*this);
        return res += a;
    }
    mint operator-(const mint &a) const {
        mint res(*this);
        return res -= a;
    }
    mint operator*(const mint &a) const {
        mint res(*this);
        return res *= a;
    }
    mint pow(ll t) const {
        if(!t)
            return 1;
        mint a = pow(t >> 1);
        a *= a;
        if(t & 1)
            a *= *this;
        return a;
    }
    mint inv() const { return pow(mod - 2); }
    mint &operator/=(const mint &a) { return (*this) *= a.inv(); }
    mint operator/(const mint &a) const {
        mint res(*this);
        return res /= a;
    }

    friend ostream &operator<<(ostream &os, const mint &m) {
        os << m.x;
        return os;
    }
};

ll modpow(ll x, ll n, ll mod) {
    if(n == 0)
        return 1;
    ll res = modpow(x * x % mod, n / 2, mod);
    if(n & 1)
        res = res * x % mod;
    return res;
}

mint nCk(ll n, ll k) {
    mint res = 1;
    for(ll i = 0; i < k; i++) {
        res *= n - i;
    }
    for(ll i = 1; i <= k; i++) {
        res /= i;
    }
    return res;
}