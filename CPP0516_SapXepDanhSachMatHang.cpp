#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

struct product {
    int code;
    string name, group;
    float buy, sell;
    float rev;
};

static int i = 1;

void input(vector<product>& vp) {
    for (product& p : vp) {
        p.code = i++;
        getline(cin >> ws, p.name);
        getline(cin >> ws, p.group);
        cin >> p.buy >> p.sell;
        p.rev = p.sell - p.buy;
    }
}

void sortProduct(vector<product>& vp) {
    stable_sort(vp.begin(), vp.end(), [](const product& a, const product& b) -> bool {
        return a.rev > b.rev;
    });
}

void output(const vector<product>& vp) {
    cout << fixed << setprecision(2);
    for (const product& p : vp) {
        cout << p.code << " "
            << p.name << " "
            << p.group << " "
            << p.rev << NL;
    }
}

int main() {
    fastio;

    int n;
    cin >> n;
    vector<product> vp(n);
    input(vp);
    sortProduct(vp);
    output(vp);

    return 0;
}