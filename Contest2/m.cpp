
#include <bits/stdc++.h>
#define fastio \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

void print(string& line) {
    stringstream ssl(line);
    string w;
    bool f = false;
    while (ssl >> w) {
        for (char& c : w) {
            c = tolower(c);
        }
        if (!f) {
            w[0] = toupper(w[0]);
            cout << w;
            f = true;
        } else {
            cout << " " << w;
        }
    }
    if (f) {
        cout << NL;
    }
}

int main() {
    fastio;

    string s  = "", l;
    while (getline(cin, l)) {
        s += l + " ";
    }
    for (char& c : s) {
        if (c == '!' || c == '?') {
            c = '.';
        }
    }
    stringstream sstr(s);
    l = "";
    while (getline(sstr, l, '.')) {
        print(l);
    }


    return 0;
}
