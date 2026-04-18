#include <bits/stdc++.h>
#define fastio                   \
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

        int f = 0, g = 0, h;
        int res = 0;
        for (char c : s) {
            if (c == '1') {
                ++f;
            } else {
                ++g;
            }

            h = min(f, g / 2);
            res = max(res, h * 3);
        }

        cout << res << NL;
    }

    return 0;
}