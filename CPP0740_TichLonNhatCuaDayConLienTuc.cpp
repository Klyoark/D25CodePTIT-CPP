#if 0
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
        ll maxp = a[0], minp = a[0], res = a[0];
        ll x;
        for (int i = 1; i < n; ++i) {
            x = a[i];
            if (x < 0) {
                swap(maxp, minp);
            }
            maxp = max(x, maxp * x);
            minp = min(x, minp * x);
            res = max(maxp, res);
        }
        cout << res << NL;
    }

    return 0;
}
#endif

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
        ll res = -1e17;
        for (int i = 0; i < n; ++i) {
            ll tmp = 1;
            for (int j = i; j < n; ++j) {
                tmp *= a[j];
                res = max(res, tmp);
            }
        }
        cout << res << NL;
    }

    return 0;
}
