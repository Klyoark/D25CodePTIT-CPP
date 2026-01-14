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
        int n;
        cin >> n;
        vector<int> x(n);
        for (int& a : x) {
            cin >> a;
        }
        sort(x.begin(), x.end());
        int m = 1e9 + 1;
        for (int i = 1; i < n; ++i) {
            m = min(m, x[i] - x[i - 1]);
        }
        cout << m << NL;
    }
    return 0;
}