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
        string s;
        cin >> s;
        int res = 0;
        vector<char> a;
        for (auto x : s) {
            if (isalpha(x)) {
                a.push_back(x);
            } else {
                res += (x - '0');
            }
        }
        sort(a.begin(), a.end());
        for (auto x : a) {
            cout << x;
        }
        cout << res << NL;
    }

    return 0;
}