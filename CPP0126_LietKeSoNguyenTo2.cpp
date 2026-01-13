#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
#define pub push_back
#define pob pop_back
constexpr char NL = '\n';
using namespace std;

vector<int> f(1000001, 1);
void MyNameIsPhucKhanh() {
    f[0] = f[1] = 0;
    for (int i = 2; i * i <= 1000000; ++i) {
        if (f[i]) {
            for (int j = i * i; j <= 1000000; j += i) {
                f[j] = 0;
            }
        }
    }
}

int main() {
    fastio;
    MyNameIsPhucKhanh();

    int t;
    cin >> t;
    while (t--) {
        ll a, b, x, y;
        cin >> x >> y;
        a = min(x, y);
        b = max(x, y);

        for (ll i = a; i <= b; ++i) {
            if (f[i]) {
                cout << i << " ";
            }
        }
        cout << NL;
    }

    return 0;
}