#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

struct Point {
    double x, y;
};

void input(Point& P) {
    cin >> P.x >> P.y;
}

double distance(Point& A, Point& B) {
    return sqrt(pow(A.x - B.x, 2) + pow(A.y - B.y, 2));
}

int main() {
    fastio;
    struct Point A, B;
    int t;
    cin >> t;
    while (t--) {
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A, B) << NL;
    }

    return 0;
}