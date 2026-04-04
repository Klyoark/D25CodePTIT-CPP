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
        int n, m;
        cin >> n >> m;
        vector<int> a1(n);
        vector<int> a2(m);
        vector<int> f(1e5 + 1, 0);
        for (int& x : a1) {
            cin >> x;
            ++f[x];
        }
        for (int& x : a2) {
            cin >> x;
        }

        for (int x : a2) {
            if (f[x]) {
                while (f[x]) {
                    cout << x << " ";
                    --f[x];
                }
            }
        }
        for (int i = 0; i <= 1e5; ++i) {
            if (f[i]) {
                while (f[i]) {
                    cout << i << " ";
                    --f[i];
                }
            }
        }
        cout << NL;
    }

    return 0;
}