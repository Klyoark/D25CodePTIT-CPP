#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

int main() {
    fastio;

    ifstream fs("DATA.in");
    vector<int> f(1001, 0);
    int n;
    while (fs >> n) {
        ++f[n];
    }
    for (int i = 0; i < 1001; ++i) {
        if (f[i]) {
            cout << i << " " << f[i] << NL;
        }
    }

    return 0;
}