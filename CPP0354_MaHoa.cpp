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
        int ptr = 0;
        for (int i = 0; i < s.length(); ++i) {
            ptr = i;
            while (ptr < s.length() && s[i] == s[ptr]) {
                ptr++;
            }
            cout << s[i] << ptr - i;
            i = ptr - 1;
        }
        cout << NL;
    }

    return 0;
}