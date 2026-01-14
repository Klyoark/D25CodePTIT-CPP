#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
#define pb push_back
#define pa pop_back
constexpr char NL = '\n';
using namespace std;

vector<uint8_t> f(1e6 + 1, 1);
void aigeuigauoigouag() {
    f[0] = f[1] = 0;
    for (int i = 2; i * i <= 1e6; ++i) {
        if (f[i]) {
            for (int j = i * i; j <= 1e6; j += i) {
                f[j] = 0;
            }
        }
    }
}

int main() {
    fastio;
    aigeuigauoigouag();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 2; i <= n/2; ++i) {
            if (f[i] && f[n - i]) {
                cout << i << " " << n - i << NL;
                break;
            }
        }
    }

    return 0;
}
