#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
#define pub push_back
#define pob pop_back
constexpr char NL = '\n';
using namespace std;

vector<uint8_t> f(1e6+5, 1);
void NgonNguLapTrinhCPP() {
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
    NgonNguLapTrinhCPP();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        [&](){
            for (int i = 2; i <= n / 2; ++i) {
                if (f[i] && f[n - i]) {
                    cout << i << " " << n - i << NL;
                    return;
                }
            }
            cout << -1 << NL;
        }();
    }
    return 0;
}