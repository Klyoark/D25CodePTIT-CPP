#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        int m, n;
        cin >> m >> n;
        vector<int> a(n + m);
        for (int i = 0; i < m + n; ++i) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        for(int &x : a) {
            cout << x <<  " ";
        }
        cout << NL;
    }

    return 0;
}