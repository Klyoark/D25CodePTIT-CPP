#include <bits/stdc++.h>
#define fastio \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

int main() {
    fastio;

    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> f(201, 0);
    int maxi = -1;
    for (int& x : a) {
        cin >> x;
        ++f[x];
        maxi = max(x, maxi);
    }
    bool ok = true;
    for (int i = 1; i <= maxi; ++i) {
        if (!f[i]) {
            ok = false;
            cout << i << NL;
        }
    }
    if (ok) {
        cout << "Excellent!" << NL;
    }


    return 0;
}
