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
        int n;
        cin >> n;
        vector<int> f(1e6 + 5, 0);
        int x;
        for (int i = 1; i <= n; ++i) {
            cin >> x;
            if (x > 0 && x <= n) {
                f[x] = 1;
            }
        }

        for (int i = 1; i <= n + 1; ++i) {
            if (!f[i]) {
                cout << i << NL;
                break;
            }
        }
    }

    return 0;
}