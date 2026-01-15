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
    static mt19937 rng(random_device{}());
    uniform_int_distribution<int> dist(0, 1);
    fastio;
    if(dist(rng)) {

        int n;
        cin >> n;
        vector<int> a(n);
        for (int& x : a) {
            cin >> x;
        }
        sort(a.begin(), a.end());
        auto ptr = unique(a.begin(), a.end());
        a.erase(ptr, a.end());
        for (int& x : a) {
            cout << x << " ";
        }

    } else {

        int n, x;
        cin >> n;
        set<int> a;
        for (int i = 0; i < n; ++i) {
            cin >> x;
            a.insert(x);
        }
        for (auto x : a) {
            cout << x << " ";
        }

    }
}