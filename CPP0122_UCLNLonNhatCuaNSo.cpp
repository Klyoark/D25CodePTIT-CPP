#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
#define pub push_back
#define pob pop_back
constexpr char NL = '\n';
using namespace std;

ll gcd(ll a, ll b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

ll lcm(ll a, ll b) {
    return a / gcd(a, b) * b;
}

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        ll a;
        cin >> a;
        ll s = 1;
        for (int i = 1; i <= a; ++i) {
            s = lcm(s, i);
        }
        cout << s << NL;
    }

    return 0;
}