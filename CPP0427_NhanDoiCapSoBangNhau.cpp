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
        for (int i = 0; i < n - 1; ++i) {
            if (a[i] == 0) {
                continue;
            }
            if (a[i] == a[i + 1]) {
                a[i] = a[i] * 2;
                a[i + 1] = 0;
            }
        }
        int cnt = 0;
        vector<int>::iterator ite = stable_partition(a.begin(), a.end(), [&](int x) -> bool {
            return x != 0;
        });
        for (int& x : a) {
            cout << x << " ";
        }
        cout << NL;
    }

    return 0;
}
