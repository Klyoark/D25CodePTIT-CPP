#include <bits/stdc++.h>
#define fastio \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

class NhanSu {
public:
    string m, ht, ntns;
    double hscv, tncv;
    bool anhace;
    static int cnt;

    friend istream& operator >> (istream& is, NhanSu& ns) {
        stringstream sstr;
        sstr << "NS" << setw(3) << setfill('0') << cnt;
        ++cnt;
        ns.m = sstr.str();

        getline(is >> ws, ns.ht);
        getline(is >> ws, ns.ntns);
        is >> ns.hscv >> ns.tncv;
        if (ns.hscv < 6.0 && ns.tncv < 60.0) {
            ns.anhace = true;
        } else {
            ns.anhace = false;
        }

        return is;
    }

    friend ostream& operator << (ostream& os, NhanSu& ns) {

        os << ns.m << " " << ns.ht << " " << ns.ntns << " " << ns.hscv << " " << ns.tncv << NL;
        return os;
    }


};
int NhanSu::cnt = 1;

int main() {
    fastio;

    int n;
    cin >> n;
    vector<NhanSu> lst;
    lst.reserve(n);
    NhanSu tmp;
    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        if (tmp.anhace) {
            lst.push_back(tmp);
        }
    }

    sort(lst.begin(), lst.end(), [](NhanSu& a, NhanSu& b){
        if (a.hscv != b.hscv) {
            return a.hscv < b.hscv;
         }
         return a.tncv < b.tncv;
    });

    for (NhanSu& ns : lst) {
        cout << ns;
    }


    return 0;
}
