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

    string s1, s2;
    getline(cin >> ws, s1);
    getline(cin >> ws, s2);

    stringstream ss(s1);
    string w;
    vector<string> res;

    while (ss >> w) {
        if (w != s2) {
            res.push_back(w);
        }
    }

    for (int i = 0; i < res.size(); ++i) {
        cout << res[i] << " ";
    }
    cout << NL;

    return 0;
}