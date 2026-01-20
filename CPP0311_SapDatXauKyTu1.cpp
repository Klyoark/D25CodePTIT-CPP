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
        vector<int> a(26, 0);
        for (int i = 0; i < s.length(); ++i) {
            a[s[i] - 'a']++;
        }
        int cnt = 0;
        for (auto x : a) {
            cnt = max(cnt, x);
        }
        if (cnt <= (s.length() + 1) / 2) {
            cout << 1 << NL;
        } else {
            cout << 0 << NL;
        }
    }

    return 0;
}