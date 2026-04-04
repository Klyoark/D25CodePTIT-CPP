#include <bits/stdc++.h>
#define fastio \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

bool swapok(string& x, string& y) {
    if (x.length() != y.length()) {
        return x.length() < y.length();
    }
    return (x < y);
}

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        string x, y;
        cin >> x >> y;

        if (swapok(x, y)) {
            swap(x, y);
        }

        string res = "";
        int muon = 0;
        int i = x.length() - 1, j = y.length() - 1;
        while (i >= 0) {
            int d = (x[i] - '0') - muon;
            if (j >= 0) {
                d -= (y[j] - '0');
            }

            if (d < 0) {
                muon = 1;
                d += 10;
            } else {
                muon = 0;
            }

            res.push_back(d + '0');

            --i;
            --j;
        }
        reverse(res.begin(), res.end());

        cout << res << NL;
    }

    return 0;
}