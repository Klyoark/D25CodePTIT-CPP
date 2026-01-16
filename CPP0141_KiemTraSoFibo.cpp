#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
#define pb push_back
#define pa pop_back
constexpr char NL = '\n';
using namespace std;

static vector<ll> memo(93, -1);
ll fib(int n) {
    if (n == 0) {
        memo[n] = 0;
    }
    if (n == 1) {
        memo[n] = 1;
    }
    if (memo[n] != -1) {
        return memo[n];
    }
    memo[n] = fib(n - 1) + fib(n - 2);
    return memo[n];
}

int main() {
    static mt19937 rng(random_device{}());
    uniform_int_distribution<int> dist(0, 1);

    fastio;
    int t;
    cin >> t;
    if (dist(rng)) {
        fib(92);
        while (t--) {
            ll n;
            cin >> n;
            bool ok = false;
            for (int i = 0; i < 93; ++i) {
                if (memo[i] == n) {
                    ok = true;
                    break;
                }
                if (memo[i] > n) {
                    break;
                }
            }
            cout << (ok ? "YES\n" : "NO\n");
        }
    } else {
        while (t--) {
            ll n;
            cin >> n;
            __int128_t nn = (__int128_t)n * n;
            __int128_t a = 5 * nn + 4;
            __int128_t b = 5 * nn - 4;

            auto square = [&](__int128_t x){
                if (x < 0) {
                    return false;
                }
                ll root = sqrt((long double) x );
                return (__int128_t)root * root == x;
            };

            cout << (square(a) || square(b) ? "YES\n" : "NO\n");
        }
    }

    return 0;
}