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

        string res = [&]() -> string {
            string tmp = "";
            bool carry = false;
            for (int i = max_len - 1; i >= 0; --i) {
                int d = (x[i] - '0') - (y[i] - '0') - (carry ? 1 : 0);
                if (d < 0) {
                    carry = true;
                    d += 10;
                } else {
                    carry = false;
                }
                tmp = char(d + '0') + tmp;
            }
            return tmp;
        }();

        cout << res << NL;
    }

    return 0;
}