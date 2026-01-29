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

        vector<int> a;
        map<int, int> fmap;

        int x;
        for (int i = 0; i < n; ++i) {
            cin >> x;
            if (fmap[x] == 0) {
                a.push_back(x);
            }
            fmap[x]++;
        }

        sort(a.begin(), a.end(), [&](int a, int b) {
            if (fmap[a] != fmap[b]) {
                return fmap[a] > fmap[b];
            }
            return a < b;
        });

        for (int& x : a) {
            for (int i = 0; i < fmap[x]; ++i) {
                cout << x << " ";
            }
        }
        cout << NL;
    }

    return 0;
}