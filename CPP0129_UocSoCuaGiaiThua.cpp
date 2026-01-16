#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
#define pb push_back
#define pa pop_back
constexpr char NL = '\n';
using namespace std;

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        int n, p;
        cin >> n >> p;
        int res = 0;
        while (n > 0) {
            n /= p;
            res += n;
        }
        cout << res << NL;
    }
    
    return 0;
}