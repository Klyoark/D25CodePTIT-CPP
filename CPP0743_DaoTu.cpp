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
        getline(cin >> ws, s);

        stringstream sstr(s);
        string w;
        vector<string> res;

        while (sstr >> w) {
            res.push_back(w);
        }

        for (int i = res.size() - 1; i >= 0; --i) {
            cout << res[i];
            if (i > 0) {cout << " ";}
        }

        cout << NL;
    }

    return 0;
}