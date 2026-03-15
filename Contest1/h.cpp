#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

static int nn = 0;
static int cnt = 0;

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

void genIn(int pos, int lim, ll cur) {
    if (pos == nn) {
        if (nto(cur)) {
            ++cnt;
        }
        return;
    }
    for (int i = lim + 1; i <= 9; ++i) {
        genIn(pos + 1, i, cur * 10 + i);
    }
}

void genDe(int pos, int lim, ll cur) {
    if (pos == nn) {
        if (nto(cur)) {
            ++cnt;
        }
        return;
    }
    for (int i = 0; i < lim; ++i) {
        genDe(pos + 1, i, cur * 10 + i);
    }
}

int main() {
    fastio;

    vector<int> res(10, 0);
    for (int i = 2; i <= 9; ++i) {
        nn = i;
        cnt = 0;
        for (int d = 1; d <= 9; ++d) {
            genIn(1, d, d);
            genDe(1, d ,d);
        }
        res[i] = cnt;
    }

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << res[n] << NL;
    }

    return 0;
}