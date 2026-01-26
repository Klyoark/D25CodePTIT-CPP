#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

int main() {
    fastio;

    string s;
    cin >> s;
    vector<char> pa;
    for (char& c : s) {
        c = tolower((char)c);
        if (c != 'a' && c != 'i' && c != 'e' && c != 'o' && c != 'u' && c != 'y') {
            pa.push_back(c);
        }
    }
    for (const char& c : pa) {
        cout << '.' << c;
    }

    return 0;
}