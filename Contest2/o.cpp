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
        int k, n;
        cin >> k >> n;
        vector<int> a(k * n);
        for (int& x : a) {
            cin >> x;
        }
        sort(a.begin(), a.end());
        for (int x : a) {
            cout << x << " ";
        }
        cout << NL;
    }

    return 0;
}
