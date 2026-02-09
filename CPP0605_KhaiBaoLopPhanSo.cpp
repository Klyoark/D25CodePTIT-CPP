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
        PhanSo(ll t, ll m) : tu(t), mau(m) {};

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

        friend istream& operator >> (istream& is, PhanSo& p) {
            is >> p.tu >> p.mau;
            return is;
        }

        friend ostream& operator << (ostream& os, const PhanSo& p) {
            os << p.tu << "/" << p.mau;
            return os;
        }
};

int main() {
    fastio;

    PhanSo p(1, 1);
    cin >> p;
    p.rutgon();
    cout << p;

    return 0;
}