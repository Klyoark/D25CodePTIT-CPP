#include <bits/stdc++.h>
#define fastio \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

int main() {
    fastio;

    int n;
    cin >> n;
    vector<int> a(n, 0);
    string s;
    for (int i = 0; i < n; ++i) {
        getline(cin >> ws, s);
        stringstream sstr(s);
        string w;
        int lcnt = 0;
        while (sstr >> w) {
            ++lcnt;
        }
        a[i] = lcnt;
    }

    vector<int> res;
    bool lb =  false, tn = false;
    int res1 = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] == 8 && a[i - 1] == 6) {
            if (!lb) {
                lb = true;
                tn = false;
                ++res1;
                res.push_back(1);
            }
        } else if (a[i] == 7) {
            if (!tn) {
                lb = false;
                tn = true;
                ++res1;
                res.push_back(2);
            }
        }
    }
    cout << res1 << NL;
    for (int x : res) {
        cout << x << NL;
    }


    return 0;
}
