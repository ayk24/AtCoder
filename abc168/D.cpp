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
const int mod = 1000000007;

#define INF 1e+9
#define MAX_V 100001

struct edge {
    int to;
    int cost;
};
// <最短距離, 頂点の番号>
using P = pair<int, int>;

int N, M;
vector<edge> G[MAX_V];
pii d[MAX_V];

void dijkstra(int s) {
    priority_queue<P, vector<P>, greater<P>> que;
    for(int i = 0; i < MAX_V; i++) {
        d[i] = mp(INF, INF);
    }
    d[s] = mp(0, 0);
    que.push(P(0, s));

    while(!que.empty()) {
        P p = que.top();
        que.pop();
        int v = p.second;
        if(d[v].first < p.first)
            continue;
        for(int i = 0; i < G[v].size(); ++i) {
            edge e = G[v][i];
            if(d[e.to].first > d[v].first + e.cost) {
                d[e.to].second = p.second;
                d[e.to].first = d[v].first + e.cost;
                que.push(P(d[e.to].first, e.to));
            }
        }
    }
}

int main() {
    int A, B;
    cin >> N >> M;
    for(int i = 0; i < M; i++) {
        cin >> A >> B;
        edge e1 = {B - 1, 1};
        G[A - 1].push_back(e1);
        edge e2 = {A - 1, 1};
        G[B - 1].push_back(e2);
    }
    dijkstra(0);
    for(int i = 1; i < N; ++i) {
        if(d[i].first != INF) {
        } else {
            cout << "No" << endl;
            exit(0);
        }
    }
    cout << "Yes" << endl;
    for(int i = 1; i < N; ++i) {
        cout << d[i].second + 1 << endl;
    }

    return 0;
}