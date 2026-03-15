#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;


vector<ll> f(93, -1);
ll fib(ll n) {
    if (n == 0) {
        f[n] = 0;
    }
    if (n == 1) {
        f[n] = 1;
    }
    if (f[n] != -1) {
        return f[n];
    }
    f[n] = fib(n - 1) + fib(n - 2);
    return f[n];
}

int main() {
    fastio;
    fib(91);
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        
        bool ok = false;
        for (int i = 0; i < 92; ++i) {
            if (f[i] == n) {
                ok = true;
                break;
            }
            if (f[i] > n) {
                break;
            }
        }
        cout << (ok ? "YES\n" : "NO\n");
    }

    return 0;
}