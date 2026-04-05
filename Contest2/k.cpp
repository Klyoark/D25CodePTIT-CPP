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
        vector<int> f(26, 0);
        for (char c : s) {
            ++f[c - 'a'];
        }
        ll res = 0;
        for (int i = 0; i < 26; ++i) {
            if (f[i]) {
                res += (1LL * f[i] * (f[i] + 1)) / 2;
            }
        }
        cout << res << NL;
    }

    return 0;
}
