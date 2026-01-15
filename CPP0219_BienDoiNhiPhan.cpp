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
        vector<vector<int>> a(m, vector<int>(n, 0));    
        vector<int> h(m, 0);
        vector<int> c(n, 0);
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> a[i][j];
                if (a[i][j]) {
                    h[i] = 1;
                    c[j] = 1;
                }
            }
        }
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (h[i] || c[j]) {
                    cout << 1 <<  " "; 
                } else {
                    cout << 0 <<  " ";
                }
            }
            cout << NL;
        }
    }
    return 0;
}