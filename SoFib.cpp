#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false);
#define ll long long
#define pub push_back
#define pob pop_back
constexpr char NL = '\n';
using namespace std;

vector<ll> memo(95);
ll fib(int n) {
    if (n <= 1) {
        memo[n] = 1;
    }
    if (memo[n]) {
        return memo[n];
    }
    memo[n] = fib(n - 1) + fib(n - 2);
    return memo[n];
}
int main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        fib(b);
        for (int i = a - 1; i < b; ++i) {
            cout << memo[i] << " ";
        }
        cout << NL;
    }
}