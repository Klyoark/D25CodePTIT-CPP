#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
#define pub push_back
#define pob pop_back
constexpr char NL = '\n';
using namespace std;

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        if (n == 0) {
            cout << 0 << NL;
        } else {
            cout << 1 + (n - 1) % 9 << NL;
        }
    }

    return 0;
}