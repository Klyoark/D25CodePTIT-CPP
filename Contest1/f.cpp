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

    string es = "86";
    while (t--) {
        string s;
        cin >> s;
        if (s.size() >= 2) {
            string sub = s.substr(s.size() - 2, 2);
            cout << (sub == es ? 1 : 0) << NL;
        } else {
            cout << 0 << NL;
        }
    }

    return 0;
}