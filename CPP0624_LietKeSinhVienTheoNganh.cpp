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
        string nganh;
        static unordered_map<string, string> nganht;
    
    public: 
        
        friend istream& operator >> (istream& is, SinhVien& sv) {
            getline(is >> ws, sv.msv);
            getline(is >> ws, sv.name);
            getline(is >> ws, sv.lop);
            getline(is >> ws, sv.mail);
            sv.nganh = sv.msv.substr(3, 4);

            return is;
        }

        friend ostream& operator << (ostream& os, const SinhVien& sv) {
            os  << sv.msv << " "
                << sv.name << " "
                << sv.lop << " "
                << sv.mail << NL;

            return os;
        }

        string getnganh() const {
            return nganh;
        }
        string getlop() const {
            return lop;
        }
        static string getq(string nganh) {
            return nganht[nganh];
        }
};
unordered_map<string, string> SinhVien::nganht = {
    {"Ke toan", "DCKT"},           
    {"Cong nghe thong tin", "DCCN"},
    {"An toan thong tin", "DCAT"}, 
    {"Vien thong", "DCVT"},
    {"Dien tu", "DCDT"},
};

int main() {
    fastio;

    int n;
    cin >> n;
    unordered_map<string, vector<SinhVien>> lst;
    for (int i = 0; i < n; ++i) {
        SinhVien sv;
        cin >> sv;
        lst[sv.getnganh()].push_back(sv);
    }

    int q;
    cin >> q;
    while (q--) {
        string que;
        getline(cin >> ws, que);
        string s = SinhVien::getq(que);
        for (char& c : que) {
            c = toupper((char)c);
        }
        cout << "DANH SACH SINH VIEN NGANH " << que << ":\n";
        if (s == "DCCN" || s == "DCAT") {
            for (const SinhVien& sv : lst[s]) {
                if (sv.getlop() [0] != 'E') {
                    cout << sv;
                }
            }
        } else {
            for (const SinhVien& sv : lst[s]) {
                cout << sv;
            }
        }
    }

    return 0;
}