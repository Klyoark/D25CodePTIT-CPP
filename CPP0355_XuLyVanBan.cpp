#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

void print(string line) {
    stringstream ssl(line);
    string word;
    bool f = false;
    while (ssl >> word) {
        for (char& c : word) {
            c = tolower((char)c);
        }
        if (!f) {
            word[0] = toupper(word[0]);
            cout << word;
            f = true;
        } else {
            cout << " " << word;
        }
    }
    if (f) {
        cout << NL;
    }
}

int main() {
    fastio;

    string s = "", l;
    while (getline(cin, l)) {
        s += l + " ";
    }
    for (char& c : s) {
        if (c == '!' || c == '?') {
            c = '.';
        }
    }
    stringstream sstr(s);
    string line;
    while (getline(sstr, line, '.')) {
        print(line);
    }

    return 0;
}