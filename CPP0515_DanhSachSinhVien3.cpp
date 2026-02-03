#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

struct SinhVien {
    string msv, name, lop, date;
    float gpa;
};

string makeMSV(int i) {
    string s = to_string(i + 1);
    while (s.length() < 3) {
        s = '0' + s;
    }
    return "B20DCCN" + s;
}

void chuanHoaDate(string& date) {
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

void chuanHoaName(string& name) {
    vector<string> wvec;
    string w;
    stringstream sstr(name);
    while (sstr >> w) {
        for (char& c : w) {
            c = tolower((char)c);
        }
        w[0] = toupper((char)w[0]);
        wvec.push_back(w);
    }
    name = "";
    for (int i = 0; i < wvec.size(); ++i) {
        name += wvec[i];
        if (i != wvec.size() - 1) {
            name += " ";
        }
    }
}

void nhap(SinhVien ds[], int n) {
    for (int i = 0; i < n; ++i) {
        ds[i].msv = makeMSV(i);
        getline(cin >> ws, ds[i].name);
        getline(cin >> ws, ds[i].lop);
        getline(cin >> ws, ds[i].date);
        cin >> ds[i].gpa;
        chuanHoaDate(ds[i].date);
        chuanHoaName(ds[i].name);
    }
}

void sapxep(SinhVien ds[], int n) {
    stable_sort(ds, ds + n, [](const SinhVien& A, const SinhVien& B) -> bool {
        return A.gpa > B.gpa;
    });
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
    sapxep(ds, n);
    in(ds, n);

    return 0;
}