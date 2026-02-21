#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

class GiangVien{
    private:
        static int stt;
        string id, name, bomon, bm;
    
    public:
        void makeid() {
            string res = "GV";
            if (stt < 10) {
                res += "0";
                res += to_string(stt);
                ++stt;
            } else {
                res += to_string(stt);
                ++stt;
            }
            id = res;
        }

        static string returnbm(const string& s) {
            string w, res = "";
            stringstream sstr(s);
            while (sstr >> w) {
                res += toupper((char)w[0]);
            }
            return res;
        }

        void makebm() {
            bm = returnbm(bomon);
        }
        
        friend istream& operator >> (istream& is, GiangVien& gv) {
            getline(is >> ws, gv.name);
            getline(is >> ws, gv.bomon);
            gv.makebm();
            gv.makeid();

            return is;
        }

        friend ostream& operator << (ostream& os, const GiangVien& gv) {
            os  << gv.id << " "
                << gv.name << " "
                << gv.bm << NL;

            return os;
        }

        string getbm() {
            return bm;
        }

        string getbomon() {
            return bomon;
        }
};
int GiangVien::stt = 1;

int main() {
    fastio;

    int n;
    cin >> n;
    unordered_map<string, vector<GiangVien>> lst;
    for (int i = 0; i < n; ++i) {
        GiangVien gv;
        cin >> gv;
        lst[gv.getbm()].push_back(gv);
    }

    int q;
    cin >> q;
    while (q--) {
        string s;
        getline(cin >> ws, s);
        string sbm = GiangVien::returnbm(s);
        cout << "DANH SACH GIANG VIEN BO MON " << sbm << ":\n";
        for (const GiangVien& gv : lst[sbm]) {
            cout << gv;
        }
    }

    return 0;
}