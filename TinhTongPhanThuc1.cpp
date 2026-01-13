#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false);
#define ll long long
#define pub push_back
#define pob pop_back
constexpr char NL = '\n';
using namespace std;

int main() {
    fastio;

    double s = 0, n, x;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        x = (double)1 / i;
        s += (double)x;
    }
    cout << fixed << setprecision(4);
    cout << s << NL;
}