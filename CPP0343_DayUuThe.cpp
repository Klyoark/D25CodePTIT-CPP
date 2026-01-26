#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        string s;
        getline(cin >> ws, s);
        stringstream sstr(s);
        int n, e = 0, o = 0, cnt = 0;
        while (sstr >> n) {
            if (n % 2 == 0) {
                e++;
            } else {
                o++;
            }
            cnt++;
        }
        if ((cnt % 2 == 0 && e > o) || (cnt % 2 != 0 && e < o)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}