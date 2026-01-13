#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false); 
#define ll long long
#define push push_back
#define pop pop_back
constexpr char NL = '\n';
using namespace std;

int main() {
    fastio;
    vector<char> ansA = {'A', 'B', 'B', 'A', 'D', 'C', 'C', 'A', 'B', 'D', 'C', 'C', 'A', 'B', 'D'};
    vector<char> ansB = {'A', 'C', 'C', 'A', 'B', 'C', 'D', 'D', 'B', 'B', 'C', 'D', 'D', 'B', 'B'};
    int t;
    cin >> t;
    while (t--) {
        int de, cor = 0;;
        cin >> de;
        vector<char> in_ans;
        for (int i = 0; i < 15; ++i) {    
            char x;
            cin >> x;
            in_ans.push(x);
        }
        if (de == 101) {
            for (int i = 0; i < 15; ++i) {
                if (in_ans[i] == ansA[i]) {
                    cor++;
                }
            }
        } else {
            for (int i = 0; i < 15; ++i) {
                if (in_ans[i] == ansB[i]) {
                    cor++;
                }
            }
        }
        
        cout << fixed << setprecision(2);
        cout << (double)cor * (10.0/15.0);
        cout << NL;
    }
}