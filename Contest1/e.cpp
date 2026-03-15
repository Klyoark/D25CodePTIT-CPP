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
        double a, b, c, d;
        cin >> a >> b >> c >> d;
        long double dx = a - c;
        long double dy = b - d;
        long double res = sqrt(dx * dx + dy * dy);
        cout << fixed << setprecision(4);
        cout << res << NL;
    }

    return 0;
}