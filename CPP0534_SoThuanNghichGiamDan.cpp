#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

class STN {
    public:
        string val;
        int cnt;

        friend ostream& operator << (ostream& os, const STN& s) {
            os << s.val << " " << s.cnt << NL;
            return os;
        }
};

bool isSTN(const string& s) {
    if (s.length() < 2)  {
        return false;
    }
    string y = s;
    reverse(y.begin(), y.end());
    return (s == y);
}

int main() {
    fastio;

    map<string, int> mp;
    string s;
    while (cin >> s) {
        if (isSTN(s)) {
            mp[s]++;
        }
    }  
    vector<STN> res;
    for (const pair<string, int>& p : mp) {
        res.push_back({p.first, p.second});
    }
    sort(res.begin(), res.end(), [](const STN& a, const STN& b) -> bool {
        if (a.val.length() != b.val.length()) {
            return a.val.length() > b.val.length();
        }
        return a.val > b.val;
    });
    for (const STN& p : res) {
        cout << p;
    }

    return 0;
}