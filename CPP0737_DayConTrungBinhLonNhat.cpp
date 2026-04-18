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
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int& x : a) {
            cin >> x;
        }
        ll sum = 0;
        for (int i = 0; i < k; ++i) {
            sum += a[i];
        }
        ll maxs = sum;
        int start = 0;

        for (int i = k; i < n; ++i) {
            sum += a[i] - a[i - k];
            if (sum > maxs) {
                maxs = sum;
                start = i -k + 1;
            }
        }
        for (int i = start; i < start + k; ++i) {
            cout << a[i] << " ";
        }
        cout << NL;
    }

    return 0;
}