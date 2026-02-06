#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

class Pts {
    public:
        double x, y;

        friend istream& operator >> (istream& is, Pts& P) {
            is >> P.x >> P.y;
            return is;
        }

        static double grp(const Pts& A, const Pts& B) {
            return A.x * B.y - A.y * B.x;
        }
};

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<Pts> lst(n);
        for (Pts& p : lst) {
            cin >> p;
        }

        double res = 0;
        for (int i = 0; i < n - 1; ++i) {
            res += Pts::grp(lst[i], lst[i + 1]);
        }
        res += Pts::grp(lst[n - 1], lst[0]);
        res = 0.5 * abs(res);

        cout << fixed << setprecision(3) << res << NL;
    }

    return 0;
}