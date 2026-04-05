#include <bits/stdc++.h>
#define fastio \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

int main() {
    fastio;


        int n;
        cin >> n;
        vector<vector<int>> a(n, vector<int>(3));
        int res = 0;
        for (int i = 0; i < n; ++i) {
            int m = 0, k = 0;
            for (int j = 0; j < 3; ++j) {
                cin >> a[i][j];
                if (a[i][j] == 1) {
                    ++m;
                } else {
                    ++k;
                }
            }
            if (m > k) ++res;
        }
        cout << res << NL;


    return 0;
}
