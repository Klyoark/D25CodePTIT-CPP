#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

int main() {
    fastio;

    int n;
    cin >> n;
    vector<string> a(n);
    unordered_map<string, int> freqmap;
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        freqmap[a[i]]++;
    }

    int res = 0;

    for (string& s : a) {
        int len = s.length();
        unordered_set<string> genres;

        int cnt = 0;
        for (int i = 0; i < len; ++i) {
            string substr = "";
            for (int j = i; j < len; ++j) {
                substr.push_back(s[j]);

                if (genres.insert(substr).second) {
                    if (freqmap.count(substr)) {
                        cnt += freqmap[substr];
                    }
                }
            }
        }

        --cnt;
        res += cnt;
    }

    cout << res << NL;

    return 0;
}