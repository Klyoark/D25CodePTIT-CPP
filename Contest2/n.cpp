
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
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> res(n, -1);
        for (int& x : a) {
            cin >> x;
        }
        for (int i = 0; i < n; ++i) {
            if (a[i] >= 0 && a[i] <= n) {
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
