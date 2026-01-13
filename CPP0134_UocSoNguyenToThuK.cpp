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
        ll n;
        int k;
        cin >> n >> k;
        vector<int> x;
        for (int i = 2; i * i <= n; ++i) {
            if (n % i == 0) {
                while (n % i == 0) {
                    x.pb(i);
                    n /= i;
                }
            }
            if (n == 1) {
                break;
            }
        }
        if (n > 1) {
            x.pb(n);
        }

        if (k > x.size()) {
            cout << -1 << NL;
        } else {
            cout << x[k - 1] << NL;
        }
    }

    return 0;
}