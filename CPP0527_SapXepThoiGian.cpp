#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

struct tg {
    int h, m, s;
};

int main() {
    fastio;

    int n;
    cin >> n;
    vector<tg> lst(n);
    for (tg& t : lst) {
        cin >> t.h >> t.m >> t.s;
    }
    stable_sort(lst.begin(), lst.end(), [](const tg& a, const tg& b) {
        if (a.h != b.h) {
            return a.h < b.h;
        }
        if (a.m != b.m) {
            return a.m < b.m;
        }
        return a.s < b.s;
    });

    for (const tg& t : lst) {
        cout << t.h << " " << t.m << " " << t.s << NL;
    }

    return 0;
}