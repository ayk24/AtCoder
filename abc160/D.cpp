#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, X, Y;

    cin >> N >> X >> Y;

    int count[N - 1];

    for(int i = 0; i < N; i++) {
        count[i] = 0;
    }

    for(int i = 1; i < N; i++) {
        for(int j = i + 1; j <= N; j++) {
            int dist = j - i;
            if(i <= X && j >= Y) {
                dist = j - i - (Y - X - 1);
            } else if(i <= X && j > X && j < Y) {
                if(((X - i) + 1 + (Y - j)) < dist) {
                    dist = (X - i) + 1 + (Y - j);
                }
            } else if(i > X && i < Y && j > X && j < Y) {
                if(((i - X) + 1 + (Y - j)) < dist) {
                    dist = (i - X) + 1 + (Y - j);
                }
            } else if(i > X && i < Y && j >= Y) {
                if(((i - X) + 1 + (j - Y) < dist)) {
                    dist = (i - X) + 1 + (j - Y);
                }
            }
            count[dist - 1] += 1;
        }
    }

    for(int i = 0; i < N - 1; i++) {
        cout << count[i] << endl;
    }

    return 0;
}