#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        string a;
        cin >> a;
        
        stack<int> st;
        string res = "";
        int n = a.size();
        
        for (int i = 0; i <= n; ++i) {
            st.push(i + 1);
            if (i == n || a[i] == 'I') {
                while (!st.empty()) {
                    res += to_string(st.top());
                    st.pop();
                }
            }
        }

        cout << res << NL;
    }

    return 0;
}