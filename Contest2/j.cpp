#include <bits/stdc++.h>
#define fastio \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

int main() {
    fastio;

    string s;
    cin >> s;
    vector<char> a;
    for (char& c : s) {
        c = tolower(c);
        if (c != 'a' && c != 'i' && c != 'o' && c != 'u' && c != 'e' && c != 'y') {
            a.push_back(c);
        }
    }
    for (char c : a) {
        cout << '.' << c;
    }

    return 0;
}
