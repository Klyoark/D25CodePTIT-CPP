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
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int& x : a) {
            cin >> x;
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < k; ++i) {
            cout << a[n - 1 - i] << " ";
        }
        cout << NL;
    }

    return 0;
}
