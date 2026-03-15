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
        string x, y;
        cin >> x >> y;
        int lenx = x.length(), leny = y.length();
        vector<int> vres(lenx + leny, 0);

        for (int i = lenx - 1; i >= 0; --i) {
            for (int j = leny - 1; j >= 0; --j) {
                int d = (x[i] - '0') * (y[j] - '0');
                vres[i + j + 1] += d;
            }
        }

        for (int i = lenx + leny - 1; i > 0; --i) {
            if (vres[i] >= 10) {
                vres[i - 1] += vres[i] / 10;
                vres[i] %= 10;
            }
        }

        string res = "";
        int i = 0;
        while (i < lenx + leny && vres[i] == 0) {
            ++i;
        }
        while (i < lenx + leny) {
            res += (vres[i] + '0');
            ++i;
        }

        cout << (res.empty() ? "0" : res) << NL;
    }

    return 0;
}