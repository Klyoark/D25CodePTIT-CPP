#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false); 
#define ll long long
#define pub push_back
#define pob pop_back
constexpr char NL = '\n';
using namespace std;

int check(int x) {
    int d, l = 0, c = 0;
    while (x > 0) {
        d = x % 10;
        if (d % 2 == 0) {
            c++;
        } else {
            l++;
        }
        x /= 10;
    }
    if (c == l) {
        return 1;
    }
    return 0;
}

int main() {
    fastio;
    int n;
    cin >> n;

    int a = 1, b = 10;
    for (int i = 0; i < n - 1; ++i) {
        a *= 10;
        b *= 10;
    }
    b--;

    int count = 0;
    for (int i = a; i <= b; ++i) {
        if (check(i)) {
            cout << i << " ";
        }
        count++;
        if (count % 10 == 0) {
            cout << NL;
        }
    }
}