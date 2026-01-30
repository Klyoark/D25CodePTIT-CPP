#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

int ibinary_search(const vector<int>& a, int n, int k) {
    int low = 0, high = n - 1, mid = 0;
    while (low <= high) {
        mid = low + (high - low) / 2;
        if (a[mid] == k) {
            return (mid + 1);
        }
        if (a[low] <= a[mid]) {
            if (k >= a[low] && k < a[mid]) { //k in range
                high = mid - 1;
            } else { //k not in range, update
                low = mid + 1;
            }
        } else { //a[low] > a[mid]
            if (k > a[mid] && k <= a[high]) { //k in range
                low = mid + 1;
            } else { //same, push away since k is not here
                high = mid - 1;
            }
        }
    }

    return -1;
}

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
        cout << ibinary_search(a, n, k) << NL;
    }

    return 0;
}