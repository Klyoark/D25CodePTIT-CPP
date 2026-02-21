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

        int getssv() const {
            return ssv;
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

    int q;
    cin >> q;
    while (q--) {
        int a, b;
        cin >> a >> b;
        if (a > b) {
            swap(a, b);
        }
        cout << "DANH SACH DOANH NGHIEP NHAN TU " << a << " DEN " << b << " SINH VIEN:\n";

        for (const DoanhNghiep& dn : lst) {
            if (dn.getssv() > b) {
                continue;
            } else if (dn.getssv() < a) {
                break;
            }
            cout << dn;
        }
    }
    return 0;
}
