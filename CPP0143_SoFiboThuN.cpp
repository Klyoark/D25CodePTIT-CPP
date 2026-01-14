#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
#define pb push_back
#define pa pop_back
constexpr char NL = '\n';
using namespace std;

vector<ll> memo(93, -1);
ll fib(ll n) {
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
    fastio;
    fib(92);
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        cout << memo[n] << NL;
    }

    return 0;
}