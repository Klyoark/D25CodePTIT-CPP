#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

struct SinhVien {
    string msv, name, lop;
    double s1, s2, s3;
};

void nhap(SinhVien& sv) {
    getline(cin >> ws, sv.msv);
    getline(cin >> ws, sv.name);
    getline(cin >> ws, sv.lop);
    cin >> sv.s1 >> sv.s2 >> sv.s3;
}

void sap_xep(SinhVien ds[], int n) {
    stable_sort(ds, ds + n, 
        [](const SinhVien& a, const SinhVien& b) -> bool {
            return a.name < b.name;
        });
}

void in_ds(SinhVien ds[], int n) {
    cout << fixed << setprecision(1);
    for (int i = 0; i < n; ++i) {
        cout << i + 1 << " "
             << ds[i].msv << " "
             << ds[i].name << " "
             << ds[i].lop << " "
             << ds[i].s1 << " "
             << ds[i].s2 << " "
             << ds[i].s3 << NL;
    }
}

int main() {
    fastio;

    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for (int i = 0; i < n; ++i) {
        nhap(ds[i]);
    }
    sap_xep(ds, n);
    in_ds(ds, n);

    return 0;
}