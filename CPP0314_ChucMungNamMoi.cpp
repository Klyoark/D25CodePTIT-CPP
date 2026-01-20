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

    int n;
    cin >> n;
    set<string> sset;
    for (int i = 0; i < n; ++i) {
        string s;
        getline(cin >> ws, s);
        sset.insert(s);
    }
    cout << sset.size() << NL;

    return 0;
}