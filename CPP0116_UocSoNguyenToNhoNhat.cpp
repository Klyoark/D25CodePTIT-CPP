#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
#define pb push_back
#define pa pop_back
constexpr char NL = '\n';
using namespace std;

static vector<int> spf(10005, 1);
void fac() {
    spf[1] = 1;
    for (int i = 2; i <= 10000; ++i) {
        spf[i] = i;
    }
    for (int i = 2; i * i <= 10000; ++i) {
        if (spf[i] == i) {
            for (int j = i * i; j <= 10000; j += i) {
                if (spf[j] == j) {
                    spf[j] = i;
                }
            }
        }
    }
}

int main() {
    fastio;
    fac();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 1; i <= n; ++i) {
            cout << spf[i] << " ";
        }
        cout << NL;
    }

    return 0;
}