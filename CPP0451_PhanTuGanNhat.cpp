#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

int idxLowerBound(const vector<int>& a, int x) {
    int low = 0;
    int high = a.size();
    int mid;
    while (low < high) {
        mid = low + (high - low) / 2;
        if (a[mid] < x) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }
    return low;
}

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        int n, x, k;
        cin >> n;
        vector<int> a(n);
        for (int& b : a) {
            cin >> b;
        }
        cin >> x >> k;

        int idx = idxLowerBound(a, x);
        for (int p = k / 2; p >= 1 && idx - p >= 0; --p) {
            cout << a[idx - p] << " ";
        }
        for (int q = 1; q <= k / 2 && idx + q < n; ++q) {
            cout << a[idx + q] << " ";
        }
        cout << NL;
    }

    return 0;
}