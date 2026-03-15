#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

void gen(int pos, vector<int>& a, int n) {
    if (pos == n) {
        for (int i = 0; i < n; ++i) {
            cout << a[i];
        }
        cout << " ";
        return;
    }

    for (int j = 0; j <= 1; ++j) {
        a[pos] = j;
        gen(pos + 1, a, n);
    }
}

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        gen(0, a, n);
        cout << NL;
    }

    return 0;
}