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
        static int curMsv;
    
    public:
        double gpa;

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
            string w, res = "";
            while (sstr >> w) {
                for (char& c : w) {
                    c = tolower((char)c);
                }
                w[0] = toupper((char)w[0]);

                res += w;
            }
            res.pop_back();
            name = res;
        }
    
        friend istream& operator >> (istream& is, SinhVien& sv) {
            stringstream stt;
            stt << setfill('0') << setw(3) << to_string(sv.curMsv++);
            sv.msv += stt.str();

            getline(is >> ws, sv.name);
            getline(is >> ws, sv.lop);
            getline(is >> ws, sv.date);
            is >> sv.gpa;

            sv.fixdate(sv.date);
            sv.fixname(sv.name);

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

void sapxep (SinhVien ds[], int n) {
    stable_sort(ds, ds + n, [](const SinhVien& a, const SinhVien& b) -> bool {
        return a.gpa > b.gpa;
    });
}

int main() {
    fastio;

    SinhVien ds[50];
    int N, i;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> ds[i];
    }
    sapxep(ds, N);

    for (int i = 0; i < N; ++i) {
        cout << ds[i];
    }

    return 0;
}