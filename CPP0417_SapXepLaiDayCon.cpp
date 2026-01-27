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
        vector<int> b(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b.begin(), b.end());
        int i = 0, j = n - 1;
        while (a[i] == b[i]) {
            i++;
        }
        while (a[j] == b[j]) {
            j--;
        }
        cout << i + 1 << " " << j + 1 << NL;
    }

    return 0;
}