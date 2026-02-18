#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

class NhanVien {
    private:
        string mnv, name, gender, date, address, tax, contract;
        static int id;
    public:
        friend istream& operator >> (istream& is, NhanVien& nv) {
            stringstream nvid;
            nvid << setw(5) << setfill('0') << to_string(nv.id++);
            nv.mnv = nvid.str();

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
               << nv.contract << NL;

            return os;
        }
};
int NhanVien::id = 1;

int main() {
    fastio;

    NhanVien ds[50];
    int n, i;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> ds[i];
    }

    for (int i = 0; i < n; ++i) {
        cout << ds[i];
    }

    return 0;
}