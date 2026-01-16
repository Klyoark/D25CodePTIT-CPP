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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int& x : a) {
            cin >> x;
        }
        vector<int> LMin(n);
        vector<int> RMax(n);
        LMin[0] = a[0];
        for (int i = 1; i < n; ++i) {
            LMin[i] = min(a[i], LMin[i - 1]);
        }

        RMax[n - 1] = a[n - 1];
        for (int j = n - 2; j >= 0; --j) {
            RMax[j] = max(a[j], RMax[j + 1]);
        }
        int i = 0, j = 0, diff = -1;
        while (i < n && j < n) {
            if (LMin[i] <= RMax[j]) {
                diff = max(diff, j - i);
                j++;
            } else {
                i++;
            }
        }
        cout << diff << NL;
    }

    return 0;
}