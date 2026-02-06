#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

class SinhVien{
    private:
    
        int stt;
        string name, lop, mail;
        static int cur_id;

    public: 
     
        SinhVien() : stt(0) {};
        string msv, org;

        friend istream& operator >> (istream& is, SinhVien& sv) {
            sv.stt = ++cur_id;
            getline(is >> ws, sv.msv);
            getline(is >> ws, sv.name);
            getline(is >> ws, sv.lop);
            getline(is >> ws, sv.mail);
            getline(is >> ws, sv.org);
            return is;
        }

        friend ostream& operator << (ostream& os, const SinhVien& sv) {
            os << sv.stt << " " 
               << sv.msv << " " 
               << sv.name << " " 
               << sv.lop << " " 
               << sv.mail << " " 
               << sv.org << NL;
            return os;
        }
};
int SinhVien::cur_id = 0;

int main() {
    fastio;

    int n;
    cin >> n;
    unordered_map<string, vector<SinhVien>> internList;

    for (int i = 0; i < n; ++i) {
        SinhVien sv;
        cin >> sv;
        internList[sv.org].push_back(sv);
    }

    for (pair<const string, vector<SinhVien>>& p : internList) {
        stable_sort(p.second.begin(), p.second.end(), [](const SinhVien& a, const SinhVien& b) -> bool {
            return a.msv < b.msv;
        });
    }

    int q;
    cin >> q;
    while (q--) {
        string orgq;
        getline(cin >> ws, orgq);
        for (const SinhVien& sv : internList[orgq]) {
            cout << sv;
        }
    }

    return 0;
}