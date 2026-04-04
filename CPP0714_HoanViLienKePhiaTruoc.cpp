#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

void hv(vector<int>& a, int n) {
    int i = n - 2, j = n - 1;
    while (i >= 0 && a[i] <= a[i + 1]) {
        --i;
    }
    while (a[j] >= a[i]) {
        --j;
    }
    swap(a[i], a[j]);
    for (int x : a) {
        cout << x << " ";
    }
    cout << NL;
}

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
        hv(a, n);
    }

    return 0;
}