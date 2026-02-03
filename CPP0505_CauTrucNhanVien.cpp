#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

struct NhanVien {
    const string mnv = "00001";
    string name, gender, date, address, tax, contract;
};

void nhap (NhanVien& a) {
    getline(cin >> ws, a.name);
    getline(cin >> ws, a.gender);
    getline(cin >> ws, a.date);
    getline(cin >> ws, a.address);
    getline(cin >> ws, a.tax);
    getline(cin >> ws, a.contract);
}

void in (NhanVien& a) {
    cout << a.mnv << " " <<  a.name << " " << a.gender << " " << a.date << " " << a.address << " " << a.tax << " " << a.contract;
}

int main() {
    fastio;
    struct NhanVien a;
    nhap(a);
    in(a);

    return 0;
}