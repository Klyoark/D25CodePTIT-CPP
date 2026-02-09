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
        static int curMsv;

    public:
        SinhVien() : msv("B20DCCN"), gpa(0.0) {};

        void fixdate(string& date) {
            stringstream sstr(date);
            int d, m, y;
            char delim1, delim2;
            
            sstr >> d >> delim1 >> m >> delim2 >> y;

            stringstream out;
            out << setfill('0');
            out << setw(2) << d << delim1
                << setw(2) << m << delim2
                << y;
            date = out.str();
        }

        void fixname(string& name) {
            stringstream sstr(name);
            string res = "";
            string w;

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

        friend istream& operator >> (istream& is, SinhVien& sv) {
            stringstream stt;
            stt << setw(3) << setfill('0') << to_string(sv.curMsv++);
            sv.msv += stt.str();

            getline(is >> ws, sv.name);
            getline(is >> ws, sv.lop);
            getline(is >> ws, sv.date);
            sv.fixname(sv.name);
            sv.fixdate(sv.date);
            is >> sv.gpa;

            return is;
        }
        friend ostream& operator << (ostream& os, const SinhVien& sv) {
            os << fixed << setprecision(2) 
               << sv.msv << " "
               << sv.name << " "
               << sv.lop << " "
               << sv.date << " "
               << sv.gpa << NL;
            
            return os;
        }
};
int SinhVien::curMsv = 1;

int main() {
    fastio;

    SinhVien ds[50];
    int N, i;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> ds[i];
    }
    for (int i = 0; i < N; ++i) {
        cout << ds[i];
    }

    return 0;
}