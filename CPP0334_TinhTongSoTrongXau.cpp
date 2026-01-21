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
        for (int i = 0; i < s.length(); ++i) {
            if (!isdigit(s[i])) {
                s[i] = ' ';
            }
        }
        stringstream str(s);
        ll n;
        ll sum = 0;
        while (str >> n) {
            sum += n;
        }
        cout << sum << NL;
    }

    return 0;
}