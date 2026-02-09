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
        double gpa;
    
    public:
        SinhVien() {
            this->msv = "B20DCCN001";
            this->name = "";
            this->lop = "";
            this->date = "";
            this->gpa = 0.0;
        }

        static string fixdate(string date) {
            stringstream sstr(date);
            int d, m, y;
            char delim1, delim2;
            sstr >> d >> delim1 >> m >> delim2 >> y;
            stringstream out;
            out << setw(2) << setfill('0') << d << delim1
                << setw(2) << setfill('0') << m << delim2
                << y;
            return out.str(); 
        }

        friend istream& operator >> (istream& is, SinhVien& a) {
            getline(is >> ws, a.name);
            getline(is >> ws, a.lop);
            getline(is >> ws, a.date);
            is >> a.gpa;
            a.date = fixdate(a.date);
            return is;
        }   

        friend ostream& operator << (ostream& os, const SinhVien& a) {
            os << a.msv << " " << a.name << " " << a.lop << " " << a.date
                 << " ";
            os << fixed << setprecision(2) << a.gpa;
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