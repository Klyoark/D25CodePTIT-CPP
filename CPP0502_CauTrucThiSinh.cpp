#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

struct ThiSinh {
    string name, date;
    double s1, s2, s3, total;
};

void nhap(ThiSinh& A) {
    getline(cin >> ws, A.name);
    getline(cin >> ws, A.date);
    cin >> A.s1 >> A.s2 >> A.s3;
    A.total = A.s1 + A.s2 + A.s3;
}

void in(ThiSinh& A) {
    cout << fixed << setprecision(1);
    cout << A.name << " " << A.date << " " << A.total;
}

int main() {
    fastio;
    struct ThiSinh A;

    return 0;
}