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

        sort(a.begin(), a.end());
        vector<int> res(n);
        int i = 0;
        for (int j = 0; j < n; j += 2) {
            res[j] = a[i++];
        }
        for (int j = 1; j < n; j += 2) {
            res[j] = a[i++];
        }
        for (int& x : res) {
            cout << x << " ";
        }
        cout << NL;
    }

    return 0;
}