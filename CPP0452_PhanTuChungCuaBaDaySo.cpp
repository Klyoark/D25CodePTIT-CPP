#include <bits/stdc++.h>
#define fastio                   \
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
        int n1, n2, n3;
        cin >> n1 >> n2 >> n3;
        vector<int> a(n1);
        vector<int> b(n2);
        vector<int> c(n3);
        for (int& x : a) {
            cin >> x;
        }
        for (int& x : b) {
            cin >> x;
        }
        for (int& x : c) {
            cin >> x;
        }

        bool f = false;
        int i = 0, j = 0, k = 0;
        while (i < n1 && j < n2 && k < n3) {
            if (a[i] == b[j] && b[j] == c[k]) {
                cout << a[i] << " ";
                i++, j++, k++;
                f = true;
            } else if (a[i] < b[j]) {
                i++;
            } else if (b[j] < c[k]) {
                j++;
            } else {
                k++;
            }
        }

        if (!f) { cout << -1; }
        cout << NL;
    }

    return 0;
}