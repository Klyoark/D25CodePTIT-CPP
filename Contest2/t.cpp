#include <bits/stdc++.h>
#define fastio \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> a(n);
        for (string& x : a) {
            cin >> x;

        }
        sort(a.begin(), a.end(), [](string& a, string& b){
                return a + b > b + a;
             });
            for (string& s : a) {
                cout << s;
            }
        cout << NL;

    }

    return 0;
}
