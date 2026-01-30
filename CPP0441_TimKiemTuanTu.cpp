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
        [&](){
            for (int i = 0; i < n; ++i) {
                if (a[i] == k) {
                    cout << i + 1 << NL;
                    return;
                }
            }
            cout << -1 << NL;
        }();
    }

    return 0;
}