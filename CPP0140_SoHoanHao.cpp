#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
#define pb push_back
#define pa pop_back
constexpr char NL = '\n';
using namespace std;

int main() {
    fastio;

    set<long long> perfect = {
        6LL,
        28LL,
        496LL,
        8128LL,
        33550336LL,
        8589869056LL,
        137438691328LL
    };

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        if (perfect.count(n))
            cout << "1\n";
        else
            cout << "0\n";
    }

    return 0;
}