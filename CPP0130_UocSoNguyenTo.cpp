#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
#define pub push_back
#define pob pop_back
constexpr char NL = '\n';
using namespace std;

int main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        for (int i = 2; i <= sqrt(n); i++) {
            while (n % i == 0) {
                cout << i << " ";
                n /= i;
            }
        }
        if (n > 1) { 
            cout << n;
        }
        cout << endl;
    }

    return 0;
}