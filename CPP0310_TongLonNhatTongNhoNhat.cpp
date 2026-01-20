#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
#define pb push_back
#define pa pop_back
constexpr char NL = '\n';
using namespace std;

long long min(string a, string b) {
    for (int i = 0; i < a.length(); ++i) {
        if (a[i] == '6') {
            a[i] = '5';
        }
    }
    for (int i = 0; i < b.length(); ++i) {
        if (b[i] == '6') {
            b[i] = '5';
        }
    }
    long long x = stoll(a), y = stoll(b);
    return x + y;
}

long long max(string a, string b) {
    for (int i = 0; i < a.length(); ++i) {
        if (a[i] == '5') {
            a[i] = '6';
        }
    }
    for (int i = 0; i < b.length(); ++i) {
        if (b[i] == '5') {
            b[i] = '6';
        }
    }
    long long x = stoll(a), y = stoll(b);
    return x + y;
}

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        string x, y;
        cin >> x >> y;
        cout << min(x, y) << " " << max(x, y) << NL;
    }

    return 0;
}