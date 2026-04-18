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
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));
        vector<int> f(m, 0);
        int res = 0;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> a[i][j];
                if (a[i][j]) {
                    ++f[j];
                } else {
                    f[j] = 0;
                }
            }
            vector<int> tmp = f;
            sort(tmp.begin(), tmp.end(), [](int a, int b){
                return a > b;
            });

            for (int j = 0; j < m; ++j) {
                int s = tmp[j] * (j + 1);
                res = max(res, s);
            }
        }
        
        cout << res << NL;
    }

    return 0;
}