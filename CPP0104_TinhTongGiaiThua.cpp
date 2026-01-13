#include <iostream>
#define fastio ios::sync_with_stdio(false);
#define ll long long
#define pub push_back
#define pob pop_back
constexpr char NL = '\n';
using namespace std;

int main() {
    fastio;
    ll x = 1, s = 0, n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        x *= i;
        s += x;
    }
    cout << s;
}