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
        int n;
        cin >> n;
        int cnt = 0;
        for (int i = 2; i * i <= n && cnt < 4; ++i) {
            if (n % i == 0) {
                cnt++;
                n /= i;
                if (n % i == 0) {
                    cnt = -1;
                    break;
                }
            }
        }
        if (n > 1) {
            cnt++;
        }
        if (cnt == 3) {
            cout << 1 << NL;
        } else {
            cout << 0 <<  NL;
        }
    }

    return 0;
}