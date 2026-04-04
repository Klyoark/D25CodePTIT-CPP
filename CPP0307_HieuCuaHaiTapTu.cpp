#include <bits/stdc++.h>
#define fastio \
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
        string s1, s2;
        getline(cin >> ws, s1);
        getline(cin >> ws, s2);
        unordered_set<string> wset;
        set<string> res;
        stringstream sstr(s2);

        string w;
        while (sstr >> w) {
            wset.insert(w);
        }

        sstr.str(s1);
        sstr.clear();
        while (sstr >> w) {
            if (wset.find(w) == wset.end()) {
                res.insert(w);
            }
        }
        for (const string& ss : res) {
            cout << ss << " ";
        }
        cout << NL;
    }

    return 0;
}