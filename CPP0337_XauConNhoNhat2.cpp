#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

int res(const string& s){
    int l = 0, r = 0, len = 1e8, ok = 0;
    unordered_set<char> cset;
    vector<int> f(256, 0);

    for (char c : s) {
        cset.insert(c);
    }

    while (r < s.size()) {
        char c = s[r];
        ++r;
        if (cset.count(c)) {
            ++f[c];
            if (f[c] == 1) {
                ++ok;
            }
        }

        while (ok == cset.size()) {
            if (r - l < len) {
                len = r - l;
            }

            char d = s[l];
            ++l;

            if (f[d]) {
                --f[d];
                if (f[d] == 0) {
                    --ok;
                }
            }
        }
    }

    return (len == 1e8 ? -1 : len);
}

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << res(s) << NL;
    }

    return 0;
}