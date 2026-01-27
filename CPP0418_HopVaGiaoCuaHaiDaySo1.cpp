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
        map<int, int> fm;
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        vector<int> b(m);

        int x;
        for (int i = 0; i < n; ++i) {
            cin >> x;
            fm[x]++;
        }
        for (int j = 0; j < m; ++j) {
            cin >> x;
            fm[x]++;
        }
        for (const pair<const int, int>& x : fm) {
            cout << x.first << " ";
        }
        cout << NL;

        for (const pair<const int, int>& x : fm) {
            if (x.second >= 2) {
                cout << x.first << " ";
            }
        }
        cout << NL;
    }

    return 0;
}