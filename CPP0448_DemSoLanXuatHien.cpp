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
        int n, x;
        cin >> n >> x;
        int y, cnt = 0;
        while (n--) {
            cin >> y;
            if (y == x) {
                cnt++;
            }
        }
        cnt == 0 ? cout << -1 << NL : cout << cnt << NL;
    }

    return 0;
}