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
        ll n;
        cin >> n;
        vector<ll> a(n);
        vector<ll> res(n, -1);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i) {
            if (a[i] >= 0 && a[i] < n)  {
                res[a[i]] = a[i];
            }
        }
        for (int i = 0; i < n; ++i) {
            cout << res[i] << " ";
        }
        cout << NL;
    }

    return 0;
}