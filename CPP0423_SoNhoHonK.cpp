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
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        
        int wsize = 0;
        for (int& x : a) {
            cin >> x;
            if (x <= k) {
                wsize++;
            }
        }

        int bad = 0;
        for (int i = 0; i < wsize; ++i) {
            if (a[i] > k) {
                bad++;
            }
        }

        int res = bad;
        for (int i = 0, j = wsize; j < n; ++i, ++j) { // i = old, j = new
            if (a[i] > k) {
                bad--;
            }
            if (a[j] > k) {
                bad++;
            }
            res = min(res, bad);
        }
        cout << res << NL;
    }

    return 0;
}