#include <bits/stdc++.h>
#define fastio                   \
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
        char c;
        cin >> c;
        if (c >= 'a' && c <= 'z') {
            cout << (char)(c - 32) << NL;
        } else {
            cout << (char)(c + 32) << NL;
        }
    }

    return 0;
}