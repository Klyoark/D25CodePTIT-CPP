#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

class Khach;
class Hang;
class HoaDon;

class Khach{
    private:
        string mkh, tkh, gt, date, address;
        static int kcnt;
    
    public:
        friend class HoaDon;
        friend ostream& operator << (ostream& os, HoaDon& hd);

        friend istream& operator >> (istream& is, Khach& k) {
            stringstream sstr;
            sstr << "KH" << setw(3) << setfill('0') << k.kcnt++;
            k.mkh = sstr.str();
            getline(is >> ws, k.tkh);
            getline(is >> ws, k.gt);
            getline(is >> ws, k.date);
            getline(is >> ws, k.address);

            return is;
        }

        string getmkh() const {return mkh;}
};
int Khach::kcnt = 1;

class Hang {
    private:
        string mmh, tmh, dvt;
        int buy, sell;
        static int hcnt;

    public:
        friend class HoaDon;
        friend ostream& operator << (ostream& os, HoaDon& hd);

        friend istream& operator >> (istream& is, Hang& h) {
            stringstream sstr;
            sstr << "MH" << setw(3) << setfill('0') << h.hcnt++;
            h.mmh = sstr.str();
            getline(is >> ws, h.tmh);
            getline(is >> ws, h.dvt);
            is >> h.buy >> h.sell;

            return is;
        }

        string getmmh() const {return mmh;}
};
int Hang::hcnt = 1;

class HoaDon {
    private:
        string mhd, mkh, mmh;
        int sl;
        static int hdcnt;

    public:
        static unordered_map<string, Khach> kmap;
        static unordered_map<string, Hang> hmap;
        
        friend istream& operator >> (istream& is, HoaDon& hd) {
            stringstream sstr;
            sstr << "HD" << setw(3) << setfill('0') << hd.hdcnt++;
            hd.mhd = sstr.str();
            is >> hd.mkh >> hd.mmh >> hd.sl;

            return is;
        }

        friend ostream& operator << (ostream& os, HoaDon& hd) {
            Khach& k = hd.kmap[hd.mkh];
            Hang& h = hd.hmap[hd.mmh];

            ll money = 1LL * hd.sl * h.sell;

            os << hd.mhd << " "
               << k.tkh << " "
               << k.address << " "
               << h.tmh << " "
               << h.dvt << " "
               << h.buy << " "
               << h.sell << " "
               << hd.sl << " "
               << money << NL;

            return os;
        }
};
int HoaDon::hdcnt = 1;
unordered_map<string, Khach> HoaDon::kmap;
unordered_map<string, Hang> HoaDon::hmap;

int main() {
    fastio;

    int n, m, k;

    cin >> n;
    vector<Khach> klst(n);
    for (Khach& k : klst) {
        cin >> k;
        HoaDon::kmap[k.getmkh()] = k;
    }

    cin >> m;
    vector<Hang> hlst(m);
    for (Hang& h : hlst) {
        cin >> h;
        HoaDon::hmap[h.getmmh()] = h;
    }

    cin >> k;
    vector<HoaDon> hdlst(k);
    for (HoaDon& hd : hdlst) {
        cin >> hd;
    }
    for (HoaDon& hd : hdlst) {
        cout << hd;
    }

    return 0;
}