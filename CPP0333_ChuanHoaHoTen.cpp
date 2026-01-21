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
    getline(cin >> ws, s);
    stringstream namestream(s);
    while (namestream >> s) {
        vs.push_back(s);
    }
    for (int i = 0; i < vs.size() - 1; ++i) {
        for (char& c : vs[i]) {
            c = tolower((char)c);
        }
        vs[i][0] = toupper((char)vs[i][0]);
        cout << vs[i];
        if (i < vs.size() - 2) {
            cout << " ";
        }
    }

    cout << "," << " ";
    for (char& c : vs[vs.size() - 1]) {
        c = toupper((char)c);
    }
    cout << vs[vs.size() - 1];

    return 0;
}