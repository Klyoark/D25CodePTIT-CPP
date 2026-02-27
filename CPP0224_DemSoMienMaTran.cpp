#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

int m, n;
vector<vector<int>> a(m, vector<int>(n));
constexpr int car[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
constexpr int diag[8] = {-1, 0, 1, 1, 1, 0, -1, -1};

void dfs(int r, int c) {
    a[r][c] = 0;
    for (int i = 0; i < 8; ++i) {
        int x = r + car[i];
        int y = c + diag[i];
        if (x >= 0 && y >= 0 && x < m && y < n && a[x][y] == 1) {
            dfs(x, y);
        }
    }
}

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        cin >> m >> n;
        a.assign(m, vector<int>(n));

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> a[i][j];
            }
        }

        int res = 0;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (a[i][j] == 1) {
                    ++res;
                    dfs(i, j);
                }
            }
        }

        cout << res << NL;
    }

    return 0;
}