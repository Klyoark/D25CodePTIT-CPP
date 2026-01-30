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
        int n;
        cin >> n;
        vector<int> a(n);
        int min1 = 1e8, min2 = 1e8;
        for (int& x : a) {
            cin >> x;
            if (x < min1) {
                min2 = min1;
                min1 = x;
            } else if (x < min2 && x != min1) {
                min2 = x;
            }
        }
        if (min2 == 1e8) {
            cout << -1 << NL;
        } else {
            cout << min1 << " " << min2 << NL;
        }
    }

    return 0;
}