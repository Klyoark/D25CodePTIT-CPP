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

    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n));
    vector<int> in(n * n);
    int ptr = 0;
    for (int i = 0; i < n * n; ++i) {
        cin >> in[i];
    }
    sort(in.begin(), in.end());
    int top, bot, left, right;
    top = left = 0;
    bot = n - 1;
    right = n - 1;

    while (left <= right && top <= bot) {
        for (int i = left; i <= right; ++i) {
            a[top][i] = in[ptr++];
        }
        top++;

        for (int i = top; i <= bot; ++i) {
            a[i][right] = in[ptr++];
        }
        right--;

        if (left <= right && top <= bot) {
            for (int i = right; i >= left; --i) {
                a[bot][i] = in[ptr++];
            }
            bot--;
            for (int i = bot; i >= top; --i) {
                a[i][left] = in[ptr++];
            }
            left++;
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << a[i][j] << " ";
        }
        cout << NL;
    }

    cout << NL;

    return 0;
}