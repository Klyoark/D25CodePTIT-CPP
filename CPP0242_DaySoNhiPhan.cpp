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
        vector<int> a(n + 1, 0);
        vector<int> b(n + 1, 0);
        for (int i = 1; i <= n; ++i) {
            cin >> a[i];
            a[i] += a[i - 1];
        }
        for (int i = 1; i <= n; ++i) {
            cin >> b[i];
            b[i] += b[i - 1];
        }

        int ans = 0;

        unordered_map<int, int> first;
        first[0] = 0;
        for (int i = 1; i <= n; ++i) {
            int d = a[i] - b[i];
            if (first.count(d)) {
                ans = max(ans, i - first[d]);
            } else {
                first[d] = i;
            }
        }
        cout << ans << NL;
    }
    return 0;
}