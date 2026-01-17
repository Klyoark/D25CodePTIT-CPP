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
        int n, k;
        cin >> n >> k;
        vector<int> a(n * n);
        for (int& x : a ) {
            cin >> x;
        }
        sort(a.begin(), a.end());
        cout << a[k - 1] << NL;
    }

    return 0;
}