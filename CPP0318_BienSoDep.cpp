#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
#define pb push_back
#define pa pop_back
constexpr char NL = '\n';
using namespace std;

//thu vi phet, never code like this again 

bool res(string s) {
    bool incre = false, equal = false, threestarttwoend = false, sixeight = false;
    [&]() {
        [&]() {
            for (int i = 1; i < s.length(); ++i) {
                if (s[i] - '0' <= s[i - 1] - '0') {
                    return;
                }
            }
            incre = true;
            return;
        }();
        if (incre) return;

        [&]() {
            for (int i = 1; i < s.length(); ++i) {
                if (s[i] - '0' != s[i - 1] - '0') {
                    return;
                }
            }
            equal = true;
            return;
        }();
        if (equal) return;

        [&]() {
            for (int i = 1; i < 3; ++i) {
                if (s[i] - '0' != s[i - 1] - '0') {
                    return;
                }
            }
            if (s[3] != s[4]) {
                return;
            }
            threestarttwoend = true;
            return;
        }();
        if (threestarttwoend) return;

        [&]() {
            for (int i = 0; i < s.length(); ++i) {
                if (s[i] != '6' && s[i] != '8') {
                    return;
                }
            }
            sixeight = true;
        }();
        if (sixeight) return;
    }();

    return (incre || equal || sixeight || threestarttwoend);
}

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        string Str;
        cin >> Str;
        string s;
        s = Str.substr(Str.length() - 6);
        s.erase(remove(s.begin(), s.end(), '.'), s.end());
        cout << (res(s) ? "YES\n" : "NO\n");
    }

    return 0;
}