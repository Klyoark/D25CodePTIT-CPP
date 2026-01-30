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
        vector<ll> a(n - 1);
        ll s = 0;
        for (ll& x : a) {
            cin >> x;
            s += x;
        }
        ll res = (n + 1) * n / 2;
        cout << res - s << NL;
    }

    return 0;
}