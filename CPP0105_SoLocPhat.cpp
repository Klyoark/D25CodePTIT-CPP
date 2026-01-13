#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false); 
#define ll long long
#define pub push_back
#define pob pop_back
constexpr char NL = '\n';
using namespace std;

int solve(ll n) {
    ll x = n;
    int d;
    while (x > 0) {
        d = x % 10;
        if (d != 0 && d != 6 && d != 8) {
            return 0;
        }
        x /= 10;
    }
    return 1;
}

int main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        int check = solve(n);
        cout << (check ? "YES\n" : "NO\n");
    }
}