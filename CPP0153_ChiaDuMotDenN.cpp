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
        ll n, k;
        cin >> n >> k;
        if (k == 0) {
            cout << 0 << NL;
        } else {
            ll x, y;
            x = n / k;
            y = n % k;
            ll res = (x * (k * (k - 1) / 2) + (y * (y + 1) / 2));
            cout << res << NL;
        }
    }

    return 0;
}