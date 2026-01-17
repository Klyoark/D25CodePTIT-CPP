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
        int m, n;
        cin >> m >> n;
        vector<vector<int>> a(m, vector<int>(n));
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> a[i][j];
            }
        }
        int top, bot, left, right;
        top = left = 0;
        bot = m - 1;
        right = n - 1;

        while (left <= right && top <= bot) {
            for (int i = left; i <= right; ++i) {
                cout << a[top][i] << " ";
            }
            top++;

            for (int i = top; i <= bot; ++i) {
                cout << a[i][right] << " ";
            }
            right--;

            if (left <= right && top <= bot) {
                for (int i = right; i >= left; --i) {
                    cout << a[bot][i] << " ";
                }
                bot--;
                for (int i = bot; i >= top; --i) {
                    cout << a[i][left] << " ";
                }
                left++;
            }
        }
        cout << NL;
    }

    return 0;
}