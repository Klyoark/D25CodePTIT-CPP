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
};

string makemnv() {
    stringstream code;
    string i = to_string(mnv);
    code << setw(5) << setfill('0') << i;
    ++mnv;
    return code.str();
}

void nhap(NhanVien& nv) {
    nv.code = makemnv();
    getline(cin >> ws, nv.name);
    getline(cin >> ws, nv.gender);
    getline(cin >> ws, nv.date);
    getline(cin >> ws, nv.address);
    getline(cin >> ws, nv.tax);
    getline(cin >> ws, nv.contract);
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
    inds(ds, N);

    return 0;
}