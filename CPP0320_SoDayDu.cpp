#include <bits/stdc++.h>
#define fastio \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

void ok(string& s) {
    if (s[0] == '0') {
        cout << "INVALID" << NL;
        return;
    }

    vector<int> f(10, 0);
    for (char c : s) {
        if (c - '0' >= 0 && c - '0' <= 9) {
            ++f[c - '0'];
        } else {
            cout << "INVALID" << NL;
            return;
        }
    }
    for (int x : f) {
        if (!x) {
            cout << "NO" << NL;
            return;
        }
    }
    cout << "YES" << NL;
}

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        ok(s);
    }

    return 0;
}
