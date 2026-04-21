#include <bits/stdc++.h>
#define fastio \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        if (n % 400 == 0) {
            cout << "Yes" << NL;
        } else if ((n % 4 == 0) && (n % 100 != 0)) {
            cout << "Yes" <<  NL;
        } else {
            cout << "No" << NL;
        }
    }

    return 0;
}
