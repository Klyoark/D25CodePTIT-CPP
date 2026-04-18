#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

int main() {
    fastio;

    fstream fs("VANBAN.in");
    set<string> s;
    string w;
    while (fs >> w) {
        for (char& c : w) {
            c = tolower(c);
        }
        s.insert(w);
    }
    for (string ss : s) {
        cout << ss << NL;
    }

    return 0;
}