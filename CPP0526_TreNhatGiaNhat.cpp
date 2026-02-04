#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

struct ppl {
    string name;
    int d, m, y;
};

int main() {
    fastio;

    int n;
    cin >> n;
    vector<ppl> lst(n);

    string datestr;
    for (ppl& p : lst) {
        cin >> p.name >> datestr;
        stringstream sstr(datestr);
        char c;
        sstr >> p.d >> c >> p.m >> c >> p.y;
    }
    stable_sort(lst.begin(), lst.end(), [](const ppl& a, const ppl& b) -> bool {
        if (a.y != b.y) {
            return a.y < b.y;
        }
        if (a.m != b.m) {
            return a.m < b.m;
        }
        return a.d < b.d;
    });
    cout << lst[n - 1].name << NL;
    cout << lst[0].name << NL;

    return 0;
}