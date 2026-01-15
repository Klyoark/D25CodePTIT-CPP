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
        int n;
        cin >> n;
        unordered_map<int, int> a;
        int x;
        for (int i = 0; i < n; ++i) {
            cin >> x;
            a[x]++;
        }
        int res = 0;
        for (auto& um : a) {
            if (um.second > 1) {
                res += um.second;
            }
        }
        cout << res << NL;
    }

    return 0;
}