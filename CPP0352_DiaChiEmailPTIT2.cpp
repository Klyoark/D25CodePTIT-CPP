#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

int main() {
    fastio;

    int t;
    cin >> t;
    unordered_map<string, int> dupe;
    while (t--) {
        string name;
        getline(cin >> ws, name);
        string email;

        vector<string> svec;
        stringstream sstr(name);
        string word;
        while (sstr >> word) {
            for (char& c : word) {
                c = tolower((char)c);
            }
            svec.push_back(word); 
        }
        email += svec[svec.size() - 1];
        for (int i = 0; i < svec.size() - 1; ++i) {
            email += svec[i][0];
        }
        dupe[email]++;
        if (dupe[email] == 1) {
            cout << email << "@ptit.edu.vn" << NL;
        } else {
            cout << email << dupe[email] << "@ptit.edu.vn" << NL;
        }
    }

    return 0;
}