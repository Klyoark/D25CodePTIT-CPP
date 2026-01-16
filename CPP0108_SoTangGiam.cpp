#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
#define pb push_back
#define pa pop_back
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
    for (ll d = 5; d * d <= n; d += 6) {
        if (n % d == 0 || n % (d + 2) == 0) {
            return false;
        }
    }
    return true;
}

static int nn;
static ll cnt;

void genIncre(int pos, int lim, ll cur_val) {
    if (pos == nn) {
        if (nto(cur_val)) {
            cnt++;
        }
        return;
    }
    for (int d = lim + 1; d <= 9; ++d) {
        genIncre(pos + 1, d, cur_val * 10 + d);
    }
}

void genDecre(int pos, int lim, ll cur_val) {
    if (pos == nn) {
        if (nto(cur_val)) {
            cnt++;
        }
        return;
    }
    for (int d = 0; d < lim; ++d) {
        genDecre(pos + 1, d, cur_val * 10 + d);
    }
}

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        cin >> nn;
        cnt = 0;

        for (int d = 1; d <= 9; ++d) {
            genIncre(1, d, d);
            genDecre(1, d, d);
        }
        cout << cnt << NL;
    }
    return 0;
}