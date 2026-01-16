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

ll lcm(ll a, ll b) {
    return (a / gcd(a, b)) * b;
}

ll lcm3(ll a, ll b, ll c) {
    return lcm(a, lcm(b, c));
}

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        ll x, y, z, n;
        cin >> x >> y >> z >> n;
        ll L = lcm3(x, y, z);
        __int128_t Flo = 1;
        for (int i = 1; i < n; ++i) {Flo *= 10;}
        __int128_t Cei = (Flo * 10) - 1;
        //phai tinh k⋅L≥10^(N−1)
        __int128_t k = (Flo + L - 1) / L;
        __int128_t res = k * L;
        if (res <= Cei) {
            ll out = (ll)res;
            cout << out << NL;
        } else {
            cout << -1 << NL;
        }
    }

    return 0;
}