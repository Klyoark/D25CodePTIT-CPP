#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

struct SinhVien{
    string msv, name, lop, date;
    float gpa;
};

string makeMSV(int i) {
    string str = to_string(i + 1);
    while (str.length() < 3) {
        str = '0' + str;
    }
    return "B20DCCN" + str;
}

void chuanHoaDate(string& date) {
    int d, m, y;
    char delim1, delim2;
    stringstream ss (date);
    ss >> d >> delim1 >> m >> delim2 >> y;
    
    stringstream out;
    out << setw(2) << setfill('0') << d << delim1
        << setw(2) << setfill('0') << m << delim2
        << y;
    date = out.str();
}

void nhap(SinhVien ds[], int n) {
    for (int i = 0; i < n; ++i) {
        ds[i].msv = makeMSV(i);
        getline(cin >> ws, ds[i].name);
        getline(cin >> ws, ds[i].lop);
        getline(cin >> ws, ds[i].date);
        cin >> ds[i].gpa;
        chuanHoaDate(ds[i].date);
    }
}
void in(SinhVien ds[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << fixed << setprecision(2);
        cout << ds[i].msv << " "
            << ds[i].name << " "
            << ds[i].lop << " "
            << ds[i].date << " " 
            << ds[i].gpa << NL;
    }
}

int main() {
    fastio;
    struct SinhVien ds[50];
    int n;
    cin >> n;
    nhap(ds, n);
    in(ds, n);

    return 0;
}