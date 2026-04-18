#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;
constexpr ll MOD = 1e9 + 7;

vector<ll> f(1001, 0);
void fib() {
    f[0] = 0;
    f[1] = 1;
    for (int i = 2; i <= 1000; ++i) {
        f[i] = (f[i - 1] + f[i - 2]) % MOD;
    }
}

int main() {
    fastio;
    fib();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << f[n] << NL;
    }

    return 0;
}