#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

static vector<uint_fast8_t> f(1e7 + 1, 1);
static vector<int> vp;

void era() {
    f[0] = f[1] = 0;
    for (int i = 2; i <= 1e7; ++i) {
        if (f[i]) {
            vp.push_back(i);
            if (1LL * i * i <= 1e7) {
                for (int j = i * i; j <= 1e7; j += i) {
                    f[j] = 0;
                }
            }
        }
    }
}

int main() {
    fastio;
    vp.reserve(10000000);
    era();
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;

        for (int p : vp) {
            if (1LL * p * p > n) {
                break;
            }
            if (n % p == 0) {
                int e = 0;
                while (n % p == 0) {
                    ++e;
                    n /= p;
                }
                cout << p << " " << e << NL;
            }
        }
        if (n > 1) {
            cout << n << " " << 1 << NL;
        }

        cout << NL;
    }
    

    return 0;
}