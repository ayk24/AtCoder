#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string os, rs, s_os, s_rs;
    cin >> os;
    rs = os;
    s_os = os.substr(0, os.length() / 2);
    s_rs = s_os;

    reverse(rs.begin(), rs.end());
    reverse(s_rs.begin(), s_rs.end());

    if(os == rs) {
        if(s_os == s_rs) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    } else {
        cout << "No" << endl;
    }

    return 0;
}