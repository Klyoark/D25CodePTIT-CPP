#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

class SinhVien {
    private:
        string msv, name, lop, mail;
    
    public:
        friend istream& operator >> (istream& is, SinhVien& sv) {
            getline(is >> ws, sv.msv);
            getline(is >> ws, sv.name);
            getline(is >> ws, sv.lop);
            getline(is >> ws, sv.mail);

            return is;
        }

        friend ostream& operator << (ostream& os, const SinhVien& sv) {
            os << sv.msv << " "
               << sv.name << " "
               << sv.lop << " "
               << sv.mail << NL;
            
            return os;
        }

        string getlop() const {
            return lop;
        }
};

int main() {
    fastio;

    int n;
    cin >> n;
    vector<SinhVien> lst(n);
    for (SinhVien& sv : lst) {
        cin >> sv;
    }
    stable_sort(lst.begin(), lst.end(), [](const SinhVien& a, const SinhVien& b) -> bool {
        return a.getlop() < b.getlop();
    });

    for (const SinhVien& sv : lst) {
        cout << sv;
    }
    return 0;
}