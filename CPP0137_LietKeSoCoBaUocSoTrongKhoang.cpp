#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
#define pb push_back
#define pa pop_back
constexpr char NL = '\n';
using namespace std;

static vector<uint8_t> f(5e6 + 5, 1);
void ptit() {
    f[0] = f[1] = 0;
    for (int i = 2; i * i <= 5e6; ++i) {
        if (f[i]) {
            for (int j = i * i; j <= 5e6; j += i) {
                f[j] = 0;
            }
        }
    }
}

int main() {
    fastio;
    ptit();
    int t;
    cin >> t;
    while (t--) {
        ll l, r;
        cin >> l >> r;
        int cnt = 0;
        for (ll i = l; i * i <= r; ++i) {
            if (f[i]) {
                cnt++;
            }
        }
        cout << cnt << NL;
    }

    return 0;
}