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
        sort(a.begin(), a.end());
        
        bool ok = false;
        int low = 0, high = n - 1, mid = 0;
        while (low <= high) {
            mid = low + (high - low) / 2;
            if (a[mid] == k) {
                ok = true;
                break;
            }
            if (a[mid] > k) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        cout << (ok ? 1 : -1) << NL;
    }

    return 0;
}