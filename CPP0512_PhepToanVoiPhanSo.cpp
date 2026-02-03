#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

struct PhanSo {
    ll tu, mau;

    static ll gcd(ll a, ll b) {
        if (b == 0) {
            return a;
        }
        return gcd(b , a % b);
    }

    void rutgon() {
        ll g = gcd(abs(tu), abs(mau));
        tu /= g;
        mau /= g;
        if (mau < 0) {
            tu = -tu;
            mau = -mau;
        }
    }

    PhanSo operator+(const PhanSo& other) const {
        PhanSo sum;

        sum.tu = (ll)tu * other.mau + (ll)other.tu * mau;
        sum.mau = mau * other.mau;

        sum.rutgon();

        return sum;
    }

    PhanSo operator*(const PhanSo& other) const {
        PhanSo res;

        res.tu = tu * other.tu;
        res.mau = mau * other.mau;
        
        res.rutgon();
        return res;
    }
};

void process(PhanSo& A, PhanSo& B) {
    PhanSo sAB = A + B;
    PhanSo C = sAB * sAB;

    PhanSo D = A * B * C;

    cout << C.tu << '/' << C.mau << " " << D.tu << '/' << D.mau << NL;
}

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        PhanSo A;
        PhanSo B;
        cin >> A.tu >> A.mau >> B.tu >> B.mau;
        process(A, B);
    }

    return 0;
}