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
        string s, tmp;
        getline(cin >> ws, s);
        stringstream river(s);
        int cnt = 0;
        while (river >> tmp) {
            cnt++;
        }
        cout << cnt << NL;
    }
    return 0;
}