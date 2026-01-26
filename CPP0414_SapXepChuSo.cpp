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
        int n;
        cin >> n;

        vector<bool> f(10);
        int cnt = 0;
        bool ok = 0;
        for (int i = 0; i < n; ++i) {
            string s;
            cin >> s;
            if (ok) {
                continue;
            }
            for (char x : s) {
                int d = x - '0';
                if (!f[d]) {
                    f[d] = true;
                    cnt++;
                    if (cnt == 10) {
                        ok = true;
                        break;
                    }
                }
            }
        }     
        for (int i = 0; i < 10; ++i) {
            if (f[i]) {
                cout << i << " ";
            }
        }
        cout << NL;
    }

    return 0;
}