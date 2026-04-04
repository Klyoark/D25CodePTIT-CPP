#include <bits/stdc++.h>
#define fastio \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int f[256] = {0};
        for (char c : s) {
          ++f[c];
        }
        for (char c : s) {
            if (f[c] > 1) {
                continue;
            }
            cout << c;
        }
        cout << NL;
    }

    return 0;
}