#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false); cin.tie(0); 
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
        string x;
        cin >> x;
        int l = x.size();
        int NDPKB25DCCN246 = 0;
        for (int i = 1; i < l; ++i) {
            if (abs(x[i] - x[i - 1]) != 1) {
                NDPKB25DCCN246 = 1;
                break;
            }
        }
        cout << (!NDPKB25DCCN246 ? "YES\n" : "NO\n");
    }
}