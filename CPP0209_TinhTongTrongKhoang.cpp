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
        int n, q;
        cin >> n >> q;
        vector<int> a(n);
        for (int& x : a) {
            cin >> x;
        }
        while (q--) {
            int l, r, s = 0;
            cin >> l >> r;
            l--;
            r--;
            for (int i = l; i <= r; ++i) {
                s += a[i];
            }
            cout << s << NL;
        }
    }

    return 0;
}