#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

class DoanhNghiep {
    private:
        string mdn, tdn;
        int ssv;

    public:
        friend istream& operator >> (istream& is, DoanhNghiep& dn) {
            getline(is >> ws, dn.mdn);
            getline(is >> ws, dn.tdn);
            is >> dn.ssv;

            return is;
        }

        friend ostream& operator << (ostream& os, const DoanhNghiep& dn) {
            os  << dn.mdn << " "
                << dn.tdn << " "
                << dn.ssv << NL;

            return os;
        }

        static void sapxep(vector<DoanhNghiep>& lst) {
            stable_sort(lst.begin(), lst.end(), [](const DoanhNghiep& a, const DoanhNghiep& b) -> bool {
                if (a.ssv != b.ssv) {
                    return a.ssv > b.ssv;
                }
                return a.mdn < b.mdn;
            });
        }
};

int main() {
    fastio;

    int n;
    cin >> n;
    vector<DoanhNghiep> lst(n);
    for (DoanhNghiep& dn : lst) {
        cin >> dn;
    }
    DoanhNghiep::sapxep(lst);
    for (DoanhNghiep& dn : lst) {
        cout << dn;
    }

    return 0;
}