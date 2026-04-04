#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

string res(const string& s1, const string& s2) {
    int l = 0, r = 0, ok = 0, len = 1e8, begin = 0;
    unordered_map<char, int> need, win;

    while (r < s1.length()) {
        char c = s1[r];
        ++r;
        if (need.count(c)) {
            ++win[c];
            if (win[c] == need[c]) {
                ++ok;
            }
        }
        
        while (ok == need.size()) {
            if (len < r - l) {
                len = r - l;
                begin = l;
            }

            char d = s1[l];
            ++l;
            if (need.count(d)) {
                if (win[d] == need[d]) {
                    --ok;
                }
                --win[d];
            }
        }
    }

    return (len == 1e8 ? "-1" : s1.substr(begin, len));
}

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;
        cout << res(s1, s2) << NL;
    }

    return 0;
}