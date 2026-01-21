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
        int k;
        cin >> s >> k;
        int r = 0;
        for (int i = 0; i < s.length(); ++i) {
            vector<bool> v(26, false);
            int unique = 0;
            for (int j = i; j < s.length(); ++j) {
                if (!v[s[j] - 'a']) {
                    v[s[j] - 'a'] = true;
                    unique++;
                }
                if (unique == k) {
                    r++;
                } else if (unique > k) {
                    break;
                }
            }
        }
        cout << r << NL;
    }

    return 0;
}