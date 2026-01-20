#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
#define pb push_back
#define pa pop_back
constexpr char NL = '\n';
using namespace std;

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int ok1 = 1, ok2 = 1;
        for (auto x : s) {
            if ((x - '0') % 2 != 0) {
                ok1 = 0;
                break;
            }
        }
        string sr = s;
        reverse(s.begin(), s.end());
        ok2 = (sr == s ? 1 : 0);

        cout << (ok1 == 1 && ok2 == 1 ? "YES\n" : "NO\n");
    }

    return 0;
}