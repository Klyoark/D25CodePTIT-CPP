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
        for (int& x : a) {
            cin >> x;
        }
        sort(a.begin(), a.end());

        int l = 0, r = n - 1, res = 0;
        while (l < r) {
            int s = a[l] + a[r];
            if (s == k) {
                if (a[l] == a[r]) {
                    int len = r - l + 1;
                    res += len * (len - 1) / 2;
                    break;
                } else {
                    int lc = 1, rc = 1;
                    while (l + 1 < r && a[l] == a[l + 1]) {
                        ++l;
                        ++lc;
                    }
                    while (r - 1 > l && a[r] == a[r - 1]) {
                        --r;
                        ++rc;
                    }
                    
                    res += lc * rc;
                    ++l, --r;
                }
            } else if (s < k) {
                ++l;
            } else {
                --r;
            }
        }

        cout << res << NL;
    }

    return 0;
}