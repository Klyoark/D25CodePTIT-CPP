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
        vector<int> out(m * n);
        int ptr = 0;
        int top, bot, left, right;
        top = left = 0;
        bot = m - 1;
        right = n - 1;

        while (left <= right && top <= bot) {
            for (int i = left; i <= right; ++i) {
                out[ptr++] = a[top][i];
            }
            top++;

            for (int i = top; i <= bot; ++i) {
                out[ptr++] = a[i][right];
            }
            right--;

            if (left <= right && top <= bot) {
                for (int i = right; i >= left; --i) {
                    out[ptr++] = a[bot][i];
                }
                bot--;
                for (int i = bot; i >= top; --i) {
                    out[ptr++] = a[i][left];;
                }
                left++;
            }
        }
        reverse(out.begin(), out.end());
        for (int i = 0; i < m * n; ++i) {
            cout << out[i] << " ";
        }
        cout << NL;
    }

    return 0;
}