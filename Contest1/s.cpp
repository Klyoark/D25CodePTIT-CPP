#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

int ibise(vector<int>& a, int n, int x) {
    int low = 0, high = n - 1, mid;
    while (low <= high) {
        mid = low + (high - low) / 2;
        if (a[mid] == x) {
            return mid + 1;
        }
        if (a[low] <= a[mid]) {
            if (x >= a[low] && x < a[mid]) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        } else {
            if (x > a[mid] && x <= a[high]) {
                low = mid + 1;
            } else {
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
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int& k : a) {
            cin >> k;
        }
        cout << ibise(a, n, x) << NL;
    }

    return 0;
}