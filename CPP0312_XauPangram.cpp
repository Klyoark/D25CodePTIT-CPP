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
        vector<int> a(26, 0);
        for (auto x : s) {
            a[x - 'a']++;
        }
        int cnt = 0;
        for (int i = 0; i < 26; ++i) {
            if (!a[i]) {
                cnt++;
            }
        }
        cout << (s.length() >= 26 && k >= cnt) << NL;
    }

    return 0;
}