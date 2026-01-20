#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
#define pb push_back
#define pa pop_back
constexpr char NL = '\n';
using namespace std;

void sum(int& n) {
    int s = 0;
    while (n > 0) {
        s += n % 10;
        n /= 10;
    }
    n = s;
}

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = 0;
        for (auto x : s) {
            n += x - '0';
        }
        while (n >= 10) {
            sum(n);
        }
        cout << (n == 9 ? 1 : 0) << NL;
    }

    return 0;
}