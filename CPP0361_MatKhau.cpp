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
    unordered_map<string, int> f;
    vector<string> a(n);

    for (string& s : a) {
        cin >> s;
        ++f[s];
    }

    int res = 0;
    int cnt = 0;

    for (string& s : a) {
        int len = s.length();
        unordered_set<string> g;
        cnt = 0;
        for (int i = 0; i < len; ++i) {
            string ss = "";
            for (int j = i; j < len; ++j) {
                ss.push_back(s[j]);
                if (g.insert(ss).second) {
                    if (f.count(ss)) {
                        cnt += f[ss];
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