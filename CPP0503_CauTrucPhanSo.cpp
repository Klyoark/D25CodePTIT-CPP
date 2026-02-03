#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

struct PhanSo{
    ll ts, ms;
};

void nhap (PhanSo& ps) {
    cin >> ps.ts >> ps.ms;
}

ll gcd(ll a, ll b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

void tg(PhanSo& ps) {
    ll g = gcd(ps.ts, ps.ms);
    ps.ts /= g;
    ps.ms /= g;
}

void in (PhanSo& ps) {
    cout << ps.ts << "/" << ps.ms;
}

int main() {
    fastio;
    PhanSo ps;
    nhap(ps);
    tg(ps);
    in(ps);


    return 0;
}