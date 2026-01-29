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

        vector<bool> b(1e8 + 1, false);
        int minn = 1e8, maxn = -1;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            b[a[i]] = true;
            minn = min(minn, a[i]);
            maxn = max(maxn, a[i]);
        }
        int cnt = 0;
        for (int i = minn; i <= maxn; ++i) {
            if (!b[i]) {
                cnt++;
            }
        }
        cout << cnt << NL;

    }

    return 0;
}