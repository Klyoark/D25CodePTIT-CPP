#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

class GiangVien { 
    private:
        string id, name, bomon, bm;
        static int stt;

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
            string res = "";
            string w;
            stringstream sstr(s);
            
            while (sstr >> w) {
                res += toupper((char)w[0]);
            }
            return res;
        }

        void makebm() {
            bm = returnbm(bomon);
        }

        static bool exist(string name, const string& key) {
            for (char& c : name) {
                c = tolower((char)c);
            }
            return (name.find(key) != string::npos);
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

        string getname() const {
            return name;
        }
};
int GiangVien::stt = 1;

int main() {
    fastio;
    
    int n;
    cin >> n;
    vector<GiangVien> lst(n);
    for (GiangVien& gv : lst) {
        cin >> gv;
    }

    int q;
    cin >> q;
    while (q--) {
        string que;
        cin >> que;
        cout << "DANH SACH GIANG VIEN THEO TU KHOA " << que << ":\n";
        
        for (char& c : que) {
            c = tolower((char)c);
        }

        for (const GiangVien& gv : lst) {
            if (GiangVien::exist(gv.getname(), que)) {
                cout << gv;
            }
        }
    }

    return 0;
}