#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

int k, res;

void next(vector<vector<int>>& a, int x, int y, int n, int sum) {
    sum += a[x][y];
    if (x == n - 1 && y == n - 1) {
        if (sum == k) {
            ++res;
        }
        return;
    }

    if (x + 1 < n) {
        next(a, x + 1, y, n, sum);
    }
    if (y + 1 < n) {
        next(a, x, y + 1, n, sum);
    }
}


int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        res = 0;
        int n;
        cin >> n >> k;
        vector<vector<int>> a(n, vector<int>(n));

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> a[i][j];
            }
        }
        next(a, 0, 0, n, 0);
        cout << res << NL;
    }

    return 0;
}