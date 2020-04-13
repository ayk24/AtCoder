#include <bits/stdc++.h>
using namespace std;

int main() {
    int flag = 0;
    string N;
    cin >> N;

    for(size_t i = 0; i < sizeof(N); i++) {
        if(N[i] == '7') {
            flag = 1;
            break;
        } else {
            flag = 0;
        }
    }

    if(flag == 0) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }

    return 0;

}