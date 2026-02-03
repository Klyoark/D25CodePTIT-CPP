#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;
struct SinhVien {
    const string msv = "B20DCCN001";
    string name, lop, date;
    float gpa;
};

void chuanhoaDate(string& s) {
    int d, m, y;
    char delim1, delim2;
    stringstream ss(s);
    ss >> d >> delim1 >> m >> delim2 >> y;
    stringstream out;
    out << setw(2) << setfill('0') << d << '/' << setw(2) << setfill('0') << m << '/' << y;
    s = out.str();
}
void nhap(SinhVien& A) {
    getline(cin >> ws, A.name);
    getline(cin >> ws, A.lop);
    getline(cin >> ws, A.date);
    cin >> A.gpa;
    chuanhoaDate(A.date);
}

void in(SinhVien& A) {
    cout << fixed << setprecision(2);
    cout << A.msv << " " << A.name << " " << A.lop << " " << A.date << " " << A.gpa;
}
int main() {
    fastio;
    struct SinhVien A;
    nhap(A);
    in(A);

    return 0;
}