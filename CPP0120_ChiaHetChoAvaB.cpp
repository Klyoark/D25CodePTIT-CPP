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
        int m, n, a, b;
        cin >> m >> n >> a >> b;
        int d = 0;
        for (int i = m; i <= n; ++i) {
            if (i % a == 0 || i % b == 0) {
                d++;
            }
        }
        cout << d << NL;
    }

    return 0;
}