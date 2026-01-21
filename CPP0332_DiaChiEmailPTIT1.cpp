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

    string s;
    vector<string> vs;
    while (cin >> s) {
        for (char& c : s) {
            c = tolower((char)(c));
        }
        vs.push_back(s);
    }
    string res;
    res = vs.back();
    for (int i = 0; i < vs.size() - 1; ++i) {
        res += vs[i][0];
    }
    res += "@ptit.edu.vn";
    cout << res;

    return 0;
}