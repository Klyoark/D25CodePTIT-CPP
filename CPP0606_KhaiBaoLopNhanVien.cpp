#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

class NhanVien {
    private:
        string mnv = "00001";
        string name, gender, date, address, tax, contract;
    
    public:
        NhanVien() {};

        friend istream& operator >> (istream& is, NhanVien& nv) {
            getline(is >> ws, nv.name);
            getline(is >> ws, nv.gender);
            getline(is >> ws, nv.date);
            getline(is >> ws, nv.address);
            getline(is >> ws, nv.tax);
            getline(is >> ws, nv.contract);
            return is;
        }

        friend ostream& operator << (ostream& os, const NhanVien& nv) {
            os << nv.mnv << " "
               << nv.name << " "
               << nv.gender << " "
               << nv.date << " "
               << nv.address << " "
               << nv.tax << " "
               << nv.contract;
            return os; 
        }
};

int main() {
    fastio;

    NhanVien a;
    cin >> a;
    cout << a;

    return 0;
}