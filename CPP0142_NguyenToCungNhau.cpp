#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
#define pb push_back
#define pa pop_back
constexpr char NL = '\n';
using namespace std;

bool nto(int n) {
    if (n <= 1) {
        return false;
    }
    if (n <= 3) {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        int cnt = 1;
        for (int i = 2; i < x; ++i) {
            if (gcd(i, x) == 1) {
                cnt++;
            }
        }
        cout << (nto(cnt) ? "1\n" : "0\n");
    }

    return 0;
}