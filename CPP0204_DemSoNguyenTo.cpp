#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
#define pb push_back
#define pa pop_back
constexpr char NL = '\n';
using namespace std;

static vector<int> f(1e5 + 1, 1);
void quoguqeogqoeguoqg() {
    f[0] = f[1] = 0;
    for (int i = 2; i * i <= 1e5; ++i) {
        if (f[i]) {
            for (int j = i * i; j <= 1e5; j += i) {
                f[j] = 0;
            }
        }
    }   
}

int main() {
    fastio;
    quoguqeogqoeguoqg();
    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;
        int cnt = 0;
        for (int i = l; i <= r; ++i) {
            if (f[i]) {
                cnt++;
            }
        }
        cout << cnt << NL;
    }

    return 0;
}