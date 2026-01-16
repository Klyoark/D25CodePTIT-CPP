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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int& x : a) {
            cin >> x;
        }
        int ptr, lim;
        cin >> ptr >> lim;
        while (ptr <= lim && a[ptr] <= a[ptr + 1]) {
            ptr++;
        }
        ptr++;
        while (ptr <= lim && a[ptr] >= a[ptr + 1]) {
            ptr++;
        }
        cout << (ptr >= lim ? "Yes\n" : "No\n");
    }

    return 0;
}