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
        ll n;
        cin >> n;
        if (n % 2 != 0) {
            cout << 0 << NL;
            continue;
        }

        ll num = n / 2;
        ll res = 1;
        for (ll i = 2; i * i <= num; ++i) {
            if (num % i == 0) {
                int choice_cnt = 0;
                while (num % i == 0) {
                    num /= i;
                    choice_cnt++;
                }
                res *= (choice_cnt + 1);
            }
        }
        if (num > 1) {
            res *= 2; //2 choices
        }
        cout << res << NL;
    }

    return 0;
}