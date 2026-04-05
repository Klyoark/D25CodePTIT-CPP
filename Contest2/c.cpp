#include <bits/stdc++.h>
#define fastio \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

int main() {
    fastio;

    int t;
    cin >> t;;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int& x : a) {
            cin >> x;
        }
        int m = a[0];
        int res = -1;
        for (int i = 1; i < n; ++i)  {
            res = max(res, a[i] - m);
            m = min(m, a[i]);
        }
        cout << res << NL;
    }

    return 0;
}
