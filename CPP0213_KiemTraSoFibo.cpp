#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
#define pb push_back
#define pa pop_back
constexpr char NL = '\n';
using namespace std;

bool fib(ll x) {
    __int128_t xx = x * x;
    __int128_t a = 5 * xx + 4;
    __int128_t b = 5 * xx - 4;

    auto checksq = [](__int128_t n){
        if (n < 0) {
            return false;
        }
        ll root = sqrt((long double)n);
        return (__int128_t)root * root == n;
    };
    return (checksq(a) || checksq(b));
}

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (ll& x : a) {
            cin >> x;
            if (fib(x)) {
                cout << x << " ";
            }
        }
        cout << NL;
    }

    return 0;
}