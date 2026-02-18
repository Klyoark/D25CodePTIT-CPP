#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

class GiangVien{
    private:
        string fullname, name, nganh, nganhid, id;
        static int cnt;
    public:
        void makeid() {
            string res = "GV";
            if (cnt < 10) {
                res += "0";
                res += to_string(cnt);
                ++cnt;
            } else {
                res += to_string(cnt);
                ++cnt;
            }
            id = res;
        }

        void makename() {
            string w;
            stringstream sstr(fullname);
            while (sstr >> w) {
                name = w;
            }
        }

        void makenganhid() {
            string w;
            string res = "";
            stringstream sstr(nganh);
            while (sstr >> w) {
                w[0] = toupper(w[0]);
                res += w[0];
            }
            nganhid = res;
        }

        friend istream& operator >> (istream& is, GiangVien& gv) {
            getline(is >> ws, gv.fullname);
            getline(is >> ws, gv.nganh);
            gv.makeid();
            gv.makename();
            gv.makenganhid();
            return is;
        }

        friend ostream& operator << (ostream& os, const GiangVien& gv) {
            os  << gv.id << " "
                << gv.fullname << " "
                << gv.nganhid << NL;

            return os;
        }

        string getname() const {
            return name;
        }

        string getid() const {
            return id;
        } 
};
int GiangVien::cnt = 1;

int main() {
    fastio;

    int n;
    cin >> n;
    vector<GiangVien> lst(n);
    for (GiangVien& gv : lst) {
        cin >> gv;
    }

    stable_sort(lst.begin(), lst.end(), [](const GiangVien& a, const GiangVien& b) -> bool {
        if (a.getname() == b.getname()) {
            return a.getid() < b.getid();
        }
        return a.getname() < b.getname();
    });

    for (const GiangVien& gv : lst) {
        cout << gv;
    }

    return 0;
}