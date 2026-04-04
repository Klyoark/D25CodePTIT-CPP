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
        ll money;
        static int hdcnt;
    
    public:
        friend istream& operator >> (istream& is, HoaDon& hd) {
            stringstream ss;
            ss << "HD" << setw(3) << setfill('0') << hdcnt++;
            hd.mhd = ss.str();

            is >> hd.mkh >> hd.mmh >> hd.sl;
            
            hd.pkh = khptr[hd.mkh];
            hd.pmh = mhptr[hd.mmh];

            ll sales = hd.pmh->getsell() - hd.pmh->getbuy();
            hd.money = sales * hd.sl;

            return is;
        }   

        friend ostream& operator << (ostream& os, HoaDon& hd) {
            os << hd.mhd << " " << hd.pkh->gettkh() << " " << hd.pkh->getaddress()
               << " " << hd.pmh->gettmh() << " " << hd.sl << " "
               << hd.sl * hd.pmh->getsell() << " " << hd.money << NL;
            return os;
        }

        ll getmoney() const {
            return money ;
        }
        string getmhd() const {return mhd;}
};
int HoaDon::hdcnt = 1;

void sapxep(HoaDon dshd[], int K) {
    sort(dshd, dshd + K, [](HoaDon& a, HoaDon& b){
        if (a.getmoney() != b.getmoney()) {
            return a.getmoney() > b.getmoney();
        }
        return a.getmhd() < b.getmhd();
    });
}

int main() {
    fastio;

    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];

    sapxep(dshd, K);

    for(i=0;i<K;i++) cout << dshd[i];
    return 0;

    return 0;
}