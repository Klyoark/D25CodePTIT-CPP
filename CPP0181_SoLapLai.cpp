#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
#define pb push_back
#define pa pop_back
constexpr char NL = '\n';
using namespace std;

ll gcd(ll a, ll b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        ll a, x, y;
        cin >> a >> x >> y;
        ll k = gcd(x, y);
        string s ="";
        for (int i = 0; i < k; ++i) {
            s += to_string(a);
        }
        cout << s << NL;
    }

    return 0;
}