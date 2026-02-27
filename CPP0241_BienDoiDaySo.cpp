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
        for (int& x : a) {
            cin >> x;
        }

        int i = 0, j = n - 1;
        int res = 0;
        while (i < j) {
            if (a[i] == a[j]) {
                ++i;
                --j;
            } else if (a[i] < a[j]) {
                a[i + 1] += a[i];
                ++i;
                ++res;
            } else if (a[i] > a[j]) {
                a[j - 1] += a[j];
                --j;
                ++res;
            }
        }
        cout << res << NL;
    }

    return 0;
}