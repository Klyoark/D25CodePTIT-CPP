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

    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        getline(cin >> ws, s1);
        getline(cin >> ws, s2);

        set<string> setstr2;
        set<string> res;

        stringstream ss2(s2);
        string word;
        while (ss2 >> word) {
            setstr2.insert(word);
        }

        stringstream ss1(s1);
        while (ss1 >> word) {
            if (setstr2.find(word) == setstr2.end()) {
                res.insert(word);
            }
        }

        for (const string& x : res) {
            cout << x << " ";
        }
        cout << NL;
    }

    return 0;
}