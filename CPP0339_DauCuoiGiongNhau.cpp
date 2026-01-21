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
        vector<ll> cnt(26, 0);
        for (const char& c : s) {
            cnt[c - 'a']++;
        }
        ll res = 0;
        for (int i = 0; i < 26; ++i) { //test all alphabetical letters --> ket qua la chap 2, co n chon 2
            if (cnt[i] > 0) {
                res += (cnt[i] * (cnt[i] + 1)) / 2;
            }
        }
        cout << res << NL;
    }

    return 0;
}