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

        string getlop () const {
            return lop;
        }
};

int main() {
    fastio;

    int n;
    cin >> n;
    unordered_map<string, vector<SinhVien>> lst;
    
    for (int i = 0; i < n; ++i) {
        SinhVien sv;
        cin >> sv;
        lst[sv.getlop()].push_back(sv);
    }

    int q;
    cin >> q;
    while (q--) {
        string s;
        cin >> s;
        cout << "DANH SACH SINH VIEN LOP " << s << ":\n";
        for (const SinhVien& sv : lst[s]) {
            cout << sv;
        }
    }
    
    return 0;
}