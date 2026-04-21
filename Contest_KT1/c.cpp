#include <bits/stdc++.h>
#define fastio \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

vector<uint8_t> f(1000000 + 5, 1);
void p() {
    f[0] = f[1] = 0;
    for (int i = 2; i * i <= 1000000; ++i) {
        if (f[i]) {
            for (int j = i * i; j <= 1000000; j += i) {
                f[j] = 0;
            }
        }
    }
}

int main() {
    fastio;
    p();
    int t;
    cin >> t;
    while (t--) {
        ll L, R;
        cin >> L >> R;
        ll S = 1LL * floor(sqrt(L));
        ll E = 1LL * floor(sqrt(R));
        ll res = 0;
        for (int i = S; i <= E; ++i) {
            if (f[i]) {
                ++res;
            }
        }
        cout << res << NL;
    }

    return 0;
}
