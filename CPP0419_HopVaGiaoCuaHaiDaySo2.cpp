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
        map<int, int> fm;
        int n, m;
        cin >> n >> m;
        vector<int> U;
        vector<int> I;

        int x;
        for (int i = 0; i < n; ++i) {
            cin >> x;
            fm[x]++;
        }
        for (int j = 0; j < m; ++j) {
            cin >> x;
            fm[x]++;
        }

        for (const pair<const int, int>& x : fm) {
            U.push_back(x.first);
        }
        sort(U.begin(), U.end());

        for (const pair<const int, int>& x : fm) {
            if (x.second >= 2) {
                I.push_back(x.first);
            }
        }
        sort(I.begin(), I.end());

        for (int& x : U) {
            cout << x << " ";
        }
        cout << NL;
        for (int& x : I) {
            cout << x << " ";
        }
        cout << NL;
    }

    return 0;
}