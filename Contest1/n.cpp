#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

bool nto(ll n) {
    if (n < 2) {
        return false;
    }
    if (n <= 3) {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    fastio;

    unordered_set<ll> hh;
    for (int i = 2; i <= 30; ++i) {
        if (!nto(i)) {
            continue;
        }
        ll mers = (1LL << i) - 1;
        if (nto(mers)) {
            ll res = (1LL << (i - 1)) * mers;
            hh.insert(res);
        }
    }

    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        if (hh.count(n)) {
            cout << 1 << NL;
        } else {
            cout << 0 << NL;
        }

    }

    return 0;
}