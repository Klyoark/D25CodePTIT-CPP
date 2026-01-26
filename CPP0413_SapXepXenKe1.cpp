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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int& x : a) {
            cin >> x;
        }
        sort(a.begin(), a.end(), [](int a, int b) -> bool{
            return a > b;
        });
        int i = 0, j = n - 1;
        while (i < j) {
            cout << a[i++] << " ";
            if (i != j) {
                cout << a[j--] << " ";
            }
        }
        if (i == j) {
            cout << a[i];
        }
        cout << NL;
    }

    return 0;
}