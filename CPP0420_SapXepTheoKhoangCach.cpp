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
        int n, x;
        cin >> n >> x;
        vector<pair<int, int>> vp(n);

        for (int i = 0; i < n; ++i) {
            cin >> vp[i].first;
            vp[i].second = i;
        }

        stable_sort(vp.begin(), vp.end(), [&](const pair<int, int>& a, const pair<int, int>& b) -> bool {
            int d1 = abs(x - a.first);
            int d2 = abs(x - b.first);
            return d1 < d2;
        });

        for (int i = 0; i < n; ++i) {
            cout << vp[i].first << " ";
        }
        cout << NL;
    }

    return 0;
}