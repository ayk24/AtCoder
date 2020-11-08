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

#define OFFSET 201
#define MAX_X OFFSET * 2 + 1
#define MAX_Y OFFSET * 2 + 1

int maze[MAX_X][MAX_Y];
int N = MAX_X, M = MAX_Y;
int sx = OFFSET, sy = OFFSET;
int gx, gy;

int d[MAX_X][MAX_Y];
int dx[6] = {1, 0, -1, 1, -1, 0}, dy[6] = {1, 1, 1, 0, 0, -1};

int bfs() {
    queue<pii> que;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            d[i][j] = INF;
        }
    }
    que.push(mp(sx, sy));
    d[sx][sy] = 0;

    while(que.size()) {
        pii p = que.front();
        que.pop();
        if(p.first == gx && p.second == gy)
            break;

        for(int i = 0; i < 6; i++) {
            int nx = p.first + dx[i], ny = p.second + dy[i];
            if(0 <= nx && nx < MAX_X && 0 <= ny && ny < MAX_Y &&
               maze[nx][ny] != 1 && d[nx][ny] == INF) {
                que.push(mp(nx, ny));
                d[nx][ny] = d[p.first][p.second] + 1;
            }
        }
    }
    return d[gx][gy];
}

int main() {
    int n;
    cin >> n >> gx >> gy;
    gx += OFFSET, gy += OFFSET;
    for(int i = 0; i < n; i++) {
        int nowx, nowy;
        cin >> nowx >> nowy;
        nowx += OFFSET;
        nowy += OFFSET;
        maze[nowx][nowy] = 1;
    }

    int ans = bfs();
    if(ans == INF)
        ans = -1;
    cout << ans << endl;
    return 0;
}