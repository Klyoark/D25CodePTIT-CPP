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

ll lcm(ll a, ll b, ll g) {
    return a / gcd(a, b) * b;
}

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        ll a, b, g;
        cin >> a >> b;
        g = gcd(a, b);
        cout << lcm(a, b, g) << " " << g << NL;
    }

    return 0;
}