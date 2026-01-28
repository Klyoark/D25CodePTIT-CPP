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
        int k, n;
        cin >> k >> n;
        vector<int> a;

        int x;
        for (int i = 0; i < k; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> x;
                a.push_back(x);  
            }
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < k * n; ++i) {
            cout << a[i] << " ";
        }
        cout << NL;
    }

    return 0;
}