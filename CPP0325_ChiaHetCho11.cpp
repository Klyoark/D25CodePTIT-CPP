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
        string s;
        cin >> s;
        ll n = 0;
        for (int i = 0; i < s.length(); ++i) {
            int d = (int)(s[i] - '0');
            if (i % 2 == 0) {
                n += d;
            } else {
                n -= d;
            }
        }
        cout << (n % 11 == 0 ? 1 : 0) << NL;
    }

    return 0;
}