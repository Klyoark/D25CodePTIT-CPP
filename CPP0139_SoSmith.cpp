#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
#define pb push_back
#define pa pop_back
constexpr char NL = '\n';
using namespace std;

static vector<uint8_t> f(1e5 + 5, 1);
void ptit() {
    f[0] = f[1] = 0;
    for (int i = 2; i * i <= 1e5; ++i) {
        if (f[i]) {
            for (int j = i * i; j <= 1e5; j += i) {
                f[j] = 0;
            }
        }
    }
}
int tong (int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10; 
        n /= 10;       
    }
    return sum;
}


int main() {
    fastio;
    ptit();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (f[n]) {
            cout << "NO" << NL;
        } else {
            int s = tong(n);
            int res = 0;
            for (int i = 2; i * i <= n; ++i) {
                while (n % i == 0) {
                    n /= i;
                    res += tong(i);
                }
                if (n == 1) {
                    break;
                }
            }
            if (n > 1) {
                res += tong(n);
            }
            cout << (res == s ? "YES\n" : "NO\n");
        }

    }

    return 0;
}