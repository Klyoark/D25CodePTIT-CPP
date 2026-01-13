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
        char a;
        cin >> a;
        if (a >= 'a' && a <= 'z') {
            a -= 32;
        } else {
            a += 32;
        }
        cout << a << NL;
    }
}