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
        int ok = 1;
        [&](){
            if (s[0] == '0') {
                ok = -1;
                return;
            }

            vector<int> cnt(10, 0);
            for (auto x : s) {
                if (x - '0' >= 0 && x - '0' <= 9) {
                    cnt[x - '0']++;
                } else {
                    ok = -1;
                    return;
                }
            }

            for (auto x : cnt) {
                if (!x) {
                    ok = 0;
                    return;
                }
            }
            ok = 1;
            return;
        }();

        if (ok == 1) {
            cout << "YES\n";
        } else if (!ok) {
            cout << "NO\n";
        } else {
            cout << "INVALID\n";
        }
    }
    

    return 0;
}