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
        ll n, m;
        cin >> n >> m;
        vector<ll> a(n);
        vector<ll> b(m);
        for (ll& x : a) {
            cin >> x;
        }
        for (ll& x : b) {
            cin >> x;
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        ll res = a[a.size() - 1] * b[0];
        cout << res << NL;
    }

    return 0;
}