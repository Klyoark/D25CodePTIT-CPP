#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

vector<uint_fast8_t> f(5e6 + 1, 1);
void hello() {
    f[0] = f[1] = 0;
    for (int i = 2; i * i <= 5e6; ++i) {
        if (f[i]) {
            for (int j = i * i; j <= 5e6; j += i) {
                f[j] = 0;
            }
        }
    }
}

int main() {
    fastio;
    hello();

    int a, b;
    cin >> a >> b;
    if (a > b) {
        swap (a, b);
    }
    for (int i = a; i <= b; ++i) {
        if (f[i]) {
            cout << i << " ";
        }
    }
    cout << NL;

    return 0;
}