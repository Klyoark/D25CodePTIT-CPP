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
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        double dx = a - c;
        double dy = b - d;
        double dis = sqrt(dx*dx + dy*dy);   
        cout << fixed << setprecision(4);
        cout << dis << NL;
    }
}