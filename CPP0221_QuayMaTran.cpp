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
        // m x n -> n x m
        vector<vector<int>> a(m, vector<int>(n));
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> a[i][j];
            }
        }

        int top = 0, bot = m - 1;
        int left = 0, right = n - 1;
        while (top < bot && left < right) {
            int prev = a[top + 1][left]; //THE top left of b after rotation.

            for (int i = left; i <= right; ++i) {
                swap(a[top][i], prev);
            }
            top++;

            for (int i = top; i <= bot; ++i) {
                swap(a[i][right], prev);
            }
            right--;

            for (int i = right; i >= left; --i) {
                swap(a[bot][i], prev);
            }
            bot--;

            for (int i = bot; i >= top; --i) {
                swap(a[i][left], prev);
            }
            left++;
        }
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                cout << a[i][j] << " ";
            }
        }
        cout << NL;
    }

    return 0;
}