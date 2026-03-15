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
        string y = s;
        reverse(y.begin(), y.end());
        cout << (s == y ? "YES\n" : "NO\n");
    }

    return 0;
}