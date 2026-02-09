#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

#define PI 3.141592653589793238

class Pts{
    public:
        double x, y;

        friend istream& operator >> (istream& is, Pts& p) {
            is >> p.x >> p.y;
            return is;
        }

        static bool isTG(const Pts& A, const Pts& B, const Pts& C) {
            if ((A.x - B.x) * (A.y - C.y) == (A.x - C.x) * (A.y - B.y)) {
                return false;
            }
            return true;
        }

        static double side(const Pts& A, const Pts& B) {
            double d = sqrt((A.x - B.x) * (A.x - B.x) + (A.y - B.y) * (A.y - B.y));
            return d;
        }
};

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        Pts A, B, C;
        cin >> A >> B >> C;

        if (!Pts::isTG(A, B, C)) {
            cout << "INVALID" << NL;
            continue;
        }

        double AB = Pts::side(A, B);
        double AC = Pts::side(A, C);
        double BC = Pts::side(B, C);

        double p = (AB + AC + BC) / 2.0;
        double S = sqrt(p * (p - AB) * (p - BC) * (p - AC));

        double R = AB * AC * BC  / (4 * S);
        double res = R * R * PI;
        cout << fixed << setprecision(3);
        cout << res << NL;
    }

    return 0;
}