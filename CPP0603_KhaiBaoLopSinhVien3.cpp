#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

class SinhVien {
    private: 
        string msv, name, lop, date;
        float gpa;

    public:
        SinhVien() {
            this->msv = "B20DCCN001";
            this->name = "";
            this->lop = "";
            this->date = "";
            this->gpa = 0.0;
        }

        void fixname() {
            stringstream sstr(name);
            string w, res = "";
            while (sstr >> w) {
                for (char& c : w) {
                    c = tolower((char)c);
                }
                w[0] = toupper((char)w[0]);

                res += w + " ";
            }
            res.pop_back();
            name = res;
        }

        void fixdate() {
            stringstream sstr(date);
            int d, m, y;
            char delim1, delim2;
            sstr >> d >> delim1 >> m >> delim2 >> y;

            stringstream out;
            out << setw(2) << setfill('0') << d << delim1
                << setw(2) << setfill('0') << m << delim2
                << y;
            date = out.str();
        }

        friend istream& operator >> (istream& is, SinhVien& a) {
            getline(is >> ws, a.name);
            getline(is >> ws, a.lop);
            getline(is >> ws, a.date);
            is >> a.gpa;
            a.fixdate();
            a.fixname();

            return is;
        }

        friend ostream& operator<<(ostream& os, const SinhVien& a) {
            os << a.msv << " " << a.name << " " << a.lop << " " << a.date << " "
               << fixed << setprecision(2) << a.gpa;
            return os;
        }
};

int main() {
    fastio;

    SinhVien a;
    cin >> a;
    cout << a;

    return 0;
}