#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

static int mnv = 1;

struct NhanVien {
    string code, name, gender, date, address, tax, contract;
    vector<int> sdate;
};

string makemnv() {
    stringstream code;
    string i = to_string(mnv);
    code << setw(5) << setfill('0') << i;
    ++mnv;
    return code.str();
}

vector<int> makeDate(string& date) {
    int m, d, y;
    char delim1, delim2;
    stringstream sstr(date);
    vector<int> res(3);

    sstr >> m >> delim1 >> d >> delim2 >> y;
    res[0] = m, res[1] = d, res[2] = y;
    return res;
}

void nhap(NhanVien& nv) {
    nv.code = makemnv();
    getline(cin >> ws, nv.name);
    getline(cin >> ws, nv.gender);
    getline(cin >> ws, nv.date);
    getline(cin >> ws, nv.address);
    getline(cin >> ws, nv.tax);
    getline(cin >> ws, nv.contract);
    nv.sdate = makeDate(nv.date);
}

void sapxep(NhanVien ds[], int n) {
    stable_sort(ds, ds + n, [](const NhanVien& a, const NhanVien& b) -> bool { 
        if (a.sdate[2] < b.sdate[2]) {
            return true;
        } else if (a.sdate[2] == b.sdate[2] && a.sdate[0] < b.sdate[0]) {
            return true;
        } else if (a.sdate[2] == b.sdate[2] && a.sdate[0] == b.sdate[0] && a.sdate[1] < b.sdate[1]) {
            return true;
        }
        return false;
    });
}

void inds(NhanVien ds[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << ds[i].code << " "
             << ds[i].name << " "
             << ds[i].gender << " "
             << ds[i].date << " "
             << ds[i].address << " "
             << ds[i].tax << " "
             << ds[i].contract << NL; 
    }
}

int main() {
    fastio;

    struct NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);

    return 0;
}
