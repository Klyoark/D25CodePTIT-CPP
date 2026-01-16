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
        string s;
        cin >> s;
        unordered_map<char, int> x;
        for (auto& c : s) {
            x[c]++;
        }

        for (auto& c : s) {
            if (x[c] == 1) {
                cout << c;
            }
        }
        cout << NL;
    }

    return 0;
}