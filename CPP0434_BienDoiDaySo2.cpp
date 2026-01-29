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
        vector<ll> a(n);
        for (ll& x : a) {
            cin >> x;
        }

        ll prev = a[0]; //aka temp
        a[0] = a[0] * a[1];
        for (int i = 1; i < n - 1; ++i) {
            ll cur = a[i]; //cur is the next prev
            a[i] = prev * a[i + 1];
            prev = cur;
        }
        a[n - 1] = prev * a[n - 1];

        for (ll& x : a) {
            cout << x << " ";
        }
        cout << NL;
    }

    return 0;
}