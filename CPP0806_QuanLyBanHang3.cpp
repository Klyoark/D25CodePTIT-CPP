#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

class KhachHang;
class MatHang;
class HoaDon;
unordered_map<string, KhachHang*> khptr;
unordered_map<string, MatHang*> mhptr;

class KhachHang {
    private: 
        string mkh, tkh, gt, date, address;
        static int kcnt;

    public:
        friend class HoaDon;
        friend ostream& operator << (ostream& os, HoaDon& hd);

        friend istream& operator >> (istream& is, KhachHang& kh) {
            stringstream ss;
            ss << "KH" << setw(3) << setfill('0') << kcnt++;
            kh.mkh = ss.str();
            getline(is >> ws, kh.tkh);
            getline(is >> ws, kh.gt);
            getline(is >> ws, kh.date);
            getline(is >> ws, kh.address);
            khptr[kh.mkh] = &kh;

            return is;
        } 
        string gettkh() const {return tkh;}
        string getaddress() const {return address;}
};
int KhachHang::kcnt = 1;

class MatHang {
    private:
        string mmh, tmh, dvt;
        int buy, sell;
        static int hcnt;

    public:
        friend class HoaDon;
        friend ostream& operator << (ostream& os, HoaDon& hd);

        friend istream& operator >> (istream& is, MatHang& mh) {
            stringstream ss;
            ss << "MH" << setw(3) << setfill('0') << hcnt++;
            mh.mmh = ss.str();

            getline(is >> ws, mh.tmh);
            getline(is >>ws, mh.dvt);
            is >> mh.buy >> mh.sell;
            mhptr[mh.mmh] = &mh;

            return is;
        }

        string gettmh() const {return tmh;}
        string getdvt() const {return dvt;}
        int getsell() const {
            return sell;
        }
        int getbuy()const{
            return buy;
        }
};
int MatHang::hcnt = 1;

class HoaDon {
    private:
        string mhd, mkh, mmh;
        KhachHang* pkh;
        MatHang* pmh;
        int sl;
        ll thanhtien;
        static int hdcnt;
    
    public:
        friend istream& operator >> (istream& is, HoaDon& hd) {
            stringstream ss;
            ss << "HD" << setw(3) << setfill('0') << hdcnt++;
            hd.mhd = ss.str();

            is >> hd.mkh >> hd.mmh >> hd.sl;
            
            hd.pkh = khptr[hd.mkh];
            hd.pmh = mhptr[hd.mmh];


            hd.thanhtien = (ll)hd.pmh->getsell() * hd.sl;

            return is;
        }

        friend ostream& operator<<(ostream& os, HoaDon& hd) {
            os << hd.mhd << " " << hd.pkh->gettkh() << " "
               << hd.pkh->getaddress() << " " << hd.pmh->gettmh() << " "
               << hd.pmh->getdvt() << " " << hd.pmh->getbuy() << " "
               << hd.pmh->getsell() << " " << hd.sl << " " << hd.thanhtien
               << NL;
            return os;
        }

        ll getthanhtien() const { return thanhtien; }
        string getmhd() const { return mhd; }
};
int HoaDon::hdcnt = 1;


int main() {
    fastio;
    ifstream inKH("KH.in");
    ifstream inMH("MH.in");
    ifstream inHD("HD.in"); 

    int n, m, k;

    inKH >> n;
    KhachHang KH[n];
    for (KhachHang& kh : KH) {
        inKH >> kh;
    }

    inMH >> m;
    MatHang MH[m];
    for (MatHang& mh : MH) {
        inMH >> mh;
    }
 
    inHD >> k;
    HoaDon HD[k];
    for (HoaDon& hd : HD) {
        inHD >> hd;
    }
    for (HoaDon& hd : HD) {
        cout << hd;
    }

    inKH.close();
    inMH.close();
    inHD.close();
}