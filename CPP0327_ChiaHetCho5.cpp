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

        int r = 0;
        for (char c : s) {
            r = r * 2 + (c - '0') % 5;
            r %= 5;
        }

        cout << (r == 0 ? "YES\n" : "NO\n");
    }

    return 0;
}