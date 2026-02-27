#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

int main() {
    fastio;

    string s;
    cin >> s;
    int len = s.length();

    bool p = false;
    int res = 0;
    for (int i = len - 1; i >= 0; --i) {
        char e = s[i];
        if (p) {
            e = (e == 'A' ? 'B' : 'A');
        }

        if (e == 'B') {
            if (i == 0) {
                ++res;
            } else {
                char left = s[i - 1];

                if (p) {
                    left = (left == 'A' ? 'B' : 'A');
                }

                if (left == 'B') {
                    ++res;
                    p ^= 1;
                } else {
                    ++res;
                }
            }
        }
    }
    
    cout << res;

    return 0;
}