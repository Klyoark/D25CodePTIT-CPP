#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
#define pb push_back
#define pa pop_back
constexpr char NL = '\n';
using namespace std;

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        string x, y;
        cin >> x >> y;
        cout << [&]() -> string {
            int max_len = max(x.length(), y.length());
            while (x.length() < max_len) {
                x = '0' + x;
            }
            while (y.length() < max_len) {
                y = '0' + y;
            }
            if (x < y) {
                swap(x, y);
            }

            string res = "";
            int carry = 0;
            for (int i = max_len - 1; i >= 0; --i) {
                int d = (x[i] - '0') + (y[i] - '0') + carry;
                carry = d / 10;
                res = char(d % 10 + '0') + res;
            }
            if (carry) {
                res = char(carry + '0') + res;
            }
            return res;
        }() << NL;
    }

    return 0;
}