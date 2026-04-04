#include <bits/stdc++.h>
#define fastio \
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
        string x, y;
        cin >> x >> y;
        
        string res = "";
        int carry = 0;
        int i = x.length() - 1, j = y.length() - 1;
        while (i >= 0 || j >= 0 || carry) {
            int s = carry;
            if (i >= 0) {
                s += (x[i] - '0');
            }
            if (j >= 0) {
                s += (y[j] - '0');
            }
            carry = s / 10;
            res.push_back((s % 10) + '0');
            --i;
            --j;
        }
        reverse(res.begin(), res.end());

        cout << res << NL;
    }

    return 0;
}