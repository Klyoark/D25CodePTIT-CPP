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
        int n, d;
        cin >> n >> d;
        vector<int> a(n);
        for (int& x : a) {
            cin >> x;
        }
        for (int i = 0; i < n; ++i) {
            cout << a[(i + d) % n] << " ";
        }
        cout << NL;
    }

    return 0;
}