#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

struct PhanSo {
    ll t, m;

    static ll gcd(ll a, ll b) {
        if (b == 0) {
            return a;
        }
        return gcd(b, a % b);
    }

    void rutgon() {
        ll g = gcd(t, m);
        t /= g;
        m /= g;
    }

    PhanSo operator+(const PhanSo& other) const {
        PhanSo tong;

        tong.t = (ll)t * other.m + (ll)other.t * m;
        tong.m = (ll)m * other.m;

        tong.rutgon();
        return tong;
    }
};

void nhap(PhanSo& p) {
    cin >> p.t >> p.m;
}
void in(PhanSo& p) {
    cout << p.t << '/' << p.m;
}

PhanSo tong(PhanSo& p, PhanSo& q) {
    return p + q;
}

int main() {
    fastio;
    struct PhanSo p, q;
    nhap(p); nhap(q);
    PhanSo t = tong(p, q);
    in(t);

    return 0;
}