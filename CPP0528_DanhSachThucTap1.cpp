#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

static int i = 1;

struct SinhVien {
    int stt;
    string msv, name, lop, email, org;

    void in() {
        stt = i++;
        getline(cin >> ws, msv);
        getline(cin >> ws, name);
        getline(cin >> ws, lop);
        getline(cin >> ws, email);
        getline(cin >> ws, org);
    }

    void out() const {
        cout << stt << " "
             << msv << " "
             << name << " "
             << lop << " "
             << email << " "
             << org << NL;
    }
};

int main() {
    fastio;

    int n;
    cin >> n;
    vector<SinhVien> lst(n);

    for (SinhVien& sv : lst) {
        sv.in();
    }

    int q;
    cin >> q;
    vector<string> orglst(q);
    for (string& org : orglst) {
        cin >> org;
    }
    vector<SinhVien> intern;
    intern.reserve(n);

    for (const string& orgq : orglst) {
        for (const SinhVien& sv : lst) {
            if (sv.org == orgq) {
                intern.push_back(sv);
            }
        }
        stable_sort(intern.begin(), intern.end(), [](const SinhVien& a, const SinhVien& b) {
            return a.name < b.name;
        });
        for (const SinhVien& sv : intern) {
            sv.out();
        }
        intern.clear();
    }

    return 0;
}