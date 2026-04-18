#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

ll spanish(ll x, ll y, ll p) {
    ll res = 1;
    x %= p;
    while (y > 0) {
        if (y % 2 == 1) {
            res = (res * x) % p;
        }
        x = (x * x)  % p;
        y /= 2;
    }
    return res;
}

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        ll x, y, p;
        cin >> x >> y >> p;
        cout << spanish(x, y, p) << NL;;
    }   

    return 0;
}