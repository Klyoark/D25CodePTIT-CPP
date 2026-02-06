#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

class Pts {
    public:
        ll x, y, z;

        friend istream& operator >> (istream& is, Pts& P) {
            is >> P.x >> P.y >> P.z;
            return is;
        }
};

Pts vec(const Pts& A, const Pts& B) {
    Pts vec;

    vec.x = B.x - A.x;
    vec.y = B.y - A.y;
    vec.z = B.z - A.z;

    return vec;
}

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        Pts A, B, C, D;
        cin >> A >> B >> C >> D;

        Pts AB = vec(A, B), AC = vec(A, C), AD = vec(A, D);

        Pts N;
        N.x = AB.y * AC.z - AB.z * AC.y;
        N.y = AB.z * AC.x - AB.x * AC.z;
        N.z = AB.x * AC.y - AB.y * AC.x;

        ll res = N.x * AD.x + N.y * AD.y + N.z * AD.z;

        cout << (res == 0 ? "YES" : "NO");
        cout << NL;
    }

    return 0;
}