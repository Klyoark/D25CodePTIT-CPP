#include <bits/stdc++.h>
#define fastio \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

int main() {
    fastio;

    int n;
    cin >> n;
    unordered_set<string> a;
    for (int i = 0; i < n; ++i) {
        string s;
        getline(cin >> ws, s);
        a.insert(s);
    }
    cout << a.size() << NL;

    return 0;
}
