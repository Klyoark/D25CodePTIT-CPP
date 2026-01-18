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
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (i > 0) {
                a[i] += a[i - 1];
            }
        }
        [&](){
            for (int i = 0; i < n; ++i) {
                int le = (i == 0) ? 0 : a[i - 1];
                int ri = a[n - 1] - a[i];
                if (le == ri) {
                    cout << i + 1 << NL;
                    return;
                }
            }
            cout << "-1\n";
        }();
    }

    return 0;
}