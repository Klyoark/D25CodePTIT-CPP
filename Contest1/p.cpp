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

        int res = -1;
        for (int i = 2; i * i <= n && k > 0; ++i) {
            while (n % i == 0) {
                n /= i;
                --k;
                res = i;
                if (k == 0) {
                    break;
                }
            }
        }
        if (n > 1 && k > 0) {
            res = n;
            --k;
        }

        cout << (k == 0 ? res : -1) << NL;
    }

    return 0;
}