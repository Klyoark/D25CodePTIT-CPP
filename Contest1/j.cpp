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
        int m, n, a, b;
        cin >> m >> n >> a >> b;
        int res = 0;
        for (int i = m; i <= n; ++i) {
            if ( i % a == 0 || i % b == 0) {
                ++res;
            }
        }
        cout << res << NL;
    }

    return 0;
}