#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

constexpr int mod = 1e9 + 7;

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

        ll p = 1;
        for (int& x : a) {
            p = (p * x) % mod;
        }

        int g = a[0];
        for (int i = 1; i < n; ++i) {
            g = __gcd(g, a[i]);
        }

        ll res = 1;
        for (int i = 1; i <= g; ++i) {
            res = res * p % mod;
        }

        cout << res << NL;
    }

    return 0;
}