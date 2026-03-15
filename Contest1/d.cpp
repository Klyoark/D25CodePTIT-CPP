#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        string vn = "084";
        int p = 0;
        if ((p = s.find(vn)) != string::npos) {
            s.erase(p, vn.length());
        }
        cout << s << NL;
    }

    return 0;
}