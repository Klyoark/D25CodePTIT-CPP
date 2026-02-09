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
            this->msv = "";
            this->name = "";
            this->lop = "";
            this->date = "";
            this->gpa = 0.0;
        }

        void nhap() {
            this->msv = "B20DCCN001";
            getline(cin >> ws, name);
            getline(cin >> ws, lop);
            getline(cin >> ws, date);
            cin >> gpa;

            if (date[1] == '/') {
                date = '0' + date;
            }
            if (date[4] == '/') {
                date.insert(3, "0");
            }
        }
        void xuat() {
            cout << msv << " " << name << " " << lop << " " << date
                 << " ";
            cout << fixed << setprecision(2) << gpa;
        }
};

int main() {
    fastio;

    SinhVien a;
    a.nhap();
    a.xuat();

    return 0;
}