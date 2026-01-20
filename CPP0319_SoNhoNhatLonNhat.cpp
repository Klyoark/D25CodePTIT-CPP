#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
#define pb push_back
#define pa pop_back
constexpr char NL = '\n';
using namespace std;

string smol(int n, int s) {
    string res(n, '0');
    res[0] = '1', s -= 1;
    for (int i = n - 1; i >= 0; --i) {
        int d = res[i] - '0';
        if (s > 9 - d) {
            res[i] = '9';
            s -= 9 - d;
        } else {
            res[i] += s;
            break;
        }
    }
    return res;
}

string big(int n, int s) {
    string res(n, '0');
    for (int i = 0; i < n; ++i) {
        int d = res[i] - '0';
        if (s > 9 - d) {
            res[i] = '9';
            s -= 9 - d;
        } else {
            res[i] += s;
            break;
        }
    }
    return res;
}

int main() {
    fastio;

    int n, s;
    cin >> n >> s;
    if (s <= 0 || s > 9 * n) {
        cout << "-1 -1\n";
    } else {
        cout << smol(n, s) << " " << big(n, s) << endl;
    }

    return 0;
}