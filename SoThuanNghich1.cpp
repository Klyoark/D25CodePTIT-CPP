#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false); 
#define ll long long
#define pub push_back
#define pob pop_back
constexpr char NL = '\n';
using namespace std;

int main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {
        string x, y;
        cin >> x;
        y = x;
        reverse(y.begin(), y.end());
        cout << (x == y ? "YES\n" : "NO\n");
    }
}