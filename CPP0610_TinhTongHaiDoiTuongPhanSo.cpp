#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

class PhanSo {
    private:
        ll tu, mau;
    
    public:
        PhanSo() : tu(0), mau(1) {};
        PhanSo(ll t, ll m) : tu(t), mau(m) {};

        friend istream& operator >> (istream& is, PhanSo& ps) {
            is >> ps.tu >> ps.mau;
            return is;
        }
        friend ostream& operator << (ostream& os, const PhanSo& ps) {
            os << ps.tu << "/" << ps.mau;
            return os;
        }

        static ll gcd(ll a, ll b) {
            if (b == 0) {
                return a;
            }
            return gcd(b, a % b);
        }   
        void rutgon() {
            ll g = gcd(tu, mau);
            tu /= g;
            mau /= g;
        }

        PhanSo operator + (const PhanSo& other) const {
            PhanSo res;

            res.tu = tu * other.mau + other.tu * mau;
            res.mau = mau * other.mau;

            res.rutgon();
            return res;
        }

};

int main() {
    fastio;

    PhanSo p(1, 1), q(1, 1);
    cin >> p >> q;
    cout << p + q;

    return 0;
}