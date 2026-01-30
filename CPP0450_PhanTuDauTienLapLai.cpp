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
        vector<int> a(n);
        unordered_map<int, int> mp;
        bool ok = false;
        int res = -1;
        for (int& x : a) {
            cin >> x;
            mp[x]++;
            if (mp[x] == 2 && !ok) {
                res = x;
                ok = true;
            }
        }
        cout << res << NL;;
    }

    return 0;
}