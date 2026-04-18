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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int& x : a) {
            cin >> x;
        }
        int res = 0;

        while (1) {
            bool ok = true;
            for (int i = 0; i < n; ++i) {
                if (a[i] % 2 == 1) {
                    --a[i];
                    ++res;
                }
                if (a[i] != 0) {
                    ok = false;
                }
            }
            if (ok) {
                break;
            }
            for (int i = 0; i < n; ++i) {
                a[i] /= 2;
            }
            ++res;
        }

        cout << res << NL;
    }

    return 0;
}