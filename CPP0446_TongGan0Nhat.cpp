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

        ll min_abs= 1e17;
        ll res = 0;
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                ll cur_sum = (ll)a[i] + a[j];
                if (abs(cur_sum) < min_abs) {
                    min_abs = abs(cur_sum);
                    res = cur_sum;
                }
            }
        }
        cout << res << NL;
    }

    return 0;
}