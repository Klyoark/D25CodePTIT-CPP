#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

stringstream sstr;
string w;

void one(vector<string>& vw) {
    cout << vw[vw.size() - 1];
    for (int i = 0; i < vw.size() - 1; ++i) {
        cout << " " << vw[i];
    } 
    cout << NL;
}

void two(vector<string>& vw) {
    for (int i = 1; i < vw.size(); ++i) {
        cout << vw[i] << " ";
    } 
    cout << vw[0] << NL;
}

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        short n;
        cin >> n;
        string s;
        getline(cin >> ws, s);
        sstr.clear();
        sstr.str(s);

        vector<string> vw;
        while (sstr >> w) {
            for (char& c : w) {
                c = tolower((char)c);
            }
            w[0] = toupper(w[0]);

            vw.push_back(w);
        }

        if (n == 1) {
            one(vw);
        } else {
            two(vw);
        }
    }
}