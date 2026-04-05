#include <bits/stdc++.h>
#define fastio \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

int main() {
    fastio;

    int t;
    cin >> t;;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> a(n, vector<int>(n));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> a[i][j];
                if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                    cout << a[i][j] << " ";
                } else {
                    cout << "  ";
                }
            }
            cout << NL;
        }
        cout << NL;
    }

    return 0;
}
