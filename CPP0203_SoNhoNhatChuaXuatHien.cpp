#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
#define pb push_back
#define pa pop_back
constexpr char NL = '\n';
using namespace std;

//khog bao h code ntn cho bai nay, this is for curiosity sakes, hoc hanh, for fun purposes =))))
int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> A(n);
        bool nul = false;
        for (int& x : A) {
            cin >> x;
        }
        sort(A.begin(), A.end());
        A.erase(unique(A.begin(), A.end()), A.end());
        A.erase(
            remove_if(A.begin(), A.end(), [](int x){return x <= 0;}), 
            A.end()
        );
        if (A.empty()) {
            cout << 1 << NL;
            continue;
        }
        if (A[0] != 1) {
            cout << 1 << NL;
            continue;
        }
        [&](){
            for (int i = 1; i < (int)A.size(); ++i) {
                if (A[i] - A[i - 1] != 1) {
                    cout << A[i - 1] + 1 << NL;
                    return;
                }
            }
            cout << A[A.size() - 1] + 1 << NL;
        }();
    }

    return 0;
}
