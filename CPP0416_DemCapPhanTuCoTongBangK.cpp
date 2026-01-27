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
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int& x : a) {
            cin >> x;
        }
        stable_sort(a.begin(), a.end());
        int cnt = 0;
        for (int i = 0; i < a.size(); ++i) {
            for (int j = i + 1; j < a.size(); ++j) {
                if (a[i] + a[j] == k) {
                    cnt++;
                }
                if (a[i] + a[j] > k) {
                    break;
                }
            }
        }
        cout << cnt << NL;
    }

    return 0;
}