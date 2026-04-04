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

        int ptr = 0, n = s.length();
        for (int i = 0; i < n; ) {
            ptr = i;
            while (ptr < n && s[ptr] == s[i]) {
                ++ptr;
            }
            cout << s[i] << ptr - i;
            i = ptr;
        }
        cout << NL;
    }

    return 0;
}