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
    vector<vector<int>> a(n, vector<int>(3));
    int m, k, x, ok = 0;
    for (int i = 0; i < n; ++i) {
        m = 0;
        k = 0;
        for (int j = 0; j < 3; ++j) {
            cin >> x;
            if (x) {
                m++;
            } else {
                k++;
            }
        }
        if (m > k) {
            ok++;
        }
    }
    cout << ok;

    return 0;
}