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
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int& x : a) {
            cin >> x;
        }

        deque<int> dq;
        for (int i = 0; i < n; ++i) {
            while (!dq.empty() && a[dq.back()] <= a[i]) { //too small
                dq.pop_back();
            } //all smaller out
            dq.push_back(i); //challenger enters
            if (dq.front() <= i - k) { //too old
                dq.pop_front();
            }
            if (i >= k - 1) { //processed enough k values
                cout << a[dq.front()] << " ";
            }
        }
        cout << NL;
    }

    return 0;
}