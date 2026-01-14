#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
#define pb push_back
#define pa pop_back
constexpr char NL = '\n';
using namespace std;

int main() {
    fastio;

    int t;
    cin >> t;

    while (t--) {
        ll n, k;
        cin >> n >> k;

        if (k == 0) {
            cout << 0 << NL;
        } else if (k > n) {
            ll s = n * (n + 1) / 2;
            cout << (s == k) << NL;
        } else if (n == 4 && k == 2) {
            cout << 1 << NL;
        } 
        else {
            cout << 0 << NL;
        }
    }

    return 0;
}