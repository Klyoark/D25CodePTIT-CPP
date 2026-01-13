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
        int n;
        cin >> n;
        cout << n*(n+1)/2 << endl;
    }
}