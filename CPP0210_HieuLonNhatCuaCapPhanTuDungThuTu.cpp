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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int& x : a) {
            cin >> x;
        }

        int diff = -1;
        for (int i = 0; i < n - 1; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (a[j] >= a[i]) {
                    continue;
                }
                diff = max(diff, j - i);
            }
        }
        cout << diff << NL;
    }

    return 0;
}