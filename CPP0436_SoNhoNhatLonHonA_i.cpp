#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

int binary_upperbound(const vector<int>& a, int k) {
    int low = 0;
    int high = a.size();
    while (low < high) {
        int mid = low + (high - low) / 2;
        if (a[mid] <= k) {
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
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> bs_a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            bs_a[i] = a[i];
        }
        sort(bs_a.begin(), bs_a.end());

        for (int i = 0; i < n; ++i) {
            int idx = binary_upperbound(bs_a, a[i]);
            if (idx == bs_a.size()) {
                cout << "_ ";
            } else {
                cout << bs_a[idx] << " ";
            }
        }
        cout << NL;
    }

    return 0;
}