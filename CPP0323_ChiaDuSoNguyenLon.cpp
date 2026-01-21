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
        string n;
        ll m;
        ll k = 0;
        cin >> n >> m;
        for (char x : n) {
            k = k * 10 + (x - '0');
            k %= m;
        }
        cout << k << NL;
    }

    return 0;
}