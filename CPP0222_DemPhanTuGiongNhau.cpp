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
        vector<vector<int>> a(n, vector<int>(n));
        set<int> res;

        for (int j = 0; j < n; ++j) {
            cin >> a[0][j];
            res.insert(a[0][j]);
        }
        for (int i = 1; i < n; ++i) {
            set<int> row;
            for (int j = 0; j < n; ++j) {
                cin >> a[i][j];
                row.insert(a[i][j]);
            }
            for (auto ite = res.begin(); ite != res.end(); ) {
                if (row.find(*ite) == row.end()) {
                    ite = res.erase(ite); 
                } else {
                    ++ite;
                }
            }
        } 
        int cnt = 0;
        for (int x : res) {
            cnt++;
        }
        cout << cnt << NL;
    }

    return 0;
}