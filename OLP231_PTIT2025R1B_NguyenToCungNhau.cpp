#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

int main() {
    fastio;

    int n, m;
    cin >> n >> m;

    unordered_set<int> p;
    p.reserve(100000);
    for (int i = 0; i < n; ++i) {   
        int a;
        cin >> a;

        int tmp = a;
        for (int i = 2; 1LL * i * i <= tmp; ++i) {
            if (tmp % i == 0) {
                p.insert(i);
                while (tmp % i == 0) {
                    tmp /= i;
                }
            }
        }
        if (tmp > 1) {
            p.insert(tmp);
        }
    }

    vector<uint_fast8_t> bad(m + 1, 0);
    for (int pr : p) {
        for (int j = pr; j <= m; j += pr) {
            bad[j] = 1;
        }
    }

    int cnt = 0;
    for (int k = 1; k <= m; ++k) {
        if (!bad[k]) {
            ++cnt;
        }
    }
    cout << cnt << NL;
    for (int k = 1; k <= m; ++k) {
        if (!bad[k]) {
            cout << k << " ";
        }
    }

    return 0;
}