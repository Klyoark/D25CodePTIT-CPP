#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

ll gcd(ll a, ll b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        ll n, m;
        cin >> n >> m;

        ll s = n * (n + 1) / 2;
        if ((s + m) % 2 == 0 && s >= m) {
            ll x = (s + m) / 2;
            ll y = (s - m) / 2;
            if (gcd(x, y) == 1) {
                cout << "Yes\n";
            } else {
                cout << "No\n";
            }
        } else {
            cout << "No\n";
        }
    }

    return 0;
}