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
        int len = s.length();

        int i = len - 2;
        while (i >= 0 && s[i] <= s[i + 1]) {
            --i;
        }
        int pos = i;

        if (pos == -1) {
            cout << "-1\n";
            continue;
        }

        int pswap = -1;
        for (int i = len - 1; i > pos; --i) {
            if (s[i] < s[pos]) {
                if (pswap == -1 || s[i] >= s[pswap]) {
                    pswap = i;
                }
            }
        }

        swap (s[pos], s[pswap]);

        if (s[0] == '0') {
            cout << "-1\n";
        } else {
            cout << s << NL;
        }
    }

    return 0;
}